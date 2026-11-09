#include "lcs_texture_pack.hpp"
#include "ge_gpu_backend.hpp"
#include "ge_present_shader.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_imgui_menu.hpp"
#include "lcs_perf_log.hpp"
#include "lcs_render_config.hpp"

#include <algorithm>
#include <array>
#include <bit>
#include <chrono>
#include <cstdio>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <limits>
#include <map>
#include <memory>
#include <mutex>
#include <iostream>
#include <iterator>
#include <span>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <d3d12.h>
#include <d3dcompiler.h>
#include <dxgi1_6.h>
#include <wrl/client.h>
#endif

namespace lcs {

#if defined(_WIN32)
namespace {

using Microsoft::WRL::ComPtr;
constexpr std::uint32_t kReferenceWidth = 480u;
constexpr std::uint32_t kReferenceHeight = 272u;
constexpr std::size_t kGeometryUploadCapacity = 64u * 1024u * 1024u;
constexpr std::size_t kTextureUploadCapacity = 32u * 1024u * 1024u;
constexpr DXGI_FORMAT kColorFormat = DXGI_FORMAT_R8G8B8A8_UNORM;
constexpr DXGI_FORMAT kDepthFormat = DXGI_FORMAT_D32_FLOAT;
constexpr UINT kFrameCount = 2u;
constexpr UINT kSrvCapacity = 65536u;
constexpr UINT kSamplerCapacity = 128u;
constexpr UINT kFramebufferTargetCapacity = 256u;

struct Dx12Batch {
    GeGpuDrawDescriptor draw{};
    std::uint32_t first_vertex{};
    std::uint32_t vertex_count{};
    std::uint32_t first_index{};
    std::uint32_t index_count{};
    bool indexed{};
    bool packed_0115{};
    std::uint32_t logical_draw_count{1u};
    bool framebuffer_feedback{};
    std::uint32_t feedback_address{};
    bool hardware_transform{};
    GeGpuHardwareTransform transform{};
};

struct Dx12TransformConstants {
    std::array<float, 4> row0{};
    std::array<float, 4> row1{};
    std::array<float, 4> row2{};
    std::array<float, 4> row3{};
    std::array<float, 4> view_z{};
    std::array<float, 4> uv{1.0f, 1.0f, 0.0f, 0.0f};
    std::array<float, 4> fog{};
    std::array<std::uint32_t, 4> control{};
    std::array<float, 4> color_mul{1.0f, 1.0f, 1.0f, 1.0f};
    std::array<float, 4> color_add{};
};
static_assert(sizeof(Dx12TransformConstants) == 40u * sizeof(std::uint32_t));

struct Dx12UploadVertex {
    float x{};
    float y{};
    float z{};
    float w{1.0f};
    std::uint32_t rgba{0xFFFFFFFFu};
    float u{};
    float v{};
    float fog_factor{1.0f};
    float q{1.0f};
};
static_assert(sizeof(Dx12UploadVertex) == 36u);

struct Dx12PixelConstants {
    std::uint32_t alpha_control{};
    std::uint32_t texture_control{};
    std::uint32_t texture_env{};
    std::uint32_t fog_control{};
    std::uint32_t framebuffer_format{};
};
static_assert(sizeof(Dx12PixelConstants) == 5u * sizeof(std::uint32_t));

// Textures are placed in large heaps instead of getting a committed resource
// each; creating one costs the driver 0.3-1.8 ms no matter how small it is.
class Dx12TexturePool : public std::enable_shared_from_this<Dx12TexturePool> {
public:
    static constexpr UINT64 kHeapSize = 64ull * 1024ull * 1024ull;
    static constexpr std::size_t kMaxHeaps = 24u;

    explicit Dx12TexturePool(ID3D12Device *device) : device_(device) {}

    bool allocate(UINT64 size, UINT64 alignment, ID3D12Heap *&heap, std::size_t &index,
                  UINT64 &offset) {
        std::lock_guard<std::mutex> lock(mutex_);
        if (size == 0u || size > kHeapSize) return false;
        for (std::size_t i = 0u; i < heaps_.size(); ++i) {
            if (take(heaps_[i], size, alignment, offset)) {
                index = i;
                heap = heaps_[i].heap.Get();
                return true;
            }
        }
        if (!add_heap()) return false;
        if (!take(heaps_.back(), size, alignment, offset)) return false;
        index = heaps_.size() - 1u;
        heap = heaps_.back().heap.Get();
        return true;
    }

    void warm_up() {
        std::lock_guard<std::mutex> lock(mutex_);
        if (heaps_.empty()) (void)add_heap();
    }

    void release(std::size_t index, UINT64 offset, UINT64 size) {
        std::lock_guard<std::mutex> lock(mutex_);
        if (index >= heaps_.size()) return;
        std::map<UINT64, UINT64> &free = heaps_[index].free;
        auto next = free.lower_bound(offset);
        if (next != free.end() && offset + size == next->first) {
            size += next->second;
            next = free.erase(next);
        }
        if (next != free.begin()) {
            auto previous = std::prev(next);
            if (previous->first + previous->second == offset) {
                previous->second += size;
                return;
            }
        }
        free[offset] = size;
    }

private:
    struct Heap {
        ComPtr<ID3D12Heap> heap;
        std::map<UINT64, UINT64> free;  // offset -> size
    };

    bool add_heap() {
        if (heaps_.size() >= kMaxHeaps) return false;
        D3D12_HEAP_DESC desc{};
        desc.SizeInBytes = kHeapSize;
        desc.Properties.Type = D3D12_HEAP_TYPE_DEFAULT;
        desc.Alignment = D3D12_DEFAULT_RESOURCE_PLACEMENT_ALIGNMENT;
        desc.Flags = D3D12_HEAP_FLAG_ALLOW_ONLY_NON_RT_DS_TEXTURES;
        Heap created;
        if (FAILED(device_->CreateHeap(&desc, IID_PPV_ARGS(&created.heap)))) return false;
        created.free[0u] = kHeapSize;
        heaps_.push_back(std::move(created));
        return true;
    }

    static bool take(Heap &heap, UINT64 size, UINT64 alignment, UINT64 &offset) {
        for (auto it = heap.free.begin(); it != heap.free.end(); ++it) {
            const UINT64 begin = it->first;
            const UINT64 end = begin + it->second;
            const UINT64 start = (begin + alignment - 1u) / alignment * alignment;
            if (start + size > end) continue;
            heap.free.erase(it);
            if (start > begin) heap.free[begin] = start - begin;
            if (start + size < end) heap.free[start + size] = end - (start + size);
            offset = start;
            return true;
        }
        return false;
    }

    ID3D12Device *device_;
    std::mutex mutex_;
    std::vector<Heap> heaps_;
};

// Returns its range to the pool when the last reference goes away.
struct Dx12TexturePlacement {
    Dx12TexturePlacement(std::shared_ptr<Dx12TexturePool> owner, std::size_t heap_index,
                         UINT64 range_offset, UINT64 range_size)
        : pool(std::move(owner)), index(heap_index), offset(range_offset), size(range_size) {}
    ~Dx12TexturePlacement() { pool->release(index, offset, size); }
    Dx12TexturePlacement(const Dx12TexturePlacement &) = delete;
    Dx12TexturePlacement &operator=(const Dx12TexturePlacement &) = delete;

    std::shared_ptr<Dx12TexturePool> pool;
    std::size_t index;
    UINT64 offset;
    UINT64 size;
};

struct Dx12FrameResources {
    ComPtr<ID3D12CommandAllocator> allocator;
    ComPtr<ID3D12Resource> upload_buffer;
    std::byte *mapped_upload{};
    ComPtr<ID3D12Resource> texture_upload_buffer;
    std::byte *mapped_texture_upload{};
    std::size_t texture_upload_cursor{};
    ComPtr<ID3D12Resource> settings_upload;
    std::byte *settings_upload_mapped{};
    ComPtr<ID3D12Resource> settings_vertices;
    std::byte *settings_vertices_mapped{};
    ComPtr<ID3D12Resource> settings_texture;
    D3D12_RESOURCE_STATES settings_texture_state{D3D12_RESOURCE_STATE_COPY_DEST};
    UINT settings_srv{};
    ComPtr<ID3D12Resource> fps_upload;
    std::byte *fps_upload_mapped{};
    ComPtr<ID3D12Resource> fps_vertices;
    std::byte *fps_vertices_mapped{};
    ComPtr<ID3D12Resource> fps_texture;
    D3D12_RESOURCE_STATES fps_texture_state{D3D12_RESOURCE_STATE_COPY_DEST};
    UINT fps_srv{};
    UINT64 fence_value{};
    std::vector<ComPtr<ID3D12Resource>> transient_resources;
    std::vector<std::shared_ptr<Dx12TexturePlacement>> transient_placements;
};

struct Dx12Texture {
    GeGpuDrawDescriptor descriptor{};
    ComPtr<ID3D12Resource> image;
    std::shared_ptr<Dx12TexturePlacement> placement;
    ComPtr<ID3D12Resource> pending_upload;
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint32_t mip_levels{1u};
    std::uint32_t srv_index{};
    std::uint32_t sampler_index{};
    std::uint64_t checksum{};
    std::uint64_t signature_epoch{};
    std::uint64_t last_used_epoch{};
    // Shared, so that a texture pack's image is not copied for each texture that shows it.
    std::shared_ptr<const std::vector<std::byte>> pixels;
};

struct Dx12FramebufferTarget {
    std::uint32_t address{};
    std::uint32_t logical_width{};
    std::uint32_t logical_height{};
    ComPtr<ID3D12Resource> color;
    ComPtr<ID3D12Resource> msaa_color;
    ComPtr<ID3D12Resource> depth;
    ComPtr<ID3D12Resource> feedback_copy;
    std::uint32_t rtv_index{};
    std::uint32_t dsv_index{};
    std::uint32_t srv_index{};
    std::uint32_t feedback_srv_index{};
    D3D12_RESOURCE_STATES color_state{D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE};
    D3D12_RESOURCE_STATES msaa_state{D3D12_RESOURCE_STATE_RENDER_TARGET};
    D3D12_RESOURCE_STATES feedback_state{D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE};
    std::uint64_t last_render_epoch{};
};

struct Dx12RetiredSrv {
    std::uint32_t index{};
    UINT64 fence_value{};
};


struct Dx12GeState {
    bool enabled{};
    std::uint32_t display_framebuffer{};
    std::uint32_t display_logical_width{kReferenceWidth};
    std::uint32_t display_logical_height{kReferenceHeight};
    std::uint32_t target_width{480u};
    std::uint32_t target_height{272u};
    UINT sample_count{1u};
    UINT sample_quality{};
    DXGI_FORMAT depth_format{kDepthFormat};
    std::uint32_t depth_bits{32u};
    std::vector<Dx12UploadVertex> vertices;
    std::vector<std::byte> packed_0115_vertices;
    std::vector<std::uint32_t> indices;
    std::vector<Dx12Batch> batches;
    std::vector<std::byte> frame_rgba;
    std::vector<std::byte> last_texture_rgba;
    std::shared_ptr<Dx12TexturePool> texture_pool;

    ComPtr<IDXGIFactory6> factory;
    ComPtr<IDXGIAdapter1> adapter;
    ComPtr<ID3D12Device> device;
    ComPtr<ID3D12CommandQueue> queue;
    std::array<Dx12FrameResources, kFrameCount> frames;
    UINT frame_cursor{};
    ComPtr<ID3D12GraphicsCommandList> list;
    ComPtr<ID3D12CommandAllocator> texture_allocator;
    ComPtr<ID3D12GraphicsCommandList> texture_list;
    ComPtr<ID3D12DescriptorHeap> rtv_heap;
    ComPtr<ID3D12DescriptorHeap> dsv_heap;
    ComPtr<ID3D12DescriptorHeap> srv_heap;
    ComPtr<ID3D12DescriptorHeap> sampler_heap;
    UINT rtv_stride{};
    UINT dsv_stride{};
    UINT srv_stride{};
    UINT sampler_stride{};
    UINT next_rtv{};
    UINT next_dsv{};
    UINT next_srv{1u};
    UINT next_sampler{1u};
    std::unordered_map<std::uint32_t, Dx12FramebufferTarget> frame_targets;
    ComPtr<ID3D12Resource> readback_buffer;
    D3D12_PLACED_SUBRESOURCE_FOOTPRINT readback_footprint{};
    UINT readback_rows{};
    UINT64 readback_row_size{};
    UINT64 readback_bytes{};
    ComPtr<ID3D12Fence> fence;
    HANDLE fence_event{};
    UINT64 next_fence{1u};
    ComPtr<ID3D12RootSignature> root_signature;
    ComPtr<ID3DBlob> vertex_shader;
    ComPtr<ID3DBlob> packed_0115_vertex_shader;
    ComPtr<ID3DBlob> pixel_shader;
    std::unordered_map<std::uint64_t, ComPtr<ID3D12PipelineState>> pipelines;
    std::unordered_map<std::uint64_t, Dx12Texture> textures;
    // The textures least recently used when the cache was last scanned, oldest first.
    std::vector<std::pair<std::uint64_t, std::uint64_t>> eviction_queue;
    std::size_t eviction_next{};
    std::uint64_t last_texture_lookup_key{};
    Dx12Texture *last_texture_lookup{};
    std::vector<std::uint64_t> pending_texture_keys;
    std::vector<std::uint32_t> free_texture_srvs;
    std::vector<Dx12RetiredSrv> retired_texture_srvs;
    std::unordered_map<std::uint64_t, std::uint32_t> sampler_cache;
    std::unordered_set<std::uint32_t> known_frame_targets;
    std::uint32_t last_registered_framebuffer_target{0xFFFFFFFFu};
    std::uint64_t texture_cache_bytes{};
    std::uint64_t video_budget_bytes{};    // the adapter's local memory budget, 0 if unknown
    std::uint64_t cache_full_epoch{~0ull};  // a frame in which nothing more could be evicted
    bool cache_over_logged{};
    std::uint64_t frame_epoch{1u};

    ComPtr<IDXGISwapChain3> swapchain;
    ComPtr<ID3D12DescriptorHeap> swap_rtv_heap;
    std::array<ComPtr<ID3D12Resource>, kFrameCount> backbuffers;
    UINT swap_rtv_stride{};
    std::uint32_t swap_width{};
    std::uint32_t swap_height{};
    ComPtr<ID3D12PipelineState> present_pipeline;
    ComPtr<ID3DBlob> present_vertex_shader;
    ComPtr<ID3DBlob> present_pixel_shader;
    ComPtr<ID3D12PipelineState> settings_pipeline;
    ComPtr<ID3DBlob> settings_vertex_shader;
    ComPtr<ID3DBlob> settings_pixel_shader;
    bool direct_present_ok{};
    std::uint32_t presented_framebuffer{};
    std::uint32_t missed_display_intervals{};
    bool swapchain_tearing{};
    HWND native_window{};
    bool readback_enabled{};
    bool texture_upload_ring_enabled{true};
    std::string adapter_name;
};

Dx12GeState &state() {
    static Dx12GeState s;
    return s;
}

std::uint64_t hash_mix(std::uint64_t hash, std::uint64_t value) noexcept {
    hash ^= value + 0x9E3779B97F4A7C15ull + (hash << 6u) + (hash >> 2u);
    return hash;
}

std::uint64_t texture_key(const GeGpuDrawDescriptor &draw) noexcept {
    if (draw.texture_cache_key_hint != 0u) return draw.texture_cache_key_hint;
    std::uint64_t key = 0xCBF29CE484222325ull;
    const std::uint32_t levels = draw.texture_level_addresses[0] != 0u && draw.texture_mipmap_enabled
        ? std::min<std::uint32_t>(8u, draw.texture_max_level + 1u) : 1u;
    key = hash_mix(key, levels);
    for (std::uint32_t level = 0u; level < levels; ++level) {
        key = hash_mix(key, draw.texture_level_addresses[level] != 0u
            ? draw.texture_level_addresses[level] : draw.texture_address);
        key = hash_mix(key, draw.texture_level_buffer_widths[level] != 0u
            ? draw.texture_level_buffer_widths[level] : draw.texture_buffer_width);
        key = hash_mix(key, draw.texture_level_widths[level] != 0u
            ? draw.texture_level_widths[level] : draw.texture_width);
        key = hash_mix(key, draw.texture_level_heights[level] != 0u
            ? draw.texture_level_heights[level] : draw.texture_height);
    }
    key = hash_mix(key, draw.texture_format);
    key = hash_mix(key, draw.clut_address);
    key = hash_mix(key, draw.clut_format);
    key = hash_mix(key, draw.clut_shift);
    key = hash_mix(key, draw.clut_mask);
    key = hash_mix(key, draw.clut_start);
    key = hash_mix(key, draw.clut_checksum);
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_swizzled));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_min_linear));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mag_linear));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mipmap_enabled));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_mipmap_linear));
    key = hash_mix(key, draw.texture_max_level);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_clamp_u));
    key = hash_mix(key, static_cast<std::uint64_t>(draw.texture_clamp_v));
    key = hash_mix(key, lcs::texture_pack_generation());
    return key;
}

D3D12_CPU_DESCRIPTOR_HANDLE rtv_cpu(Dx12GeState &s, UINT index) noexcept {
    D3D12_CPU_DESCRIPTOR_HANDLE h = s.rtv_heap->GetCPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<SIZE_T>(index) * s.rtv_stride;
    return h;
}

D3D12_CPU_DESCRIPTOR_HANDLE dsv_cpu(Dx12GeState &s, UINT index) noexcept {
    D3D12_CPU_DESCRIPTOR_HANDLE h = s.dsv_heap->GetCPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<SIZE_T>(index) * s.dsv_stride;
    return h;
}

D3D12_CPU_DESCRIPTOR_HANDLE srv_cpu(Dx12GeState &s, UINT index) noexcept {
    D3D12_CPU_DESCRIPTOR_HANDLE h = s.srv_heap->GetCPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<SIZE_T>(index) * s.srv_stride;
    return h;
}

D3D12_GPU_DESCRIPTOR_HANDLE srv_gpu(Dx12GeState &s, UINT index) noexcept {
    D3D12_GPU_DESCRIPTOR_HANDLE h = s.srv_heap->GetGPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<UINT64>(index) * s.srv_stride;
    return h;
}

D3D12_CPU_DESCRIPTOR_HANDLE sampler_cpu(Dx12GeState &s, UINT index) noexcept {
    D3D12_CPU_DESCRIPTOR_HANDLE h = s.sampler_heap->GetCPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<SIZE_T>(index) * s.sampler_stride;
    return h;
}

D3D12_GPU_DESCRIPTOR_HANDLE sampler_gpu(Dx12GeState &s, UINT index) noexcept {
    D3D12_GPU_DESCRIPTOR_HANDLE h = s.sampler_heap->GetGPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<UINT64>(index) * s.sampler_stride;
    return h;
}

void reap_retired_texture_srvs(Dx12GeState &s) noexcept {
    if (!s.fence || s.retired_texture_srvs.empty()) return;
    const UINT64 completed = s.fence->GetCompletedValue();
    std::size_t write = 0u;
    for (std::size_t i = 0u; i < s.retired_texture_srvs.size(); ++i) {
        const Dx12RetiredSrv retired = s.retired_texture_srvs[i];
        if (retired.fence_value == 0u || completed >= retired.fence_value) {
            s.free_texture_srvs.push_back(retired.index);
        } else {
            if (write != i) s.retired_texture_srvs[write] = retired;
            ++write;
        }
    }
    s.retired_texture_srvs.resize(write);
}

std::uint32_t allocate_texture_srv(Dx12GeState &s) noexcept {
    reap_retired_texture_srvs(s);
    if (!s.free_texture_srvs.empty()) {
        const std::uint32_t index = s.free_texture_srvs.back();
        s.free_texture_srvs.pop_back();
        return index;
    }
    if (s.next_srv >= kSrvCapacity) return 0u;
    return s.next_srv++;
}

void retire_texture_srv(Dx12GeState &s, std::uint32_t index) noexcept {
    if (index == 0u) return;
    UINT64 retire_after = 0u;
    for (const Dx12FrameResources &frame : s.frames)
        retire_after = std::max(retire_after, frame.fence_value);
    if (!s.fence || retire_after == 0u || s.fence->GetCompletedValue() >= retire_after)
        s.free_texture_srvs.push_back(index);
    else
        s.retired_texture_srvs.push_back({index, retire_after});
}

D3D12_CPU_DESCRIPTOR_HANDLE swap_rtv(Dx12GeState &s, UINT index) noexcept {
    D3D12_CPU_DESCRIPTOR_HANDLE h = s.swap_rtv_heap->GetCPUDescriptorHandleForHeapStart();
    h.ptr += static_cast<SIZE_T>(index) * s.swap_rtv_stride;
    return h;
}

std::uint64_t hash_bytes(std::span<const std::byte> bytes) noexcept {
    constexpr std::uint64_t kMul = 0x9E3779B97F4A7C15ull;
    std::array<std::uint64_t, 4> lane{0x243F6A8885A308D3ull, 0x13198A2E03707344ull,
                                      0xA4093822299F31D0ull, 0x082EFA98EC4E6C89ull};
    const std::byte *data = bytes.data();
    std::size_t remaining = bytes.size();
    const auto mix = [](std::uint64_t state, std::uint64_t word) noexcept {
        state = (state ^ word) * kMul;
        return state ^ (state >> 29u);
    };
    while (remaining >= 32u) {
        std::array<std::uint64_t, 4> words;
        std::memcpy(words.data(), data, sizeof(words));
        for (std::size_t i = 0u; i < 4u; ++i) lane[i] = mix(lane[i], words[i]);
        data += 32u;
        remaining -= 32u;
    }
    std::uint64_t tail = 0u;
    while (remaining >= 8u) {
        std::uint64_t word;
        std::memcpy(&word, data, sizeof(word));
        tail = mix(tail, word);
        data += 8u;
        remaining -= 8u;
    }
    if (remaining != 0u) {
        std::uint64_t word = 0u;
        std::memcpy(&word, data, remaining);
        tail = mix(tail, word);
    }
    std::uint64_t hash = mix(mix(mix(mix(tail, lane[0]), lane[1]), lane[2]), lane[3]);
    return mix(hash, bytes.size());
}

std::uint32_t packed_texture_control(const GeGpuDrawDescriptor &draw, bool enabled) noexcept {
    return (draw.texture_function & 0xFFu) |
           (static_cast<std::uint32_t>(draw.texture_use_alpha ? 1u : 0u) << 8u) |
           (static_cast<std::uint32_t>(draw.texture_double_color ? 1u : 0u) << 16u) |
           (static_cast<std::uint32_t>(enabled ? 1u : 0u) << 24u);
}

std::uint32_t packed_alpha_control(const GeGpuDrawDescriptor &draw) noexcept {
    return static_cast<std::uint32_t>(draw.alpha_test_enabled ? 1u : 0u) |
           ((draw.alpha_function & 7u) << 8u) |
           ((draw.alpha_reference & 0xFFu) << 16u) |
           ((draw.alpha_mask & 0xFFu) << 24u);
}

Dx12PixelConstants make_pixel_constants(const GeGpuDrawDescriptor &draw,
                                        bool sampled_texture) noexcept {
    Dx12PixelConstants out{};
    out.alpha_control = packed_alpha_control(draw);
    out.texture_control = packed_texture_control(draw, sampled_texture);
    out.texture_env = draw.texture_env & 0x00FFFFFFu;
    out.fog_control = (draw.fog_color & 0x00FFFFFFu) |
        (static_cast<std::uint32_t>(draw.fog_enabled ? 0xFFu : 0u) << 24u);
    out.framebuffer_format = draw.framebuffer_format & 3u;
    return out;
}

Dx12UploadVertex make_upload_vertex(const GeGpuVertex &source) noexcept {
    return {source.x, source.y, source.z, source.w, source.rgba, source.u, source.v,
            source.fog_factor, source.q};
}

bool native_indexed_draw_enabled() noexcept {
    static const bool enabled = [] {
        const char *text = std::getenv("PSPRECOMP_DX12_NATIVE_INDEXED_DRAW");
        if (text == nullptr || *text == '\0') return false;
        return std::strcmp(text, "0") != 0 &&
               std::strcmp(text, "false") != 0 && std::strcmp(text, "FALSE") != 0 &&
               std::strcmp(text, "off") != 0 && std::strcmp(text, "OFF") != 0;
    }();
    return enabled;
}

std::string hr_text(HRESULT hr, const char *where) {
    std::ostringstream out;
    out << where << " failed (HRESULT=0x" << std::hex << std::uppercase
        << static_cast<unsigned long>(hr) << ')';
    LPSTR message = nullptr;
    const DWORD flags = FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM |
                        FORMAT_MESSAGE_IGNORE_INSERTS;
    if (FormatMessageA(flags, nullptr, static_cast<DWORD>(hr),
                       MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                       reinterpret_cast<LPSTR>(&message), 0u, nullptr) != 0u && message != nullptr) {
        std::string text(message);
        LocalFree(message);
        while (!text.empty() && (text.back() == '\r' || text.back() == '\n')) text.pop_back();
        if (!text.empty()) out << ": " << text;
    }
    return out.str();
}

void transition(ID3D12GraphicsCommandList *list, ID3D12Resource *resource,
                D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after) noexcept {
    if (before == after || list == nullptr || resource == nullptr) return;
    D3D12_RESOURCE_BARRIER barrier{};
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Transition.pResource = resource;
    barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    barrier.Transition.StateBefore = before;
    barrier.Transition.StateAfter = after;
    list->ResourceBarrier(1u, &barrier);
}

void prepare_target_for_render(Dx12GeState &s, Dx12FramebufferTarget &target) noexcept {
    if (target.msaa_color) {
        transition(s.list.Get(), target.msaa_color.Get(), target.msaa_state,
                   D3D12_RESOURCE_STATE_RENDER_TARGET);
        target.msaa_state = D3D12_RESOURCE_STATE_RENDER_TARGET;
    } else {
        transition(s.list.Get(), target.color.Get(), target.color_state,
                   D3D12_RESOURCE_STATE_RENDER_TARGET);
        target.color_state = D3D12_RESOURCE_STATE_RENDER_TARGET;
    }
}

void resolve_target_for_sampling(Dx12GeState &s, Dx12FramebufferTarget &target,
                                 bool resume_render) noexcept {
    if (target.msaa_color) {
        transition(s.list.Get(), target.msaa_color.Get(), target.msaa_state,
                   D3D12_RESOURCE_STATE_RESOLVE_SOURCE);
        target.msaa_state = D3D12_RESOURCE_STATE_RESOLVE_SOURCE;
        transition(s.list.Get(), target.color.Get(), target.color_state,
                   D3D12_RESOURCE_STATE_RESOLVE_DEST);
        target.color_state = D3D12_RESOURCE_STATE_RESOLVE_DEST;
        s.list->ResolveSubresource(target.color.Get(), 0u, target.msaa_color.Get(), 0u,
                                   kColorFormat);
        transition(s.list.Get(), target.color.Get(), target.color_state,
                   D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
        target.color_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
        if (resume_render) prepare_target_for_render(s, target);
    } else {
        transition(s.list.Get(), target.color.Get(), target.color_state,
                   D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
        target.color_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    }
}

bool wait_for_fence(Dx12GeState &s, UINT64 value, std::string &error) noexcept {
    if (value == 0u || !s.fence || s.fence->GetCompletedValue() >= value) return true;
    const perf::Scope perf_scope(perf::kFenceWaitUs);
    HRESULT hr = s.fence->SetEventOnCompletion(value, s.fence_event);
    if (FAILED(hr)) {
        error = hr_text(hr, "ID3D12Fence::SetEventOnCompletion(GE frame)");
        return false;
    }
    const DWORD result = WaitForSingleObject(s.fence_event, 5000u);
    if (result != WAIT_OBJECT_0) {
        std::ostringstream out;
        out << "DirectX 12 frame fence wait failed/timed out (wait=" << result << ')';
        if (s.device) {
            const HRESULT removed = s.device->GetDeviceRemovedReason();
            if (FAILED(removed)) out << "; device removed reason=0x" << std::hex
                                     << static_cast<unsigned long>(removed);
        }
        error = out.str();
        return false;
    }
    return true;
}

bool wait_for_gpu(Dx12GeState &s, std::string &error) noexcept {
    if (!s.queue || !s.fence) return true;
    const UINT64 value = s.next_fence++;
    HRESULT hr = s.queue->Signal(s.fence.Get(), value);
    if (FAILED(hr)) {
        error = hr_text(hr, "ID3D12CommandQueue::Signal(GE)");
        return false;
    }
    if (s.fence->GetCompletedValue() >= value) return true;
    const perf::Scope perf_scope(perf::kFenceWaitUs);
    hr = s.fence->SetEventOnCompletion(value, s.fence_event);
    if (FAILED(hr)) {
        error = hr_text(hr, "ID3D12Fence::SetEventOnCompletion(GE)");
        return false;
    }
    const DWORD result = WaitForSingleObject(s.fence_event, 5000u);
    if (result != WAIT_OBJECT_0) {
        std::ostringstream out;
        out << "DirectX 12 GE fence wait failed/timed out (wait=" << result << ')';
        if (s.device) {
            const HRESULT removed = s.device->GetDeviceRemovedReason();
            if (FAILED(removed)) out << "; device removed reason=0x" << std::hex
                                     << static_cast<unsigned long>(removed);
        }
        error = out.str();
        return false;
    }
    return true;
}

bool select_adapter(Dx12GeState &s, std::string &error) noexcept {
    for (UINT index = 0u;; ++index) {
        ComPtr<IDXGIAdapter1> candidate;
        HRESULT hr = s.factory->EnumAdapterByGpuPreference(
            index, DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE, IID_PPV_ARGS(&candidate));
        if (hr == DXGI_ERROR_NOT_FOUND) break;
        if (FAILED(hr)) continue;
        DXGI_ADAPTER_DESC1 desc{};
        candidate->GetDesc1(&desc);
        if ((desc.Flags & DXGI_ADAPTER_FLAG_SOFTWARE) != 0u) continue;
        if (SUCCEEDED(D3D12CreateDevice(candidate.Get(), D3D_FEATURE_LEVEL_11_0,
                                         __uuidof(ID3D12Device), nullptr))) {
            s.adapter = candidate;
            char utf8[512]{};
            const int count = WideCharToMultiByte(CP_UTF8, 0, desc.Description, -1,
                                                   utf8, static_cast<int>(sizeof(utf8)), nullptr, nullptr);
            s.adapter_name = count > 0 ? utf8 : "Direct3D 12 adapter";
            return true;
        }
    }
    error = "No Direct3D 12-capable hardware adapter was found for the GE renderer";
    return false;
}

DXGI_FORMAT requested_depth_format(std::uint32_t bits) noexcept {
    if (bits <= 16u) return DXGI_FORMAT_D16_UNORM;
    if (bits <= 24u) return DXGI_FORMAT_D24_UNORM_S8_UINT;
    return DXGI_FORMAT_D32_FLOAT;
}

bool format_supports_depth(ID3D12Device *device, DXGI_FORMAT format) noexcept {
    if (device == nullptr) return false;
    D3D12_FEATURE_DATA_FORMAT_SUPPORT support{};
    support.Format = format;
    if (FAILED(device->CheckFeatureSupport(D3D12_FEATURE_FORMAT_SUPPORT, &support, sizeof(support))))
        return false;
    return (support.Support1 & D3D12_FORMAT_SUPPORT1_DEPTH_STENCIL) != 0u;
}

void select_depth_and_msaa(Dx12GeState &s) noexcept {
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    s.depth_bits = rendering.depth_precision;
    s.depth_format = requested_depth_format(rendering.depth_precision);
    if (!format_supports_depth(s.device.Get(), s.depth_format)) {
        s.depth_format = DXGI_FORMAT_D32_FLOAT;
        s.depth_bits = 32u;
    }

    UINT requested = static_cast<UINT>(std::clamp(rendering.msaa, 1u, 16u));
    if (requested != 1u && requested != 2u && requested != 4u &&
        requested != 8u && requested != 16u) requested = 1u;
    s.sample_count = 1u;
    s.sample_quality = 0u;
    for (UINT samples = requested; samples >= 2u; samples >>= 1u) {
        D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS color{};
        color.Format = kColorFormat;
        color.SampleCount = samples;
        color.Flags = D3D12_MULTISAMPLE_QUALITY_LEVELS_FLAG_NONE;
        D3D12_FEATURE_DATA_MULTISAMPLE_QUALITY_LEVELS depth{};
        depth.Format = s.depth_format;
        depth.SampleCount = samples;
        depth.Flags = D3D12_MULTISAMPLE_QUALITY_LEVELS_FLAG_NONE;
        const bool color_ok = SUCCEEDED(s.device->CheckFeatureSupport(
            D3D12_FEATURE_MULTISAMPLE_QUALITY_LEVELS, &color, sizeof(color))) &&
            color.NumQualityLevels != 0u;
        const bool depth_ok = SUCCEEDED(s.device->CheckFeatureSupport(
            D3D12_FEATURE_MULTISAMPLE_QUALITY_LEVELS, &depth, sizeof(depth))) &&
            depth.NumQualityLevels != 0u;
        if (color_ok && depth_ok) {
            s.sample_count = samples;
            s.sample_quality = 0u;
            break;
        }
    }
}

D3D12_COMPARISON_FUNC depth_compare(std::uint32_t function) noexcept {
    switch (function & 7u) {
    case 0u: return D3D12_COMPARISON_FUNC_NEVER;
    case 1u: return D3D12_COMPARISON_FUNC_ALWAYS;
    case 2u: return D3D12_COMPARISON_FUNC_EQUAL;
    case 3u: return D3D12_COMPARISON_FUNC_NOT_EQUAL;
    case 4u: return D3D12_COMPARISON_FUNC_LESS;
    case 5u: return D3D12_COMPARISON_FUNC_LESS_EQUAL;
    case 6u: return D3D12_COMPARISON_FUNC_GREATER;
    case 7u: return D3D12_COMPARISON_FUNC_GREATER_EQUAL;
    }
    return D3D12_COMPARISON_FUNC_ALWAYS;
}

std::size_t blend_variant(const GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.blend_enabled || draw.clear_mode) return 0u;
    const std::uint32_t eq = draw.blend_equation & 7u;
    const std::uint32_t src = draw.blend_source_factor & 0xFu;
    const std::uint32_t dst = draw.blend_dest_factor & 0xFu;
    if (eq == 0u && src == 2u && dst == 3u) return 1u;
    if (eq == 0u && src == 10u && dst == 10u) {
        const std::uint32_t fs = draw.blend_fix_source & 0x00FFFFFFu;
        const std::uint32_t fd = draw.blend_fix_dest & 0x00FFFFFFu;
        if (fs == 0x00FFFFFFu && fd == 0u) return 2u;
        if (fs == 0x00FFFFFFu && fd == 0x00FFFFFFu) return 3u;
        bool complements = true;
        for (std::uint32_t shift = 0u; shift < 24u; shift += 8u)
            complements &= (((fs >> shift) & 0xFFu) + ((fd >> shift) & 0xFFu)) == 0xFFu;
        if (complements) return 4u;
    }
    if (eq == 0u && src == 2u && dst == 10u &&
        (draw.blend_fix_dest & 0x00FFFFFFu) == 0x00FFFFFFu) return 5u;
    return 0u;
}

std::uint8_t color_write_mask(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint8_t mask = 0u;
    for (std::uint32_t channel = 0u; channel < 4u; ++channel) {
        const std::uint32_t byte = (draw.color_write_mask >> (channel * 8u)) & 0xFFu;
        if (byte != 0xFFu) mask |= static_cast<std::uint8_t>(1u << channel);
    }
    return mask;
}

std::uint64_t pipeline_key(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint64_t key = static_cast<std::uint64_t>(draw.depth_test_enabled ? 1u : 0u);
    key |= static_cast<std::uint64_t>(draw.depth_write_enabled ? 1u : 0u) << 1u;
    key |= static_cast<std::uint64_t>(draw.depth_function & 7u) << 2u;
    key |= static_cast<std::uint64_t>(blend_variant(draw) & 7u) << 5u;
    key |= static_cast<std::uint64_t>(color_write_mask(draw) & 0xFu) << 8u;
    return key;
}

bool hardware_transform_equal(const GeGpuHardwareTransform &a,
                              const GeGpuHardwareTransform &b) noexcept {
    return a.model_to_clip == b.model_to_clip &&
           a.model_to_view_z == b.model_to_view_z &&
           a.viewport_scale_x == b.viewport_scale_x &&
           a.viewport_scale_y == b.viewport_scale_y &&
           a.viewport_scale_z == b.viewport_scale_z &&
           a.viewport_center_x == b.viewport_center_x &&
           a.viewport_center_y == b.viewport_center_y &&
           a.viewport_center_z == b.viewport_center_z &&
           a.viewport_offset_x == b.viewport_offset_x &&
           a.viewport_offset_y == b.viewport_offset_y &&
           a.uv_scale_u == b.uv_scale_u && a.uv_scale_v == b.uv_scale_v &&
           a.uv_offset_u == b.uv_offset_u && a.uv_offset_v == b.uv_offset_v &&
           a.fog_end == b.fog_end && a.fog_slope == b.fog_slope &&
           a.depth_clip_enabled == b.depth_clip_enabled &&
           a.cull_enabled == b.cull_enabled &&
           a.accept_counter_clockwise == b.accept_counter_clockwise &&
           a.primitive == b.primitive &&
           a.vertex_color_affine == b.vertex_color_affine &&
           a.vertex_color_mul == b.vertex_color_mul &&
           a.vertex_color_add == b.vertex_color_add;
}

bool adjacent_batch_merge_compatible(const Dx12Batch &a, const Dx12Batch &b) noexcept {
    if (a.framebuffer_feedback || b.framebuffer_feedback) return false;
    if (a.indexed != b.indexed) return false;
    if (a.packed_0115 != b.packed_0115) return false;
    if (a.first_vertex + a.vertex_count != b.first_vertex) return false;
    if (a.indexed && a.first_index + a.index_count != b.first_index) return false;
    if ((a.draw.framebuffer_address & 0x001FFFF0u) !=
        (b.draw.framebuffer_address & 0x001FFFF0u)) return false;
    if (a.hardware_transform != b.hardware_transform) return false;
    if ((a.hardware_transform && a.transform.primitive != 3u) ||
        (b.hardware_transform && b.transform.primitive != 3u)) return false;
    if (pipeline_key(a.draw) != pipeline_key(b.draw)) return false;
    if (a.draw.texture_enabled != b.draw.texture_enabled) return false;
    if (a.draw.texture_enabled && texture_key(a.draw) != texture_key(b.draw)) return false;
    if (a.draw.scissor_x0 != b.draw.scissor_x0 || a.draw.scissor_y0 != b.draw.scissor_y0 ||
        a.draw.scissor_x1 != b.draw.scissor_x1 || a.draw.scissor_y1 != b.draw.scissor_y1)
        return false;
    if (blend_variant(a.draw) == 4u &&
        (a.draw.blend_fix_source & 0x00FFFFFFu) !=
        (b.draw.blend_fix_source & 0x00FFFFFFu)) return false;
    const Dx12PixelConstants pa = make_pixel_constants(a.draw, a.draw.texture_enabled);
    const Dx12PixelConstants pb = make_pixel_constants(b.draw, b.draw.texture_enabled);
    if (std::memcmp(&pa, &pb, sizeof(pa)) != 0) return false;
    if (a.draw.texture_mipmap_enabled != b.draw.texture_mipmap_enabled ||
        a.draw.texture_mipmap_linear != b.draw.texture_mipmap_linear) return false;
    return !a.hardware_transform || hardware_transform_equal(a.transform, b.transform);
}

bool append_or_merge_batch(Dx12GeState &s, Dx12Batch batch) {
    static const bool merge_enabled = [] {
        const char *text = std::getenv("PSPRECOMP_DX12_BATCH_MERGE");
        return text == nullptr || (*text != '\0' && std::strcmp(text, "0") != 0 &&
               std::strcmp(text, "false") != 0 && std::strcmp(text, "FALSE") != 0 &&
               std::strcmp(text, "off") != 0 && std::strcmp(text, "OFF") != 0);
    }();
    if (merge_enabled && !s.batches.empty() && adjacent_batch_merge_compatible(s.batches.back(), batch)) {
        Dx12Batch &previous = s.batches.back();
        const bool counts_fit =
            batch.vertex_count <= std::numeric_limits<std::uint32_t>::max() - previous.vertex_count &&
            (!batch.indexed || batch.index_count <=
                std::numeric_limits<std::uint32_t>::max() - previous.index_count);
        bool indices_fit = counts_fit;
        std::size_t begin = 0u, end = 0u;
        std::uint32_t base_delta = 0u;
        if (indices_fit && batch.indexed) {
            base_delta = batch.first_vertex - previous.first_vertex;
            begin = batch.first_index;
            end = begin + batch.index_count;
            indices_fit = end <= s.indices.size();
            for (std::size_t i = begin; indices_fit && i < end; ++i)
                indices_fit = s.indices[i] <= std::numeric_limits<std::uint32_t>::max() - base_delta;
        }
        if (indices_fit) {
            if (batch.indexed) {
                for (std::size_t i = begin; i < end; ++i) s.indices[i] += base_delta;
                previous.index_count += batch.index_count;
            }
            previous.vertex_count += batch.vertex_count;
            previous.logical_draw_count += batch.logical_draw_count;
            return true;
        }
    }
    s.batches.push_back(std::move(batch));
    return false;
}

bool compile_shaders(Dx12GeState &s, std::string &error) noexcept {
    const char *shader = R"HLSL(
Texture2D<float4> SourceTexture : register(t0);
SamplerState SourceSampler : register(s0);
cbuffer DrawTransform : register(b0) {
    float4 TransformRow0;
    float4 TransformRow1;
    float4 TransformRow2;
    float4 TransformRow3;
    float4 ModelToViewZ;
    float4 UvScaleOffset;
    float4 FogParameters;
    uint4 TransformControl;
    float4 VertexColorMul;
    float4 VertexColorAdd;
};
cbuffer DrawPixelState : register(b1) {
    uint AlphaControlPacked;
    uint TextureControlPacked;
    uint TextureEnvPacked;
    uint FogControlPacked;
    uint FramebufferFormat;
    float3 ReservedRight;
    float ReservedInvProjectionX;
    float3 ReservedUp;
    float ReservedInvProjectionY;
    float3 ReservedCameraPosition;
    float ReservedTime;
    float ReservedCoverage;
    float ReservedOpacity;
    float ReservedMarchSteps;
    float ReservedEnabled;
};
struct VSIn {
    float4 position : POSITION;
    float4 color : COLOR0;
    float2 uv : TEXCOORD0;
    float q : TEXCOORD1;
    float fogFactor : FOG0;
};
struct VSOut {
    float4 position : SV_POSITION;
    float4 color : COLOR0;
    float2 uv : TEXCOORD0;
    float q : TEXCOORD1;
    float fogFactor : FOG0;
};
VSOut VSMain(VSIn input) {
    VSOut o;
    if (TransformControl.x == 1u) {
        float4 p = input.position;
        float clipW = dot(TransformRow3, p);
        if (abs(clipW) < 1.0e-12) clipW = 1.0;
        float clipZ = dot(TransformRow2, p);
        if (TransformControl.y == 0u) clipZ = clamp(clipZ, 0.0, clipW);
        o.position = float4(dot(TransformRow0, p), dot(TransformRow1, p), clipZ, clipW);
        o.uv = input.uv * UvScaleOffset.xy + UvScaleOffset.zw;
        float viewZ = dot(ModelToViewZ, p);
        o.fogFactor = saturate((viewZ + FogParameters.x) * FogParameters.y);
    } else if (TransformControl.x == 2u) {
        float clipW = input.position.w;
        if (abs(clipW) < 1.0e-12) clipW = 1.0;
        o.position = float4(
            (input.position.x * UvScaleOffset.x - 1.0) * clipW,
            (1.0 - input.position.y * UvScaleOffset.y) * clipW,
            saturate(input.position.z * UvScaleOffset.z) * clipW,
            clipW);
        o.uv = input.uv;
        o.fogFactor = input.fogFactor;
    } else {
        o.position = input.position;
        o.uv = input.uv;
        o.fogFactor = input.fogFactor;
    }
    o.color = input.color;
    if (TransformControl.z != 0u) {
        float4 lit = saturate(o.color * VertexColorMul + VertexColorAdd);
        o.color = floor(lit * 255.0) * (1.0 / 255.0);
    }
    o.q = input.q;
    return o;
}

// Stage 45.4: direct GPU decode for VCS's dominant 10-byte PSP world vertex
// (vtype 0x000115). The CPU only snapshots the original bytes; conversion to
// float UV / RGBA8 / normalized XYZ is performed by the vertex shader.
struct VSInPacked0115 {
    uint2 uv8 : TEXCOORD2;
    uint color5551 : COLOR1;
    int positionX : POSITION1;
    int positionY : POSITION3;
    int positionZ : POSITION2;
};
float Expand5ToFloat(uint value) {
    value &= 31u;
    uint expanded = (value << 3u) | (value >> 2u);
    return float(expanded) * (1.0 / 255.0);
}
VSOut VSMainPacked0115(VSInPacked0115 input) {
    VSOut o;
    float3 model = float3(float(input.positionX), float(input.positionY), float(input.positionZ)) * (1.0 / 32768.0);
    float4 p = float4(model, 1.0);
    float clipW = dot(TransformRow3, p);
    if (abs(clipW) < 1.0e-12) clipW = 1.0;
    float clipZ = dot(TransformRow2, p);
    if (TransformControl.y == 0u) clipZ = clamp(clipZ, 0.0, clipW);
    o.position = float4(dot(TransformRow0, p), dot(TransformRow1, p), clipZ, clipW);
    float2 rawUv = float2(input.uv8) * (1.0 / 128.0);
    o.uv = rawUv * UvScaleOffset.xy + UvScaleOffset.zw;
    float viewZ = dot(ModelToViewZ, p);
    o.fogFactor = saturate((viewZ + FogParameters.x) * FogParameters.y);
    uint packed = input.color5551;
    o.color = float4(
        Expand5ToFloat(packed),
        Expand5ToFloat(packed >> 5u),
        Expand5ToFloat(packed >> 10u),
        (packed & 0x8000u) != 0u ? 1.0 : 0.0);
    if (TransformControl.z != 0u) {
        // Match the CPU path's per-channel RGBA8 clamp/truncation boundary.
        float4 lit = saturate(o.color * VertexColorMul + VertexColorAdd);
        o.color = floor(lit * 255.0) * (1.0 / 255.0);
    }
    o.q = 1.0;
    return o;
}

bool AlphaPass(uint fn, uint lhs, uint rhs) {
    switch (fn & 7u) {
        case 0u: return false;
        case 1u: return true;
        case 2u: return lhs == rhs;
        case 3u: return lhs != rhs;
        case 4u: return lhs < rhs;
        case 5u: return lhs <= rhs;
        case 6u: return lhs > rhs;
        case 7u: return lhs >= rhs;
    }
    return true;
}
float4 ApplyTextureFunction(float4 vertex, float4 textureValue, uint4 control, uint4 envBytes) {
    uint fn = control.x & 7u;
    bool useAlpha = control.y != 0u;
    bool doubleColor = control.z != 0u;
    float4 outColor = vertex;
    float3 env = float3(envBytes.xyz) / 255.0;
    if (fn == 0u) { // MODULATE
        outColor.rgb = vertex.rgb * textureValue.rgb;
        outColor.a = useAlpha ? vertex.a * textureValue.a : vertex.a;
    } else if (fn == 1u) { // DECAL
        float a = useAlpha ? textureValue.a : 1.0;
        outColor.rgb = lerp(vertex.rgb, textureValue.rgb, a);
        outColor.a = vertex.a;
    } else if (fn == 2u) { // BLEND
        outColor.rgb = lerp(vertex.rgb, env, textureValue.rgb);
        outColor.a = useAlpha ? vertex.a * textureValue.a : vertex.a;
    } else if (fn == 3u) { // REPLACE
        outColor = textureValue;
        if (!useAlpha) outColor.a = vertex.a;
    } else if (fn == 4u) { // ADD
        outColor.rgb = saturate(vertex.rgb + textureValue.rgb);
        outColor.a = useAlpha ? vertex.a * textureValue.a : vertex.a;
    }
    if (doubleColor) outColor.rgb = saturate(outColor.rgb * 2.0);
    return outColor;
}
float Quantize(float value, float levels) {
    return floor(saturate(value) * levels + 0.5) / levels;
}
float4 QuantizeFramebuffer(float4 color, uint format) {
    color = saturate(color);
    if ((format & 3u) == 0u) { // PSP GU_PSM_5650
        color.r = Quantize(color.r, 31.0);
        color.g = Quantize(color.g, 63.0);
        color.b = Quantize(color.b, 31.0);
        color.a = 1.0;
    } else if ((format & 3u) == 1u) { // GU_PSM_5551
        color.rgb = float3(Quantize(color.r,31.0), Quantize(color.g,31.0), Quantize(color.b,31.0));
        color.a = color.a >= 0.5 ? 1.0 : 0.0;
    } else if ((format & 3u) == 2u) { // GU_PSM_4444
        color = float4(Quantize(color.r,15.0), Quantize(color.g,15.0),
                       Quantize(color.b,15.0), Quantize(color.a,15.0));
    }
    return color;
}
float4 PSMain(VSOut input) : SV_TARGET {
    const uint4 textureControl = uint4(TextureControlPacked & 0xFFu,
        (TextureControlPacked >> 8u) & 0xFFu, (TextureControlPacked >> 16u) & 0xFFu,
        (TextureControlPacked >> 24u) & 0xFFu);
    const uint4 textureEnv = uint4(TextureEnvPacked & 0xFFu,
        (TextureEnvPacked >> 8u) & 0xFFu, (TextureEnvPacked >> 16u) & 0xFFu, 0u);
    const uint4 fogControl = uint4(FogControlPacked & 0xFFu,
        (FogControlPacked >> 8u) & 0xFFu, (FogControlPacked >> 16u) & 0xFFu,
        (FogControlPacked >> 24u) & 0xFFu);
    const uint4 alphaControl = uint4(AlphaControlPacked & 0xFFu,
        (AlphaControlPacked >> 8u) & 0xFFu, (AlphaControlPacked >> 16u) & 0xFFu,
        (AlphaControlPacked >> 24u) & 0xFFu);
    float4 color = saturate(input.color);
    if (textureControl.w != 0u) {
        float q = abs(input.q) < 1.0e-20 ? 1.0 : input.q;
        float2 uv = input.uv / q;
        float4 texel = SourceTexture.Sample(SourceSampler, uv);
        color = ApplyTextureFunction(color, texel, textureControl, textureEnv);
    }
    if (fogControl.w != 0u) {
        float3 fog = float3(fogControl.xyz) / 255.0;
        color.rgb = lerp(fog, color.rgb, saturate(input.fogFactor));
    }
    if (alphaControl.x != 0u) {
        uint a = (uint)floor(saturate(color.a) * 255.0 + 0.5);
        uint mask = alphaControl.w;
        if (!AlphaPass(alphaControl.y, a & mask, alphaControl.z & mask)) discard;
    }
    return QuantizeFramebuffer(color, FramebufferFormat);
}
)HLSL";
    UINT flags = D3DCOMPILE_OPTIMIZATION_LEVEL3 | D3DCOMPILE_WARNINGS_ARE_ERRORS;
    ComPtr<ID3DBlob> errors;
    HRESULT hr = D3DCompile(shader, std::strlen(shader), "LCSNativeDX12GE", nullptr, nullptr,
                            "VSMain", "vs_5_1", flags, 0u, &s.vertex_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE VS)");
        return false;
    }
    errors.Reset();
    hr = D3DCompile(shader, std::strlen(shader), "LCSNativeDX12GE", nullptr, nullptr,
                    "VSMainPacked0115", "vs_5_1", flags, 0u,
                    &s.packed_0115_vertex_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE packed 0115 VS)");
        return false;
    }
    errors.Reset();
    hr = D3DCompile(shader, std::strlen(shader), "LCSNativeDX12GE", nullptr, nullptr,
                    "PSMain", "ps_5_1", flags, 0u, &s.pixel_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE PS)");
        return false;
    }

    const char *present = kGePresentShaderHlsl;
    errors.Reset();
    hr = D3DCompile(present, std::strlen(present), "LCSNativeDX12GEPresent", nullptr, nullptr,
                    "PresentVS", "vs_5_1", flags, 0u, &s.present_vertex_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE Present VS)");
        return false;
    }
    errors.Reset();
    hr = D3DCompile(present, std::strlen(present), "LCSNativeDX12GEPresent", nullptr, nullptr,
                    "PresentPS", "ps_5_1", flags, 0u, &s.present_pixel_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE Present PS)");
        return false;
    }
    errors.Reset();
    hr = D3DCompile(present, std::strlen(present), "LCSNativeDX12GEPresent", nullptr, nullptr,
                    "OverlayVS", "vs_5_1", flags, 0u, &s.settings_vertex_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE settings VS)");
        return false;
    }
    errors.Reset();
    hr = D3DCompile(present, std::strlen(present), "LCSNativeDX12GEPresent", nullptr, nullptr,
                    "OverlayPS", "ps_5_1", flags, 0u, &s.settings_pixel_shader, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3DCompile(DX12 GE settings PS)");
        return false;
    }
    return true;
}

bool create_root_signature(Dx12GeState &s, std::string &error) noexcept {
    D3D12_DESCRIPTOR_RANGE srv_range{};
    srv_range.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SRV;
    srv_range.NumDescriptors = 1u;
    srv_range.BaseShaderRegister = 0u;
    srv_range.RegisterSpace = 0u;
    srv_range.OffsetInDescriptorsFromTableStart = 0u;
    D3D12_DESCRIPTOR_RANGE sampler_range{};
    sampler_range.RangeType = D3D12_DESCRIPTOR_RANGE_TYPE_SAMPLER;
    sampler_range.NumDescriptors = 1u;
    sampler_range.BaseShaderRegister = 0u;
    sampler_range.RegisterSpace = 0u;
    sampler_range.OffsetInDescriptorsFromTableStart = 0u;
    std::array<D3D12_ROOT_PARAMETER, 4> parameters{};
    parameters[0].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
    parameters[0].DescriptorTable.NumDescriptorRanges = 1u;
    parameters[0].DescriptorTable.pDescriptorRanges = &srv_range;
    parameters[0].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    parameters[1].ParameterType = D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE;
    parameters[1].DescriptorTable.NumDescriptorRanges = 1u;
    parameters[1].DescriptorTable.pDescriptorRanges = &sampler_range;
    parameters[1].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    parameters[2].ParameterType = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
    parameters[2].Constants.ShaderRegister = 0u;
    parameters[2].Constants.RegisterSpace = 0u;
    parameters[2].Constants.Num32BitValues = 40u;
    parameters[2].ShaderVisibility = D3D12_SHADER_VISIBILITY_VERTEX;
    parameters[3].ParameterType = D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS;
    parameters[3].Constants.ShaderRegister = 1u;
    parameters[3].Constants.RegisterSpace = 0u;
    parameters[3].Constants.Num32BitValues = 21u;
    parameters[3].ShaderVisibility = D3D12_SHADER_VISIBILITY_PIXEL;
    D3D12_ROOT_SIGNATURE_DESC desc{};
    desc.NumParameters = static_cast<UINT>(parameters.size());
    desc.pParameters = parameters.data();
    desc.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT;
    ComPtr<ID3DBlob> blob, errors;
    HRESULT hr = D3D12SerializeRootSignature(&desc, D3D_ROOT_SIGNATURE_VERSION_1,
                                              &blob, &errors);
    if (FAILED(hr)) {
        error = errors ? std::string(static_cast<const char *>(errors->GetBufferPointer()), errors->GetBufferSize())
                       : hr_text(hr, "D3D12SerializeRootSignature(DX12 GE)");
        return false;
    }
    hr = s.device->CreateRootSignature(0u, blob->GetBufferPointer(), blob->GetBufferSize(),
                                       IID_PPV_ARGS(&s.root_signature));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateRootSignature(DX12 GE)");
        return false;
    }
    return true;
}

bool create_targets(Dx12GeState &s, std::string &error) noexcept {
    D3D12_DESCRIPTOR_HEAP_DESC rtv_desc{};
    rtv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    rtv_desc.NumDescriptors = kFramebufferTargetCapacity;
    HRESULT hr = s.device->CreateDescriptorHeap(&rtv_desc, IID_PPV_ARGS(&s.rtv_heap));
    if (FAILED(hr)) { error = hr_text(hr, "CreateDescriptorHeap(DX12 GE RTV)"); return false; }
    s.rtv_stride = s.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);

    D3D12_DESCRIPTOR_HEAP_DESC dsv_desc{};
    dsv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_DSV;
    dsv_desc.NumDescriptors = kFramebufferTargetCapacity;
    hr = s.device->CreateDescriptorHeap(&dsv_desc, IID_PPV_ARGS(&s.dsv_heap));
    if (FAILED(hr)) { error = hr_text(hr, "CreateDescriptorHeap(DX12 GE DSV)"); return false; }
    s.dsv_stride = s.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_DSV);

    D3D12_DESCRIPTOR_HEAP_DESC srv_desc{};
    srv_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
    srv_desc.NumDescriptors = kSrvCapacity;
    srv_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    hr = s.device->CreateDescriptorHeap(&srv_desc, IID_PPV_ARGS(&s.srv_heap));
    if (FAILED(hr)) { error = hr_text(hr, "CreateDescriptorHeap(DX12 GE SRV)"); return false; }
    s.srv_stride = s.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);

    D3D12_DESCRIPTOR_HEAP_DESC sampler_desc{};
    sampler_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER;
    sampler_desc.NumDescriptors = kSamplerCapacity;
    sampler_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    hr = s.device->CreateDescriptorHeap(&sampler_desc, IID_PPV_ARGS(&s.sampler_heap));
    if (FAILED(hr)) { error = hr_text(hr, "CreateDescriptorHeap(DX12 GE sampler)"); return false; }
    s.sampler_stride = s.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER);

    D3D12_SHADER_RESOURCE_VIEW_DESC null_srv{};
    null_srv.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    null_srv.Format = kColorFormat;
    null_srv.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    null_srv.Texture2D.MipLevels = 1u;
    s.device->CreateShaderResourceView(nullptr, &null_srv, srv_cpu(s, 0u));

    D3D12_SAMPLER_DESC default_sampler{};
    default_sampler.Filter = D3D12_FILTER_MIN_MAG_MIP_POINT;
    default_sampler.AddressU = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    default_sampler.AddressV = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    default_sampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    default_sampler.MinLOD = 0.0f;
    default_sampler.MaxLOD = D3D12_FLOAT32_MAX;
    default_sampler.MaxAnisotropy = 1u;
    default_sampler.ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
    s.device->CreateSampler(&default_sampler, sampler_cpu(s, 0u));

    if (s.readback_enabled) {
        D3D12_RESOURCE_DESC color{};
        color.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
        color.Width = s.target_width;
        color.Height = s.target_height;
        color.DepthOrArraySize = 1u;
        color.MipLevels = 1u;
        color.Format = kColorFormat;
        color.SampleDesc.Count = 1u;
        color.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
        color.Flags = D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET;
        s.device->GetCopyableFootprints(&color, 0u, 1u, 0u, &s.readback_footprint,
                                         &s.readback_rows, &s.readback_row_size, &s.readback_bytes);
        D3D12_RESOURCE_DESC readback{};
        readback.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        readback.Width = std::max<UINT64>(s.readback_bytes, 256u);
        readback.Height = 1u;
        readback.DepthOrArraySize = 1u;
        readback.MipLevels = 1u;
        readback.Format = DXGI_FORMAT_UNKNOWN;
        readback.SampleDesc.Count = 1u;
        readback.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        D3D12_HEAP_PROPERTIES readback_heap{};
        readback_heap.Type = D3D12_HEAP_TYPE_READBACK;
        hr = s.device->CreateCommittedResource(&readback_heap, D3D12_HEAP_FLAG_NONE, &readback,
                                                D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                                IID_PPV_ARGS(&s.readback_buffer));
        if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 GE readback)"); return false; }
        s.frame_rgba.resize(static_cast<std::size_t>(s.target_width) * s.target_height * 4u);
    } else {
        s.frame_rgba.clear();
        s.readback_bytes = 0u;
    }

    return true;
}

Dx12FramebufferTarget *find_framebuffer_target(Dx12GeState &s, std::uint32_t address) noexcept {
    const auto found = s.frame_targets.find(address & 0x001FFFF0u);
    return found == s.frame_targets.end() ? nullptr : &found->second;
}

const Dx12FramebufferTarget *find_framebuffer_target(const Dx12GeState &s,
                                                      std::uint32_t address) noexcept {
    const auto found = s.frame_targets.find(address & 0x001FFFF0u);
    return found == s.frame_targets.end() ? nullptr : &found->second;
}

void note_framebuffer_logical_extent(Dx12GeState &s, std::uint32_t address,
                                     std::uint32_t width, std::uint32_t height) noexcept {
    address &= 0x001FFFF0u;
    Dx12FramebufferTarget *target = find_framebuffer_target(s, address);
    if (target == nullptr) return;
    if (address == s.display_framebuffer) {
        target->logical_width = s.display_logical_width;
        target->logical_height = s.display_logical_height;
        return;
    }
    if (width != 0u) target->logical_width = std::max(target->logical_width, width);
    if (height != 0u) target->logical_height = std::max(target->logical_height, height);
}

bool ensure_framebuffer_target(Dx12GeState &s, std::uint32_t address,
                               std::string &error) noexcept {
    address &= 0x001FFFF0u;
    if (auto *existing = find_framebuffer_target(s, address)) return existing->color != nullptr;
    if (!s.device || !s.rtv_heap || !s.dsv_heap || !s.srv_heap ||
        s.next_rtv >= kFramebufferTargetCapacity || s.next_dsv >= kFramebufferTargetCapacity ||
        s.next_srv >= kSrvCapacity) {
        error = "DX12 framebuffer target/descriptor capacity exhausted";
        return false;
    }

    Dx12FramebufferTarget target{};
    target.address = address;
    target.rtv_index = s.next_rtv++;
    target.dsv_index = s.next_dsv++;
    target.srv_index = s.next_srv++;

    D3D12_HEAP_PROPERTIES default_heap{};
    default_heap.Type = D3D12_HEAP_TYPE_DEFAULT;

    D3D12_RESOURCE_DESC color{};
    color.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    color.Width = s.target_width;
    color.Height = s.target_height;
    color.DepthOrArraySize = 1u;
    color.MipLevels = 1u;
    color.Format = kColorFormat;
    color.SampleDesc.Count = 1u;
    color.SampleDesc.Quality = 0u;
    color.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    color.Flags = s.sample_count == 1u ? D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET
                                       : D3D12_RESOURCE_FLAG_NONE;
    D3D12_CLEAR_VALUE color_clear{};
    color_clear.Format = kColorFormat;
    color_clear.Color[3] = 1.0f;
    HRESULT hr = s.device->CreateCommittedResource(
        &default_heap, D3D12_HEAP_FLAG_NONE, &color,
        D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE,
        s.sample_count == 1u ? &color_clear : nullptr,
        IID_PPV_ARGS(&target.color));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 framebuffer color)"); return false; }

    ID3D12Resource *rtv_resource = target.color.Get();
    if (s.sample_count > 1u) {
        D3D12_RESOURCE_DESC msaa = color;
        msaa.SampleDesc.Count = s.sample_count;
        msaa.SampleDesc.Quality = s.sample_quality;
        msaa.Flags = D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET;
        hr = s.device->CreateCommittedResource(&default_heap, D3D12_HEAP_FLAG_NONE, &msaa,
                                                D3D12_RESOURCE_STATE_RENDER_TARGET,
                                                &color_clear, IID_PPV_ARGS(&target.msaa_color));
        if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 framebuffer MSAA color)"); return false; }
        target.msaa_state = D3D12_RESOURCE_STATE_RENDER_TARGET;
        rtv_resource = target.msaa_color.Get();
    }
    s.device->CreateRenderTargetView(rtv_resource, nullptr, rtv_cpu(s, target.rtv_index));

    D3D12_SHADER_RESOURCE_VIEW_DESC srv{};
    srv.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    srv.Format = kColorFormat;
    srv.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    srv.Texture2D.MipLevels = 1u;
    s.device->CreateShaderResourceView(target.color.Get(), &srv, srv_cpu(s, target.srv_index));

    D3D12_RESOURCE_DESC depth{};
    depth.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    depth.Width = s.target_width;
    depth.Height = s.target_height;
    depth.DepthOrArraySize = 1u;
    depth.MipLevels = 1u;
    depth.Format = s.depth_format;
    depth.SampleDesc.Count = s.sample_count;
    depth.SampleDesc.Quality = s.sample_quality;
    depth.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    depth.Flags = D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL;
    D3D12_CLEAR_VALUE depth_clear{};
    depth_clear.Format = s.depth_format;
    depth_clear.DepthStencil.Depth = 0.0f;
    depth_clear.DepthStencil.Stencil = 0u;
    hr = s.device->CreateCommittedResource(&default_heap, D3D12_HEAP_FLAG_NONE, &depth,
                                            D3D12_RESOURCE_STATE_DEPTH_WRITE, &depth_clear,
                                            IID_PPV_ARGS(&target.depth));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 framebuffer depth)"); return false; }
    D3D12_DEPTH_STENCIL_VIEW_DESC dsv{};
    dsv.Format = s.depth_format;
    dsv.ViewDimension = s.sample_count > 1u ? D3D12_DSV_DIMENSION_TEXTURE2DMS
                                            : D3D12_DSV_DIMENSION_TEXTURE2D;
    s.device->CreateDepthStencilView(target.depth.Get(), &dsv, dsv_cpu(s, target.dsv_index));

    target.color_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    s.frame_targets.emplace(address, std::move(target));
    s.known_frame_targets.insert(address);
    return true;
}

bool ensure_feedback_copy(Dx12GeState &s, Dx12FramebufferTarget &target,
                          std::string &error) noexcept {
    if (target.feedback_copy) return true;
    if (s.next_srv >= kSrvCapacity) {
        error = "DX12 feedback SRV descriptor capacity exhausted";
        return false;
    }
    D3D12_HEAP_PROPERTIES default_heap{};
    default_heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    D3D12_RESOURCE_DESC color{};
    color.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    color.Width = s.target_width;
    color.Height = s.target_height;
    color.DepthOrArraySize = 1u;
    color.MipLevels = 1u;
    color.Format = kColorFormat;
    color.SampleDesc.Count = 1u;
    color.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    color.Flags = D3D12_RESOURCE_FLAG_NONE;
    HRESULT hr = s.device->CreateCommittedResource(&default_heap, D3D12_HEAP_FLAG_NONE, &color,
                                                    D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE,
                                                    nullptr, IID_PPV_ARGS(&target.feedback_copy));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 feedback snapshot)"); return false; }
    target.feedback_srv_index = s.next_srv++;
    D3D12_SHADER_RESOURCE_VIEW_DESC srv{};
    srv.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    srv.Format = kColorFormat;
    srv.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    srv.Texture2D.MipLevels = 1u;
    s.device->CreateShaderResourceView(target.feedback_copy.Get(), &srv,
                                       srv_cpu(s, target.feedback_srv_index));
    target.feedback_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    return true;
}

ComPtr<ID3D12PipelineState> create_pipeline(Dx12GeState &s,
                                            const GeGpuDrawDescriptor &draw,
                                            bool packed_0115, bool cull_enabled,
                                            bool accept_counter_clockwise,
                                            std::string &error) noexcept {
    static const D3D12_INPUT_ELEMENT_DESC layout[] = {
        {"POSITION", 0u, DXGI_FORMAT_R32G32B32A32_FLOAT, 0u,
         static_cast<UINT>(offsetof(Dx12UploadVertex, x)), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"COLOR", 0u, DXGI_FORMAT_R8G8B8A8_UNORM, 0u,
         static_cast<UINT>(offsetof(Dx12UploadVertex, rgba)), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"TEXCOORD", 0u, DXGI_FORMAT_R32G32_FLOAT, 0u,
         static_cast<UINT>(offsetof(Dx12UploadVertex, u)), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"TEXCOORD", 1u, DXGI_FORMAT_R32_FLOAT, 0u,
         static_cast<UINT>(offsetof(Dx12UploadVertex, q)), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"FOG", 0u, DXGI_FORMAT_R32_FLOAT, 0u,
         static_cast<UINT>(offsetof(Dx12UploadVertex, fog_factor)), D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
    };
    static const D3D12_INPUT_ELEMENT_DESC packed_layout[] = {
        {"TEXCOORD", 2u, DXGI_FORMAT_R8G8_UINT, 0u, 0u,
         D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"COLOR", 1u, DXGI_FORMAT_R16_UINT, 0u, 2u,
         D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"POSITION", 1u, DXGI_FORMAT_R16_SINT, 0u, 4u,
         D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"POSITION", 3u, DXGI_FORMAT_R16_SINT, 0u, 6u,
         D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"POSITION", 2u, DXGI_FORMAT_R16_SINT, 0u, 8u,
         D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
    };
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pso{};
    pso.pRootSignature = s.root_signature.Get();
    ID3DBlob *vs = packed_0115 ? s.packed_0115_vertex_shader.Get() : s.vertex_shader.Get();
    pso.VS = {vs->GetBufferPointer(), vs->GetBufferSize()};
    pso.PS = {s.pixel_shader->GetBufferPointer(), s.pixel_shader->GetBufferSize()};
    pso.InputLayout = packed_0115
        ? D3D12_INPUT_LAYOUT_DESC{packed_layout, static_cast<UINT>(std::size(packed_layout))}
        : D3D12_INPUT_LAYOUT_DESC{layout, static_cast<UINT>(std::size(layout))};
    pso.SampleMask = UINT_MAX;
    pso.RasterizerState.FillMode = D3D12_FILL_MODE_SOLID;
    pso.RasterizerState.CullMode = cull_enabled ? D3D12_CULL_MODE_BACK : D3D12_CULL_MODE_NONE;
    pso.RasterizerState.FrontCounterClockwise = accept_counter_clockwise ? FALSE : TRUE;
    pso.RasterizerState.DepthClipEnable = TRUE;
    pso.BlendState.AlphaToCoverageEnable = FALSE;
    pso.BlendState.IndependentBlendEnable = FALSE;
    D3D12_RENDER_TARGET_BLEND_DESC blend{};
    blend.RenderTargetWriteMask = color_write_mask(draw);
    const std::size_t variant = blend_variant(draw);
    if (variant != 0u && variant != 2u) blend.BlendEnable = TRUE;
    blend.SrcBlend = D3D12_BLEND_ONE;
    blend.DestBlend = D3D12_BLEND_ZERO;
    blend.BlendOp = D3D12_BLEND_OP_ADD;
    blend.SrcBlendAlpha = D3D12_BLEND_ONE;
    blend.DestBlendAlpha = D3D12_BLEND_ZERO;
    blend.BlendOpAlpha = D3D12_BLEND_OP_ADD;
    switch (variant) {
    case 1u:
        blend.SrcBlend = D3D12_BLEND_SRC_ALPHA;
        blend.DestBlend = D3D12_BLEND_INV_SRC_ALPHA;
        blend.SrcBlendAlpha = D3D12_BLEND_ONE;
        blend.DestBlendAlpha = D3D12_BLEND_INV_SRC_ALPHA;
        break;
    case 3u:
        blend.SrcBlend = D3D12_BLEND_ONE;
        blend.DestBlend = D3D12_BLEND_ONE;
        blend.SrcBlendAlpha = D3D12_BLEND_ONE;
        blend.DestBlendAlpha = D3D12_BLEND_ONE;
        break;
    case 4u:
        blend.SrcBlend = D3D12_BLEND_BLEND_FACTOR;
        blend.DestBlend = D3D12_BLEND_INV_BLEND_FACTOR;
        blend.SrcBlendAlpha = D3D12_BLEND_ONE;
        blend.DestBlendAlpha = D3D12_BLEND_ZERO;
        break;
    case 5u:
        blend.SrcBlend = D3D12_BLEND_SRC_ALPHA;
        blend.DestBlend = D3D12_BLEND_ONE;
        blend.SrcBlendAlpha = D3D12_BLEND_ONE;
        blend.DestBlendAlpha = D3D12_BLEND_ONE;
        break;
    default:
        break;
    }
    pso.BlendState.RenderTarget[0] = blend;
    pso.DepthStencilState.DepthEnable = draw.depth_test_enabled ? TRUE : FALSE;
    pso.DepthStencilState.DepthWriteMask = draw.depth_write_enabled
        ? D3D12_DEPTH_WRITE_MASK_ALL : D3D12_DEPTH_WRITE_MASK_ZERO;
    pso.DepthStencilState.DepthFunc = draw.depth_test_enabled
        ? depth_compare(draw.depth_function) : D3D12_COMPARISON_FUNC_ALWAYS;
    pso.DepthStencilState.StencilEnable = FALSE;
    pso.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    pso.NumRenderTargets = 1u;
    pso.RTVFormats[0] = kColorFormat;
    pso.DSVFormat = s.depth_format;
    pso.SampleDesc.Count = s.sample_count;
    pso.SampleDesc.Quality = s.sample_quality;
    ComPtr<ID3D12PipelineState> pipeline;
    const HRESULT hr = s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&pipeline));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateGraphicsPipelineState(DX12 GE)");
        return {};
    }
    return pipeline;
}

ID3D12PipelineState *pipeline_for(Dx12GeState &s, const GeGpuDrawDescriptor &draw,
                                  bool packed_0115, bool cull_enabled,
                                  bool accept_counter_clockwise, std::string &error) noexcept {
    const std::uint64_t key = pipeline_key(draw) |
        (packed_0115 ? (std::uint64_t{1} << 63u) : 0u) |
        (cull_enabled ? (std::uint64_t{1} << 62u) : 0u) |
        (accept_counter_clockwise ? (std::uint64_t{1} << 61u) : 0u);
    const auto found = s.pipelines.find(key);
    if (found != s.pipelines.end()) return found->second.Get();
    const perf::Scope perf_scope(perf::kPsoUs);
    perf::add(perf::kPsoNew);
    ComPtr<ID3D12PipelineState> pipeline = create_pipeline(
        s, draw, packed_0115, cull_enabled, accept_counter_clockwise, error);
    if (!pipeline) return nullptr;
    ID3D12PipelineState *raw = pipeline.Get();
    s.pipelines.emplace(key, std::move(pipeline));
    return raw;
}

D3D12_FILTER texture_filter(const GeGpuDrawDescriptor &draw) noexcept {
    const std::uint32_t af = std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    if (af > 1u && draw.texture_mipmap_enabled) return D3D12_FILTER_ANISOTROPIC;
    const bool min_linear = draw.texture_min_linear;
    const bool mag_linear = draw.texture_mag_linear;
    const bool mip_linear = draw.texture_mipmap_enabled && draw.texture_mipmap_linear;
    if (!mip_linear) {
        if (min_linear && mag_linear) return D3D12_FILTER_MIN_MAG_LINEAR_MIP_POINT;
        if (min_linear) return D3D12_FILTER_MIN_LINEAR_MAG_MIP_POINT;
        if (mag_linear) return D3D12_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT;
        return D3D12_FILTER_MIN_MAG_MIP_POINT;
    }
    if (min_linear && mag_linear) return D3D12_FILTER_MIN_MAG_MIP_LINEAR;
    if (min_linear) return D3D12_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR;
    if (mag_linear) return D3D12_FILTER_MIN_POINT_MAG_MIP_LINEAR;
    return D3D12_FILTER_MIN_MAG_POINT_MIP_LINEAR;
}

std::uint64_t sampler_key(const GeGpuDrawDescriptor &draw) noexcept {
    std::uint64_t key = static_cast<std::uint64_t>(texture_filter(draw));
    key = hash_mix(key, draw.texture_clamp_u ? 1u : 0u);
    key = hash_mix(key, draw.texture_clamp_v ? 1u : 0u);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, draw.texture_max_level);
    return key;
}

std::uint32_t ensure_sampler(Dx12GeState &s, const GeGpuDrawDescriptor &draw) noexcept {
    const std::uint64_t key = sampler_key(draw);
    if (const auto found = s.sampler_cache.find(key); found != s.sampler_cache.end())
        return found->second;
    if (s.next_sampler >= kSamplerCapacity) return 0u;
    const std::uint32_t index = s.next_sampler++;
    D3D12_SAMPLER_DESC sampler{};
    sampler.Filter = texture_filter(draw);
    sampler.AddressU = draw.texture_clamp_u ? D3D12_TEXTURE_ADDRESS_MODE_CLAMP : D3D12_TEXTURE_ADDRESS_MODE_WRAP;
    sampler.AddressV = draw.texture_clamp_v ? D3D12_TEXTURE_ADDRESS_MODE_CLAMP : D3D12_TEXTURE_ADDRESS_MODE_WRAP;
    sampler.AddressW = D3D12_TEXTURE_ADDRESS_MODE_CLAMP;
    sampler.MipLODBias = std::clamp(
        static_cast<float>(draw.texture_level_offset16) / 16.0f + rendering_texture_lod_bias(),
        -16.0f, 16.0f);
    sampler.MaxAnisotropy = std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    sampler.ComparisonFunc = D3D12_COMPARISON_FUNC_ALWAYS;
    sampler.MinLOD = 0.0f;
    sampler.MaxLOD = static_cast<float>(std::max<std::uint32_t>(1u, draw.texture_max_level + 1u));
    if (draw.texture_level_mode == 1u) {
        const float level = static_cast<float>(draw.texture_selected_level);
        sampler.MinLOD = level;
        sampler.MaxLOD = level;
    }
    s.device->CreateSampler(&sampler, sampler_cpu(s, index));
    s.sampler_cache.emplace(key, index);
    return index;
}

bool create_present_pipeline(Dx12GeState &s, std::string &error) noexcept {
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pso{};
    pso.pRootSignature = s.root_signature.Get();
    pso.VS = {s.present_vertex_shader->GetBufferPointer(), s.present_vertex_shader->GetBufferSize()};
    pso.PS = {s.present_pixel_shader->GetBufferPointer(), s.present_pixel_shader->GetBufferSize()};
    pso.SampleMask = UINT_MAX;
    pso.RasterizerState.FillMode = D3D12_FILL_MODE_SOLID;
    pso.RasterizerState.CullMode = D3D12_CULL_MODE_NONE;
    pso.RasterizerState.DepthClipEnable = TRUE;
    pso.BlendState.RenderTarget[0].RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    pso.DepthStencilState.DepthEnable = FALSE;
    pso.DepthStencilState.StencilEnable = FALSE;
    pso.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    pso.NumRenderTargets = 1u;
    pso.RTVFormats[0] = kColorFormat;
    pso.SampleDesc.Count = 1u;
    const HRESULT hr = s.device->CreateGraphicsPipelineState(&pso, IID_PPV_ARGS(&s.present_pipeline));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateGraphicsPipelineState(DX12 GE present)");
        return false;
    }
    D3D12_INPUT_ELEMENT_DESC elements[]{
        {"POSITION", 0u, DXGI_FORMAT_R32G32_FLOAT, 0u, 0u, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
        {"TEXCOORD", 0u, DXGI_FORMAT_R32G32_FLOAT, 0u, 8u, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0u},
    };
    D3D12_GRAPHICS_PIPELINE_STATE_DESC overlay = pso;
    overlay.VS = {s.settings_vertex_shader->GetBufferPointer(), s.settings_vertex_shader->GetBufferSize()};
    overlay.PS = {s.settings_pixel_shader->GetBufferPointer(), s.settings_pixel_shader->GetBufferSize()};
    overlay.InputLayout.pInputElementDescs = elements;
    overlay.InputLayout.NumElements = 2u;
    overlay.BlendState.RenderTarget[0].BlendEnable = TRUE;
    overlay.BlendState.RenderTarget[0].SrcBlend = D3D12_BLEND_SRC_ALPHA;
    overlay.BlendState.RenderTarget[0].DestBlend = D3D12_BLEND_INV_SRC_ALPHA;
    overlay.BlendState.RenderTarget[0].BlendOp = D3D12_BLEND_OP_ADD;
    overlay.BlendState.RenderTarget[0].SrcBlendAlpha = D3D12_BLEND_ONE;
    overlay.BlendState.RenderTarget[0].DestBlendAlpha = D3D12_BLEND_INV_SRC_ALPHA;
    overlay.BlendState.RenderTarget[0].BlendOpAlpha = D3D12_BLEND_OP_ADD;
    overlay.BlendState.RenderTarget[0].RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    const HRESULT overlay_hr = s.device->CreateGraphicsPipelineState(&overlay, IID_PPV_ARGS(&s.settings_pipeline));
    if (FAILED(overlay_hr)) {
        error = hr_text(overlay_hr, "CreateGraphicsPipelineState(DX12 GE settings)");
        return false;
    }
    return true;
}

void release_swapchain_buffers(Dx12GeState &s) noexcept {
    for (auto &buffer : s.backbuffers) buffer.Reset();
}

bool create_swapchain_buffers(Dx12GeState &s, std::string &error) noexcept {
    for (UINT i = 0u; i < kFrameCount; ++i) {
        HRESULT hr = s.swapchain->GetBuffer(i, IID_PPV_ARGS(&s.backbuffers[i]));
        if (FAILED(hr)) { error = hr_text(hr, "IDXGISwapChain::GetBuffer(DX12 GE)"); return false; }
        s.device->CreateRenderTargetView(s.backbuffers[i].Get(), nullptr, swap_rtv(s, i));
    }
    return true;
}

bool ensure_swapchain(Dx12GeState &s, std::string &error) noexcept {
    if (s.native_window == nullptr) {
        error = "DX12 GE direct present has no active display window";
        return false;
    }
    RECT client{};
    if (!GetClientRect(s.native_window, &client)) {
        error = "GetClientRect failed for DX12 GE direct present";
        return false;
    }
    const std::uint32_t surface_width = static_cast<std::uint32_t>(std::max<LONG>(1, client.right - client.left));
    const std::uint32_t surface_height = static_cast<std::uint32_t>(std::max<LONG>(1, client.bottom - client.top));
    if (s.swapchain && s.swap_width == surface_width && s.swap_height == surface_height)
        return true;
    if (s.swapchain) {
        if (!wait_for_gpu(s, error)) return false;
        release_swapchain_buffers(s);
        const UINT resize_flags = s.swapchain_tearing ? DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING : 0u;
        const HRESULT hr = s.swapchain->ResizeBuffers(kFrameCount, surface_width, surface_height,
                                                       kColorFormat, resize_flags);
        if (FAILED(hr)) { error = hr_text(hr, "IDXGISwapChain::ResizeBuffers(DX12 GE)"); return false; }
        s.swap_width = surface_width;
        s.swap_height = surface_height;
        return create_swapchain_buffers(s, error);
    }
    D3D12_DESCRIPTOR_HEAP_DESC heap{};
    heap.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    heap.NumDescriptors = kFrameCount;
    HRESULT hr = s.device->CreateDescriptorHeap(&heap, IID_PPV_ARGS(&s.swap_rtv_heap));
    if (FAILED(hr)) { error = hr_text(hr, "CreateDescriptorHeap(DX12 GE swap RTV)"); return false; }
    s.swap_rtv_stride = s.device->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    DXGI_SWAP_CHAIN_DESC1 desc{};
    desc.Width = surface_width;
    desc.Height = surface_height;
    desc.Format = kColorFormat;
    desc.SampleDesc.Count = 1u;
    desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    desc.BufferCount = kFrameCount;
    desc.Scaling = DXGI_SCALING_STRETCH;
    desc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
    desc.AlphaMode = DXGI_ALPHA_MODE_IGNORE;
    desc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING;
    ComPtr<IDXGISwapChain1> swap1;
    hr = s.factory->CreateSwapChainForHwnd(s.queue.Get(), s.native_window,
                                            &desc, nullptr, nullptr, &swap1);
    s.swapchain_tearing = SUCCEEDED(hr);
    if (FAILED(hr)) {
        desc.Flags = 0u;
        hr = s.factory->CreateSwapChainForHwnd(s.queue.Get(), s.native_window,
                                                &desc, nullptr, nullptr, &swap1);
        s.swapchain_tearing = false;
    }
    if (FAILED(hr)) { error = hr_text(hr, "CreateSwapChainForHwnd(DX12 GE)"); return false; }
    (void)s.factory->MakeWindowAssociation(s.native_window, DXGI_MWA_NO_ALT_ENTER);
    hr = swap1.As(&s.swapchain);
    if (FAILED(hr)) { error = hr_text(hr, "Query IDXGISwapChain3(DX12 GE)"); return false; }
    s.swap_width = surface_width;
    s.swap_height = surface_height;
    return create_swapchain_buffers(s, error);
}

std::uint32_t present_sampler(Dx12GeState &s) noexcept {
    GeGpuDrawDescriptor draw{};
    const bool linear = lcs_render_configuration().display.upscale_filter == DisplayUpscaleFilter::Bilinear;
    draw.texture_min_linear = linear;
    draw.texture_mag_linear = linear;
    draw.texture_clamp_u = true;
    draw.texture_clamp_v = true;
    return ensure_sampler(s, draw);
}










struct SettingsVertex {
    float x, y, u, v;
};

bool ensure_settings_frame(Dx12GeState &s, Dx12FrameResources &frame, std::string &error) noexcept {
    if (frame.settings_texture && frame.settings_upload && frame.settings_upload_mapped != nullptr &&
        frame.settings_vertices && frame.settings_vertices_mapped != nullptr && frame.settings_srv != 0u)
        return true;
    D3D12_RESOURCE_DESC texture{};
    texture.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    texture.Width = kSettingsOverlayWidth;
    texture.Height = kSettingsOverlayHeight;
    texture.DepthOrArraySize = 1u;
    texture.MipLevels = 1u;
    texture.Format = kColorFormat;
    texture.SampleDesc.Count = 1u;
    texture.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    D3D12_HEAP_PROPERTIES default_heap{};
    default_heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    HRESULT hr = s.device->CreateCommittedResource(&default_heap, D3D12_HEAP_FLAG_NONE, &texture,
                                                    D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                                    IID_PPV_ARGS(&frame.settings_texture));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateCommittedResource(DX12 settings overlay)");
        return false;
    }
    frame.settings_texture_state = D3D12_RESOURCE_STATE_COPY_DEST;
    const UINT64 row_pitch = (static_cast<UINT64>(kSettingsOverlayWidth) * 4u + 255u) & ~UINT64{255u};
    D3D12_RESOURCE_DESC upload{};
    upload.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    upload.Width = row_pitch * kSettingsOverlayHeight;
    upload.Height = 1u;
    upload.DepthOrArraySize = 1u;
    upload.MipLevels = 1u;
    upload.Format = DXGI_FORMAT_UNKNOWN;
    upload.SampleDesc.Count = 1u;
    upload.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    D3D12_HEAP_PROPERTIES upload_heap{};
    upload_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
    hr = s.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE, &upload,
                                            D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                            IID_PPV_ARGS(&frame.settings_upload));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateCommittedResource(DX12 settings upload)");
        return false;
    }
    upload.Width = sizeof(SettingsVertex) * 6u;
    hr = s.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE, &upload,
                                            D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                            IID_PPV_ARGS(&frame.settings_vertices));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateCommittedResource(DX12 settings vertices)");
        return false;
    }
    const D3D12_RANGE no_read{0u, 0u};
    void *mapped = nullptr;
    hr = frame.settings_upload->Map(0u, &no_read, &mapped);
    if (FAILED(hr) || mapped == nullptr) {
        error = hr_text(hr, "Map(DX12 settings upload)");
        return false;
    }
    frame.settings_upload_mapped = static_cast<std::byte *>(mapped);
    mapped = nullptr;
    hr = frame.settings_vertices->Map(0u, &no_read, &mapped);
    if (FAILED(hr) || mapped == nullptr) {
        error = hr_text(hr, "Map(DX12 settings vertices)");
        return false;
    }
    frame.settings_vertices_mapped = static_cast<std::byte *>(mapped);
    frame.settings_srv = allocate_texture_srv(s);
    if (frame.settings_srv == 0u) {
        error = "DX12 settings overlay ran out of shader resource views";
        return false;
    }
    D3D12_SHADER_RESOURCE_VIEW_DESC srv{};
    srv.Format = kColorFormat;
    srv.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    srv.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    srv.Texture2D.MipLevels = 1u;
    s.device->CreateShaderResourceView(frame.settings_texture.Get(), &srv,
                                        srv_cpu(s, frame.settings_srv));
    return true;
}

void composite_settings_overlay(Dx12GeState &s, const HostSettingsView &view) noexcept {
    if (!s.settings_pipeline) return;
    Dx12FrameResources &frame = s.frames[s.frame_cursor];
    std::string error;
    if (!ensure_settings_frame(s, frame, error)) return;
    std::vector<std::uint8_t> pixels(static_cast<std::size_t>(kSettingsOverlayWidth) *
                                     kSettingsOverlayHeight * 4u);
    rasterize_settings_overlay(view, pixels.data(), kSettingsOverlayWidth, kSettingsOverlayHeight);
    const UINT row_pitch = (kSettingsOverlayWidth * 4u + 255u) & ~255u;
    auto *destination = reinterpret_cast<std::uint8_t *>(frame.settings_upload_mapped);
    for (std::uint32_t y = 0u; y < kSettingsOverlayHeight; ++y) {
        std::memcpy(destination + static_cast<std::size_t>(y) * row_pitch,
                    pixels.data() + static_cast<std::size_t>(y) * kSettingsOverlayWidth * 4u,
                    kSettingsOverlayWidth * 4u);
    }
    transition(s.list.Get(), frame.settings_texture.Get(), frame.settings_texture_state,
               D3D12_RESOURCE_STATE_COPY_DEST);
    D3D12_TEXTURE_COPY_LOCATION source{};
    source.pResource = frame.settings_upload.Get();
    source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    source.PlacedFootprint.Footprint.Format = kColorFormat;
    source.PlacedFootprint.Footprint.Width = kSettingsOverlayWidth;
    source.PlacedFootprint.Footprint.Height = kSettingsOverlayHeight;
    source.PlacedFootprint.Footprint.Depth = 1u;
    source.PlacedFootprint.Footprint.RowPitch = row_pitch;
    D3D12_TEXTURE_COPY_LOCATION destination_location{};
    destination_location.pResource = frame.settings_texture.Get();
    destination_location.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    s.list->CopyTextureRegion(&destination_location, 0u, 0u, 0u, &source, nullptr);
    transition(s.list.Get(), frame.settings_texture.Get(), D3D12_RESOURCE_STATE_COPY_DEST,
               D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
    frame.settings_texture_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;

    const float swap_w = static_cast<float>(std::max<std::uint32_t>(1u, s.swap_width));
    const float swap_h = static_cast<float>(std::max<std::uint32_t>(1u, s.swap_height));
    const float panel_w = std::min(swap_w * 0.46f, static_cast<float>(kSettingsOverlayWidth));
    const float panel_h = panel_w * (static_cast<float>(kSettingsOverlayHeight) /
                                      static_cast<float>(kSettingsOverlayWidth));
    const float x1 = 1.0f - 48.0f / swap_w;
    const float x0 = x1 - 2.0f * panel_w / swap_w;
    const float y1 = 1.0f - 48.0f / swap_h;
    const float y0 = y1 - 2.0f * panel_h / swap_h;
    const SettingsVertex vertices[6]{
        {x0, y1, 0.0f, 0.0f}, {x1, y1, 1.0f, 0.0f}, {x0, y0, 0.0f, 1.0f},
        {x0, y0, 0.0f, 1.0f}, {x1, y1, 1.0f, 0.0f}, {x1, y0, 1.0f, 1.0f},
    };
    std::memcpy(frame.settings_vertices_mapped, vertices, sizeof(vertices));
    const D3D12_VIEWPORT viewport{0.0f, 0.0f, swap_w, swap_h, 0.0f, 1.0f};
    const D3D12_RECT scissor{0, 0, static_cast<LONG>(s.swap_width), static_cast<LONG>(s.swap_height)};
    s.list->RSSetViewports(1u, &viewport);
    s.list->RSSetScissorRects(1u, &scissor);
    s.list->SetPipelineState(s.settings_pipeline.Get());
    s.list->SetGraphicsRootDescriptorTable(0u, srv_gpu(s, frame.settings_srv));
    s.list->SetGraphicsRootDescriptorTable(1u, sampler_gpu(s, 0u));
    D3D12_VERTEX_BUFFER_VIEW buffer{};
    buffer.BufferLocation = frame.settings_vertices->GetGPUVirtualAddress();
    buffer.SizeInBytes = sizeof(vertices);
    buffer.StrideInBytes = sizeof(SettingsVertex);
    s.list->IASetVertexBuffers(0u, 1u, &buffer);
    s.list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    s.list->DrawInstanced(6u, 1u, 0u, 0u);
}

bool ensure_fps_frame(Dx12GeState &s, Dx12FrameResources &frame, std::string &error) noexcept {
    if (frame.fps_texture && frame.fps_upload && frame.fps_upload_mapped != nullptr &&
        frame.fps_vertices && frame.fps_vertices_mapped != nullptr && frame.fps_srv != 0u)
        return true;
    D3D12_RESOURCE_DESC texture{};
    texture.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    texture.Width = kFpsOverlayWidth;
    texture.Height = kFpsOverlayHeight;
    texture.DepthOrArraySize = 1u;
    texture.MipLevels = 1u;
    texture.Format = kColorFormat;
    texture.SampleDesc.Count = 1u;
    texture.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    D3D12_HEAP_PROPERTIES default_heap{};
    default_heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    HRESULT hr = s.device->CreateCommittedResource(&default_heap, D3D12_HEAP_FLAG_NONE, &texture,
                                                    D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                                    IID_PPV_ARGS(&frame.fps_texture));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateCommittedResource(DX12 fps overlay)");
        return false;
    }
    frame.fps_texture_state = D3D12_RESOURCE_STATE_COPY_DEST;
    const UINT64 row_pitch = (static_cast<UINT64>(kFpsOverlayWidth) * 4u + 255u) & ~UINT64{255u};
    D3D12_RESOURCE_DESC upload{};
    upload.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    upload.Width = row_pitch * kFpsOverlayHeight;
    upload.Height = 1u;
    upload.DepthOrArraySize = 1u;
    upload.MipLevels = 1u;
    upload.Format = DXGI_FORMAT_UNKNOWN;
    upload.SampleDesc.Count = 1u;
    upload.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    D3D12_HEAP_PROPERTIES upload_heap{};
    upload_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
    hr = s.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE, &upload,
                                            D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                            IID_PPV_ARGS(&frame.fps_upload));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateCommittedResource(DX12 fps upload)");
        return false;
    }
    upload.Width = sizeof(SettingsVertex) * 6u;
    hr = s.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE, &upload,
                                            D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                            IID_PPV_ARGS(&frame.fps_vertices));
    if (FAILED(hr)) {
        error = hr_text(hr, "CreateCommittedResource(DX12 fps vertices)");
        return false;
    }
    const D3D12_RANGE no_read{0u, 0u};
    void *mapped = nullptr;
    hr = frame.fps_upload->Map(0u, &no_read, &mapped);
    if (FAILED(hr) || mapped == nullptr) {
        error = hr_text(hr, "Map(DX12 fps upload)");
        return false;
    }
    frame.fps_upload_mapped = static_cast<std::byte *>(mapped);
    mapped = nullptr;
    hr = frame.fps_vertices->Map(0u, &no_read, &mapped);
    if (FAILED(hr) || mapped == nullptr) {
        error = hr_text(hr, "Map(DX12 fps vertices)");
        return false;
    }
    frame.fps_vertices_mapped = static_cast<std::byte *>(mapped);
    frame.fps_srv = allocate_texture_srv(s);
    if (frame.fps_srv == 0u) {
        error = "DX12 fps overlay ran out of shader resource views";
        return false;
    }
    D3D12_SHADER_RESOURCE_VIEW_DESC srv{};
    srv.Format = kColorFormat;
    srv.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    srv.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    srv.Texture2D.MipLevels = 1u;
    s.device->CreateShaderResourceView(frame.fps_texture.Get(), &srv, srv_cpu(s, frame.fps_srv));
    return true;
}

void composite_fps_overlay(Dx12GeState &s) noexcept {
    if (!s.settings_pipeline) return;
    Dx12FrameResources &frame = s.frames[s.frame_cursor];
    std::string error;
    if (!ensure_fps_frame(s, frame, error)) return;
    std::vector<std::uint8_t> pixels(static_cast<std::size_t>(kFpsOverlayWidth) * kFpsOverlayHeight * 4u);
    rasterize_fps_overlay(pixels.data(), kFpsOverlayWidth, kFpsOverlayHeight);
    const UINT row_pitch = (kFpsOverlayWidth * 4u + 255u) & ~255u;
    auto *destination = reinterpret_cast<std::uint8_t *>(frame.fps_upload_mapped);
    for (std::uint32_t y = 0u; y < kFpsOverlayHeight; ++y) {
        std::memcpy(destination + static_cast<std::size_t>(y) * row_pitch,
                    pixels.data() + static_cast<std::size_t>(y) * kFpsOverlayWidth * 4u,
                    kFpsOverlayWidth * 4u);
    }
    transition(s.list.Get(), frame.fps_texture.Get(), frame.fps_texture_state,
               D3D12_RESOURCE_STATE_COPY_DEST);
    D3D12_TEXTURE_COPY_LOCATION source{};
    source.pResource = frame.fps_upload.Get();
    source.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    source.PlacedFootprint.Footprint.Format = kColorFormat;
    source.PlacedFootprint.Footprint.Width = kFpsOverlayWidth;
    source.PlacedFootprint.Footprint.Height = kFpsOverlayHeight;
    source.PlacedFootprint.Footprint.Depth = 1u;
    source.PlacedFootprint.Footprint.RowPitch = row_pitch;
    D3D12_TEXTURE_COPY_LOCATION destination_location{};
    destination_location.pResource = frame.fps_texture.Get();
    destination_location.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    s.list->CopyTextureRegion(&destination_location, 0u, 0u, 0u, &source, nullptr);
    transition(s.list.Get(), frame.fps_texture.Get(), D3D12_RESOURCE_STATE_COPY_DEST,
               D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
    frame.fps_texture_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;

    const float swap_w = static_cast<float>(std::max<std::uint32_t>(1u, s.swap_width));
    const float swap_h = static_cast<float>(std::max<std::uint32_t>(1u, s.swap_height));
    const float panel_h = static_cast<float>(std::max(28, static_cast<int>(s.swap_height / 28u)));
    const float panel_w = panel_h * (static_cast<float>(kFpsOverlayWidth) /
                                      static_cast<float>(kFpsOverlayHeight));
    const float x0 = -1.0f + 32.0f / swap_w;
    const float x1 = x0 + 2.0f * panel_w / swap_w;
    const float y1 = 1.0f - 32.0f / swap_h;
    const float y0 = y1 - 2.0f * panel_h / swap_h;
    const SettingsVertex vertices[6]{
        {x0, y1, 0.0f, 0.0f}, {x1, y1, 1.0f, 0.0f}, {x0, y0, 0.0f, 1.0f},
        {x0, y0, 0.0f, 1.0f}, {x1, y1, 1.0f, 0.0f}, {x1, y0, 1.0f, 1.0f},
    };
    std::memcpy(frame.fps_vertices_mapped, vertices, sizeof(vertices));
    const D3D12_VIEWPORT viewport{0.0f, 0.0f, swap_w, swap_h, 0.0f, 1.0f};
    const D3D12_RECT scissor{0, 0, static_cast<LONG>(s.swap_width), static_cast<LONG>(s.swap_height)};
    s.list->RSSetViewports(1u, &viewport);
    s.list->RSSetScissorRects(1u, &scissor);
    s.list->SetPipelineState(s.settings_pipeline.Get());
    s.list->SetGraphicsRootDescriptorTable(0u, srv_gpu(s, frame.fps_srv));
    s.list->SetGraphicsRootDescriptorTable(1u, sampler_gpu(s, 0u));
    D3D12_VERTEX_BUFFER_VIEW buffer{};
    buffer.BufferLocation = frame.fps_vertices->GetGPUVirtualAddress();
    buffer.SizeInBytes = sizeof(vertices);
    buffer.StrideInBytes = sizeof(SettingsVertex);
    s.list->IASetVertexBuffers(0u, 1u, &buffer);
    s.list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    s.list->DrawInstanced(6u, 1u, 0u, 0u);
}

// LCS_TEST_SHOT_DIR=<dir>: every 5 s (or LCS_TEST_SHOT_EVERY_MS), a PPM of what the window shows.
struct TestShot {
    ComPtr<ID3D12Resource> buffer;
    D3D12_PLACED_SUBRESOURCE_FOOTPRINT footprint{};
    UINT width{};
    UINT height{};
    bool pending{};
    unsigned count{};
};
TestShot g_test_shot;

const char *test_shot_directory() noexcept {
    static const char *directory = std::getenv("LCS_TEST_SHOT_DIR");
    return directory;
}

bool test_shot_due() noexcept {
    if (test_shot_directory() == nullptr || g_test_shot.pending) return false;
    static auto next = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    if (now < next) return false;
    // LCS_TEST_SHOT_EVERY_MS=<ms> takes them more often, for catching a moment such as a bullet's tracer.
    static const char *const every = std::getenv("LCS_TEST_SHOT_EVERY_MS");
    next = now + (every != nullptr ? std::chrono::milliseconds(std::max(50, std::atoi(every))) : std::chrono::milliseconds(5000));
    return true;
}

void record_test_shot(Dx12GeState &s, ID3D12Resource *backbuffer) noexcept {
    const D3D12_RESOURCE_DESC desc = backbuffer->GetDesc();
    UINT64 bytes = 0u;
    UINT rows = 0u;
    UINT64 row_size = 0u;
    s.device->GetCopyableFootprints(&desc, 0u, 1u, 0u, &g_test_shot.footprint, &rows, &row_size, &bytes);
    if (!g_test_shot.buffer || g_test_shot.buffer->GetDesc().Width < bytes) {
        g_test_shot.buffer.Reset();
        D3D12_HEAP_PROPERTIES heap{};
        heap.Type = D3D12_HEAP_TYPE_READBACK;
        D3D12_RESOURCE_DESC buffer{};
        buffer.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
        buffer.Width = bytes;
        buffer.Height = 1u;
        buffer.DepthOrArraySize = 1u;
        buffer.MipLevels = 1u;
        buffer.Format = DXGI_FORMAT_UNKNOWN;
        buffer.SampleDesc.Count = 1u;
        buffer.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
        if (FAILED(s.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &buffer,
                                                     D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                                     IID_PPV_ARGS(&g_test_shot.buffer))))
            return;
    }
    D3D12_TEXTURE_COPY_LOCATION dst{};
    dst.pResource = g_test_shot.buffer.Get();
    dst.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    dst.PlacedFootprint = g_test_shot.footprint;
    D3D12_TEXTURE_COPY_LOCATION src{};
    src.pResource = backbuffer;
    src.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    src.SubresourceIndex = 0u;
    s.list->CopyTextureRegion(&dst, 0u, 0u, 0u, &src, nullptr);
    g_test_shot.width = static_cast<UINT>(desc.Width);
    g_test_shot.height = desc.Height;
    g_test_shot.pending = true;
}

void write_test_shot() noexcept {
    g_test_shot.pending = false;
    void *mapped = nullptr;
    if (FAILED(g_test_shot.buffer->Map(0u, nullptr, &mapped))) return;
    char path[1024];
    std::snprintf(path, sizeof(path), "%s/shot-%03u.ppm", test_shot_directory(), g_test_shot.count++);
    if (std::FILE *file = std::fopen(path, "wb")) {
        std::fprintf(file, "P6\n%u %u\n255\n", g_test_shot.width, g_test_shot.height);
        std::vector<std::uint8_t> row(static_cast<std::size_t>(g_test_shot.width) * 3u);
        const auto *base = static_cast<const std::uint8_t *>(mapped);
        for (UINT y = 0u; y < g_test_shot.height; ++y) {
            const std::uint8_t *in = base + static_cast<std::size_t>(y) * g_test_shot.footprint.Footprint.RowPitch;
            for (UINT x = 0u; x < g_test_shot.width; ++x) {
                row[x * 3u + 0u] = in[x * 4u + 0u];
                row[x * 3u + 1u] = in[x * 4u + 1u];
                row[x * 3u + 2u] = in[x * 4u + 2u];
            }
            std::fwrite(row.data(), 1u, row.size(), file);
        }
        std::fclose(file);
    }
    const D3D12_RANGE none{0u, 0u};
    g_test_shot.buffer->Unmap(0u, &none);
}

bool record_direct_present(Dx12GeState &s, Dx12FramebufferTarget &source,
                           const Dx12FramePresentDecision &decision, std::string &error) noexcept {
    if (!ensure_swapchain(s, error)) return false;
    const UINT index = s.swapchain->GetCurrentBackBufferIndex();
    ID3D12Resource *backbuffer = s.backbuffers[index].Get();
    resolve_target_for_sampling(s, source, false);
    transition(s.list.Get(), backbuffer, D3D12_RESOURCE_STATE_PRESENT,
               D3D12_RESOURCE_STATE_RENDER_TARGET);
    const D3D12_CPU_DESCRIPTOR_HANDLE rtv = swap_rtv(s, index);
    s.list->OMSetRenderTargets(1u, &rtv, FALSE, nullptr);
    constexpr float black[4]{0.0f, 0.0f, 0.0f, 1.0f};
    s.list->ClearRenderTargetView(rtv, black, 0u, nullptr);
    const PresentationRectangle rect = calculate_presentation_rectangle(
        s.swap_width, s.swap_height, s.target_width, s.target_height,
        lcs_render_configuration().display.aspect_mode, lcs_render_configuration().display.integer_scale);
    D3D12_VIEWPORT viewport{static_cast<float>(rect.x), static_cast<float>(rect.y),
                            static_cast<float>(std::max(1, rect.width)),
                            static_cast<float>(std::max(1, rect.height)), 0.0f, 1.0f};
    D3D12_RECT scissor{rect.x, rect.y, rect.x + std::max(1, rect.width),
                       rect.y + std::max(1, rect.height)};
    s.list->RSSetViewports(1u, &viewport);
    s.list->RSSetScissorRects(1u, &scissor);
    s.list->SetPipelineState(s.present_pipeline.Get());
    s.list->SetGraphicsRootSignature(s.root_signature.Get());
    ID3D12DescriptorHeap *heaps[]{s.srv_heap.Get(), s.sampler_heap.Get()};
    s.list->SetDescriptorHeaps(2u, heaps);
    s.list->SetGraphicsRootDescriptorTable(0u, srv_gpu(s, source.srv_index));
    s.list->SetGraphicsRootDescriptorTable(1u, sampler_gpu(s, present_sampler(s)));
    struct ReservedPresentConstants { std::array<std::uint32_t, 16> zero{}; } reserved{};
    std::array<std::uint32_t, 21> present_constants{};
    std::memcpy(present_constants.data() + 5u, &reserved, sizeof(reserved));
    s.list->SetGraphicsRoot32BitConstants(
        3u, static_cast<UINT>(present_constants.size()), present_constants.data(), 0u);
    s.list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    s.list->DrawInstanced(3u, 1u, 0u, 0u);
    host_fps_note_presented_frame();
    if (decision.composite_fps) composite_fps_overlay(s);
    (void)decision.settings;
    imgui_menu_record(s.device.Get(), s.queue.Get(), s.list.Get(), s.native_window, kColorFormat, kFrameCount);
    if (test_shot_due()) {
        // LCS_TEST_SHOT_DIR: the back buffer as shown, menu included, for unattended checks.
        transition(s.list.Get(), backbuffer, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE);
        record_test_shot(s, backbuffer);
        transition(s.list.Get(), backbuffer, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_PRESENT);
        return true;
    }
    transition(s.list.Get(), backbuffer, D3D12_RESOURCE_STATE_RENDER_TARGET,
               D3D12_RESOURCE_STATE_PRESENT);
    return true;
}

Dx12Texture *find_cached_texture(Dx12GeState &s, std::uint64_t key) noexcept {
    if (s.last_texture_lookup != nullptr && s.last_texture_lookup_key == key)
        return s.last_texture_lookup;
    const auto found = s.textures.find(key);
    if (found == s.textures.end()) {
        s.last_texture_lookup = nullptr;
        s.last_texture_lookup_key = key;
        return nullptr;
    }
    s.last_texture_lookup_key = key;
    s.last_texture_lookup = &found->second;
    return s.last_texture_lookup;
}

void clear_texture_lookup_cache(Dx12GeState &s) noexcept {
    s.last_texture_lookup = nullptr;
    s.last_texture_lookup_key = 0u;
}

// Scanning the whole cache for each texture to drop made a big upload very slow, with one scan per texture dropped.
// One scan now finds the next 1024, and a texture used since then is passed over.
std::unordered_map<std::uint64_t, Dx12Texture>::iterator next_eviction_victim(Dx12GeState &s) {
    constexpr std::size_t kBatch = 1024u;
    for (bool scanned = false;; scanned = true) {
        while (s.eviction_next < s.eviction_queue.size()) {
            const auto [epoch, key] = s.eviction_queue[s.eviction_next++];
            const auto found = s.textures.find(key);
            if (found != s.textures.end() && found->second.last_used_epoch == epoch && epoch != s.frame_epoch)
                return found;
        }
        if (scanned) return s.textures.end();
        s.eviction_queue.clear();
        s.eviction_next = 0u;
        for (const auto &[key, texture] : s.textures) {
            if (texture.last_used_epoch != s.frame_epoch) s.eviction_queue.emplace_back(texture.last_used_epoch, key);
        }
        const std::size_t keep = std::min(kBatch, s.eviction_queue.size());
        std::partial_sort(s.eviction_queue.begin(), s.eviction_queue.begin() + static_cast<std::ptrdiff_t>(keep), s.eviction_queue.end());
        s.eviction_queue.resize(keep);
    }
}

HRESULT create_texture_image(Dx12GeState &s, const D3D12_RESOURCE_DESC &desc,
                             Dx12Texture &texture) noexcept {
    if (!s.texture_pool) s.texture_pool = std::make_shared<Dx12TexturePool>(s.device.Get());
    const std::array<UINT64, 2> alignments{D3D12_SMALL_RESOURCE_PLACEMENT_ALIGNMENT, 0u};
    for (const UINT64 alignment : alignments) {
        D3D12_RESOURCE_DESC placed = desc;
        placed.Alignment = alignment;
        const D3D12_RESOURCE_ALLOCATION_INFO info =
            s.device->GetResourceAllocationInfo(0u, 1u, &placed);
        if (info.SizeInBytes == std::numeric_limits<UINT64>::max()) continue;
        ID3D12Heap *heap = nullptr;
        std::size_t index = 0u;
        UINT64 offset = 0u;
        if (!s.texture_pool->allocate(info.SizeInBytes, info.Alignment, heap, index, offset)) break;
        auto placement =
            std::make_shared<Dx12TexturePlacement>(s.texture_pool, index, offset, info.SizeInBytes);
        const HRESULT hr =
            s.device->CreatePlacedResource(heap, offset, &placed, D3D12_RESOURCE_STATE_COPY_DEST,
                                           nullptr, IID_PPV_ARGS(&texture.image));
        if (SUCCEEDED(hr)) {
            texture.placement = std::move(placement);
            return hr;
        }
        break;
    }
    D3D12_HEAP_PROPERTIES heap{};
    heap.Type = D3D12_HEAP_TYPE_DEFAULT;
    return s.device->CreateCommittedResource(&heap, D3D12_HEAP_FLAG_NONE, &desc,
                                             D3D12_RESOURCE_STATE_COPY_DEST, nullptr,
                                             IID_PPV_ARGS(&texture.image));
}

bool prepare_texture_upload(Dx12GeState &s, const GeGpuDrawDescriptor &draw,
                            std::uint32_t base_width, std::uint32_t base_height,
                            std::uint32_t mip_levels, std::shared_ptr<const std::vector<std::byte>> pixels,
                            std::uint64_t known_checksum = 0u) noexcept {
    if (!s.enabled || !draw.texture_enabled || base_width == 0u || base_height == 0u ||
        mip_levels == 0u || mip_levels > 8u) return false;
    std::size_t expected = 0u;
    std::uint32_t w = base_width, h = base_height;
    for (std::uint32_t level = 0u; level < mip_levels; ++level) {
        const std::uint64_t bytes = static_cast<std::uint64_t>(w) * h * 4ull;
        if (bytes > std::numeric_limits<std::size_t>::max() - expected) return false;
        expected += static_cast<std::size_t>(bytes);
        w = std::max(1u, w >> 1u);
        h = std::max(1u, h >> 1u);
    }
    if (!pixels || pixels->size() != expected) return false;
    const std::vector<std::byte> &packed = *pixels;
    const std::uint64_t key = texture_key(draw);
    std::uint64_t checksum = known_checksum;
    if (checksum == 0u) {
        const perf::Scope perf_scope(perf::kTexHashUs);
        checksum = hash_bytes(packed);
    }
    if (auto found = s.textures.find(key); found != s.textures.end()) {
        found->second.signature_epoch = s.frame_epoch;
        if (found->second.checksum == checksum) {
            found->second.descriptor = draw;
            perf::add(perf::kTexSame);
            return true;
        }
        perf::add(perf::kTexReplaced);
        for (Dx12FrameResources &retire : s.frames) {
            retire.transient_resources.push_back(found->second.image);
            if (found->second.placement)
                retire.transient_placements.push_back(found->second.placement);
        }
        retire_texture_srv(s, found->second.srv_index);
        s.texture_cache_bytes -= std::min<std::uint64_t>(s.texture_cache_bytes, found->second.pixels->size());
        clear_texture_lookup_cache(s);
        s.textures.erase(found);
    }
    const std::uint32_t entry_limit = lcs_render_configuration().rendering.texture_cache_entries;
    // Room for the texture packs' images on top of the setting, within what the graphics card has.
    std::uint64_t byte_limit = static_cast<std::uint64_t>(lcs_render_configuration().rendering.texture_cache_mb) * 1024ull * 1024ull +
                               lcs::texture_pack_decoded_bytes();
    if (s.video_budget_bytes != 0u)
        byte_limit = std::max<std::uint64_t>(std::min<std::uint64_t>(byte_limit, s.video_budget_bytes / 4u * 3u), 64ull << 20u);
    static bool limit_logged = false;
    if (!limit_logged && lcs::texture_pack_decoded_bytes() != 0u) {
        limit_logged = true;
        std::cerr << "[texture-cache] limit " << (byte_limit >> 20u) << " MB (graphics card budget "
                  << (s.video_budget_bytes >> 20u) << " MB)" << std::endl;
    }
    while (s.cache_full_epoch != s.frame_epoch &&
           (s.textures.size() >= entry_limit || s.texture_cache_bytes + packed.size() > byte_limit)) {
        auto victim = next_eviction_victim(s);
        if (victim == s.textures.end()) {
            // Everything in the cache is in use this frame. Refusing would only make the next draw decode and try
            // again, hundreds of times a frame: go over for now, and evict once those textures are no longer in use.
            s.cache_full_epoch = s.frame_epoch;
            if (!s.cache_over_logged) {
                s.cache_over_logged = true;
                std::cerr << "[texture-cache] a frame needed more than " << (byte_limit >> 20u)
                          << " MB of textures; going over (Rendering.TextureCacheMB)" << std::endl;
            }
            break;
        }
        perf::add(perf::kTexEvicted);
        for (Dx12FrameResources &retire : s.frames) {
            retire.transient_resources.push_back(victim->second.image);
            if (victim->second.placement)
                retire.transient_placements.push_back(victim->second.placement);
        }
        retire_texture_srv(s, victim->second.srv_index);
        s.texture_cache_bytes -= std::min<std::uint64_t>(
            s.texture_cache_bytes, victim->second.pixels->size());
        clear_texture_lookup_cache(s);
        s.textures.erase(victim);
    }

    D3D12_RESOURCE_DESC desc{};
    desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    desc.Width = base_width;
    desc.Height = base_height;
    desc.DepthOrArraySize = 1u;
    desc.MipLevels = static_cast<UINT16>(mip_levels);
    desc.Format = kColorFormat;
    desc.SampleDesc.Count = 1u;
    desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    Dx12Texture texture{};
    texture.descriptor = draw;
    texture.width = base_width;
    texture.height = base_height;
    texture.mip_levels = mip_levels;
    texture.checksum = checksum;
    texture.signature_epoch = s.frame_epoch;
    texture.last_used_epoch = s.frame_epoch;
    texture.pixels = std::move(pixels);
    HRESULT hr = create_texture_image(s, desc, texture);
    if (FAILED(hr)) return false;
    perf::add(perf::kTexNew);
    perf::add(perf::kTexKb, texture.pixels->size() / 1024u);

    texture.srv_index = allocate_texture_srv(s);
    if (texture.srv_index == 0u) return false;
    texture.sampler_index = ensure_sampler(s, draw);
    D3D12_SHADER_RESOURCE_VIEW_DESC srv{};
    srv.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    srv.Format = kColorFormat;
    srv.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    srv.Texture2D.MipLevels = mip_levels;
    s.device->CreateShaderResourceView(texture.image.Get(), &srv, srv_cpu(s, texture.srv_index));
    s.texture_cache_bytes += texture.pixels->size();
    s.pending_texture_keys.push_back(key);
    s.textures.emplace(key, std::move(texture));
    return true;
}

void record_pending_texture_uploads(Dx12GeState &s, Dx12FrameResources &frame) noexcept {
    constexpr UINT64 kPlacementAlignment = D3D12_TEXTURE_DATA_PLACEMENT_ALIGNMENT;
    const auto align_up = [](UINT64 value, UINT64 alignment) noexcept {
        return (value + alignment - 1u) & ~(alignment - 1u);
    };

    for (const std::uint64_t key : s.pending_texture_keys) {
        auto found = s.textures.find(key);
        if (found == s.textures.end()) continue;
        Dx12Texture &texture = found->second;
        if (!texture.image || !texture.pixels || texture.pixels->empty()) continue;

        const D3D12_RESOURCE_DESC desc = texture.image->GetDesc();
        std::array<D3D12_PLACED_SUBRESOURCE_FOOTPRINT, 8> footprints{};
        std::array<UINT, 8> rows{};
        std::array<UINT64, 8> row_sizes{};
        UINT64 upload_bytes = 0u;
        s.device->GetCopyableFootprints(&desc, 0u, texture.mip_levels, 0u,
                                         footprints.data(), rows.data(), row_sizes.data(),
                                         &upload_bytes);

        const UINT64 arena_offset = align_up(
            static_cast<UINT64>(frame.texture_upload_cursor), kPlacementAlignment);
        const bool use_arena = s.texture_upload_ring_enabled &&
            frame.texture_upload_buffer && frame.mapped_texture_upload &&
            arena_offset <= kTextureUploadCapacity &&
            upload_bytes <= kTextureUploadCapacity - arena_offset;

        ID3D12Resource *upload_resource = nullptr;
        std::byte *mapped_base = nullptr;
        UINT64 footprint_base = 0u;
        ComPtr<ID3D12Resource> fallback_upload;

        if (use_arena) {
            footprint_base = arena_offset;
            s.device->GetCopyableFootprints(&desc, 0u, texture.mip_levels, footprint_base,
                                             footprints.data(), rows.data(), row_sizes.data(),
                                             nullptr);
            upload_resource = frame.texture_upload_buffer.Get();
            mapped_base = frame.mapped_texture_upload;
            frame.texture_upload_cursor = static_cast<std::size_t>(footprint_base + upload_bytes);
        } else {
            D3D12_RESOURCE_DESC upload{};
            upload.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
            upload.Width = std::max<UINT64>(upload_bytes, 256u);
            upload.Height = 1u;
            upload.DepthOrArraySize = 1u;
            upload.MipLevels = 1u;
            upload.Format = DXGI_FORMAT_UNKNOWN;
            upload.SampleDesc.Count = 1u;
            upload.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
            D3D12_HEAP_PROPERTIES up_heap{};
            up_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
            const HRESULT create_hr = s.device->CreateCommittedResource(
                &up_heap, D3D12_HEAP_FLAG_NONE, &upload,
                D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                IID_PPV_ARGS(&fallback_upload));
            if (FAILED(create_hr)) continue;
            void *mapped = nullptr;
            const D3D12_RANGE no_read{0u, 0u};
            const HRESULT map_hr = fallback_upload->Map(0u, &no_read, &mapped);
            if (FAILED(map_hr) || mapped == nullptr) continue;
            upload_resource = fallback_upload.Get();
            mapped_base = static_cast<std::byte *>(mapped);
        }

        std::size_t source_offset = 0u;
        std::uint32_t w = texture.width;
        std::uint32_t h = texture.height;
        for (std::uint32_t level = 0u; level < texture.mip_levels; ++level) {
            const std::size_t row_bytes = static_cast<std::size_t>(w) * 4u;
            for (std::uint32_t y = 0u; y < h; ++y) {
                std::memcpy(mapped_base + footprints[level].Offset +
                                static_cast<std::size_t>(y) * footprints[level].Footprint.RowPitch,
                            texture.pixels->data() + source_offset +
                                static_cast<std::size_t>(y) * row_bytes,
                            row_bytes);
            }
            source_offset += row_bytes * h;
            w = std::max(1u, w >> 1u);
            h = std::max(1u, h >> 1u);
        }

        if (fallback_upload) {
            fallback_upload->Unmap(0u, nullptr);
            frame.transient_resources.push_back(fallback_upload);
        }

        for (std::uint32_t level = 0u; level < texture.mip_levels; ++level) {
            D3D12_TEXTURE_COPY_LOCATION dst{};
            dst.pResource = texture.image.Get();
            dst.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
            dst.SubresourceIndex = level;
            D3D12_TEXTURE_COPY_LOCATION src{};
            src.pResource = upload_resource;
            src.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
            src.PlacedFootprint = footprints[level];
            s.list->CopyTextureRegion(&dst, 0u, 0u, 0u, &src, nullptr);
        }
        transition(s.list.Get(), texture.image.Get(), D3D12_RESOURCE_STATE_COPY_DEST,
                   D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
        texture.pending_upload.Reset();
    }
    s.pending_texture_keys.clear();
}

GeGpuVertex screen_to_d3d(GeGpuVertex source) noexcept {
    float w = source.w;
    if (!std::isfinite(w) || std::fabs(w) < 1.0e-12f) w = 1.0f;
    source.x = (source.x * (2.0f / static_cast<float>(kReferenceWidth)) - 1.0f) * w;
    source.y = (1.0f - source.y * (2.0f / static_cast<float>(kReferenceHeight))) * w;
    source.z = std::clamp(source.z / 65535.0f, 0.0f, 1.0f) * w;
    source.w = w;
    source.transform_control = 0u;
    return source;
}

float dot4(const std::array<float, 16> &m, std::size_t row,
           float x, float y, float z, float w) noexcept {
    return m[row] * x + m[4u + row] * y + m[8u + row] * z + m[12u + row] * w;
}

Dx12TransformConstants make_transform_constants(const Dx12Batch &batch,
                                                 std::uint32_t logical_width,
                                                 std::uint32_t logical_height) noexcept {
    Dx12TransformConstants constants{};
    logical_width = std::max<std::uint32_t>(1u, logical_width);
    logical_height = std::max<std::uint32_t>(1u, logical_height);
    if (!batch.hardware_transform) {
        constants.uv = {2.0f / static_cast<float>(logical_width),
                        2.0f / static_cast<float>(logical_height),
                        1.0f / 65535.0f, 0.0f};
        constants.control = {2u, 0u, 0u, 0u};
        return constants;
    }
    const GeGpuHardwareTransform &hw = batch.transform;
    const auto row = [&](std::size_t r) {
        return std::array<float, 4>{
            hw.model_to_clip[r], hw.model_to_clip[4u + r],
            hw.model_to_clip[8u + r], hw.model_to_clip[12u + r]};
    };
    const auto add_scaled = [](const std::array<float, 4> &a, float sa,
                               const std::array<float, 4> &b, float sb) {
        return std::array<float, 4>{a[0] * sa + b[0] * sb,
                                    a[1] * sa + b[1] * sb,
                                    a[2] * sa + b[2] * sb,
                                    a[3] * sa + b[3] * sb};
    };
    const auto clip_x = row(0u);
    const auto clip_y = row(1u);
    const auto clip_z = row(2u);
    const auto clip_w = row(3u);
    const float x_a = hw.viewport_scale_x * (2.0f / static_cast<float>(logical_width));
    const float x_b = (hw.viewport_center_x - hw.viewport_offset_x) *
                      (2.0f / static_cast<float>(logical_width)) - 1.0f;
    const float y_a = hw.viewport_scale_y * (2.0f / static_cast<float>(logical_height));
    const float y_b = (hw.viewport_center_y - hw.viewport_offset_y) *
                      (2.0f / static_cast<float>(logical_height)) - 1.0f;
    constexpr float inv_depth = 1.0f / 65535.0f;
    const float z_a = hw.viewport_scale_z * inv_depth;
    const float z_b = hw.viewport_center_z * inv_depth;
    constants.row0 = add_scaled(clip_x, x_a, clip_w, x_b);
    constants.row1 = add_scaled(clip_y, -y_a, clip_w, -y_b);
    constants.row2 = add_scaled(clip_z, z_a, clip_w, z_b);
    constants.row3 = clip_w;
    constants.view_z = hw.model_to_view_z;
    constants.uv = {hw.uv_scale_u, hw.uv_scale_v, hw.uv_offset_u, hw.uv_offset_v};
    constants.fog = {hw.fog_end, hw.fog_slope, 0.0f, 0.0f};
    constants.control = {1u, hw.depth_clip_enabled ? 1u : 0u,
                         hw.vertex_color_affine ? 1u : 0u, 0u};
    constants.color_mul = hw.vertex_color_mul;
    constants.color_add = hw.vertex_color_add;
    return constants;
}

GeGpuVertex model_to_d3d(GeGpuVertex source, const GeGpuHardwareTransform &t) noexcept {
    const float x = source.x, y = source.y, z = source.z, w = source.w;
    const float cx = dot4(t.model_to_clip, 0u, x, y, z, w);
    const float cy = dot4(t.model_to_clip, 1u, x, y, z, w);
    float cz = dot4(t.model_to_clip, 2u, x, y, z, w);
    float cw = dot4(t.model_to_clip, 3u, x, y, z, w);
    if (!std::isfinite(cw) || std::fabs(cw) < 1.0e-12f) cw = 1.0f;
    const float x_a = t.viewport_scale_x * (2.0f / static_cast<float>(kReferenceWidth));
    const float x_b = (t.viewport_center_x - t.viewport_offset_x) *
                      (2.0f / static_cast<float>(kReferenceWidth)) - 1.0f;
    const float y_a = t.viewport_scale_y * (2.0f / static_cast<float>(kReferenceHeight));
    const float y_b = (t.viewport_center_y - t.viewport_offset_y) *
                      (2.0f / static_cast<float>(kReferenceHeight)) - 1.0f;
    constexpr float inv_depth = 1.0f / 65535.0f;
    const float z_a = t.viewport_scale_z * inv_depth;
    const float z_b = t.viewport_center_z * inv_depth;
    source.x = cx * x_a + cw * x_b;
    source.y = -(cy * y_a + cw * y_b);
    source.z = cz * z_a + cw * z_b;
    source.w = cw;
    if (!t.depth_clip_enabled)
        source.z = std::clamp(source.z, 0.0f, cw);
    const float view_z = t.model_to_view_z[0] * x + t.model_to_view_z[1] * y +
                         t.model_to_view_z[2] * z + t.model_to_view_z[3] * w;
    source.fog_factor = std::clamp((view_z + t.fog_end) * t.fog_slope, 0.0f, 1.0f);
    source.u = source.u * t.uv_scale_u + t.uv_offset_u;
    source.v = source.v * t.uv_scale_v + t.uv_offset_v;
    source.transform_control = 0u;
    return source;
}

void clear_accumulation(Dx12GeState &s) noexcept {
    s.vertices.clear();
    s.packed_0115_vertices.clear();
    s.indices.clear();
    s.batches.clear();
}

bool create_backend(Dx12GeState &s, std::string &error) noexcept {
    const InternalResolutionDimensions dims = resolve_internal_resolution(lcs_render_configuration().rendering);
    s.target_width = std::max<std::uint32_t>(1u, dims.width);
    s.target_height = std::max<std::uint32_t>(1u, dims.height);
    const char *readback = std::getenv("PSPRECOMP_DX12_GE_READBACK");
    s.readback_enabled = readback == nullptr || (*readback != '\0' && *readback != '0');
    if (const char *ring = std::getenv("PSPRECOMP_DX12_TEXTURE_UPLOAD_RING");
        ring != nullptr && *ring != '\0') {
        s.texture_upload_ring_enabled = *ring != '0' &&
            std::strcmp(ring, "false") != 0 && std::strcmp(ring, "FALSE") != 0 &&
            std::strcmp(ring, "off") != 0 && std::strcmp(ring, "OFF") != 0;
    } else {
        s.texture_upload_ring_enabled = true;
    }
    HRESULT hr = CreateDXGIFactory2(0u, IID_PPV_ARGS(&s.factory));
    if (FAILED(hr)) { error = hr_text(hr, "CreateDXGIFactory2(DX12 GE)"); return false; }
    if (!select_adapter(s, error)) return false;
    hr = D3D12CreateDevice(s.adapter.Get(), D3D_FEATURE_LEVEL_11_0, IID_PPV_ARGS(&s.device));
    if (FAILED(hr)) { error = hr_text(hr, "D3D12CreateDevice(DX12 GE)"); return false; }
    {
        ComPtr<IDXGIAdapter3> adapter3;
        DXGI_QUERY_VIDEO_MEMORY_INFO memory{};
        if (SUCCEEDED(s.adapter.As(&adapter3)) &&
            SUCCEEDED(adapter3->QueryVideoMemoryInfo(0u, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, &memory)))
            s.video_budget_bytes = memory.Budget;
    }
    select_depth_and_msaa(s);
    D3D12_COMMAND_QUEUE_DESC queue_desc{};
    queue_desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    hr = s.device->CreateCommandQueue(&queue_desc, IID_PPV_ARGS(&s.queue));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommandQueue(DX12 GE)"); return false; }

    D3D12_HEAP_PROPERTIES upload_heap{};
    upload_heap.Type = D3D12_HEAP_TYPE_UPLOAD;
    D3D12_RESOURCE_DESC upload{};
    upload.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    upload.Width = kGeometryUploadCapacity;
    upload.Height = 1u;
    upload.DepthOrArraySize = 1u;
    upload.MipLevels = 1u;
    upload.Format = DXGI_FORMAT_UNKNOWN;
    upload.SampleDesc.Count = 1u;
    upload.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    for (Dx12FrameResources &frame : s.frames) {
        hr = s.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&frame.allocator));
        if (FAILED(hr)) { error = hr_text(hr, "CreateCommandAllocator(DX12 GE frame)"); return false; }
        hr = s.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE, &upload,
                                                D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                                IID_PPV_ARGS(&frame.upload_buffer));
        if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 GE geometry upload)"); return false; }
        void *mapped = nullptr;
        const D3D12_RANGE no_read{0u, 0u};
        hr = frame.upload_buffer->Map(0u, &no_read, &mapped);
        if (FAILED(hr) || mapped == nullptr) { error = hr_text(hr, "Map(DX12 GE geometry upload)"); return false; }
        frame.mapped_upload = static_cast<std::byte *>(mapped);

        if (s.texture_upload_ring_enabled) {
            D3D12_RESOURCE_DESC texture_upload = upload;
            texture_upload.Width = kTextureUploadCapacity;
            hr = s.device->CreateCommittedResource(&upload_heap, D3D12_HEAP_FLAG_NONE, &texture_upload,
                                                    D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
                                                    IID_PPV_ARGS(&frame.texture_upload_buffer));
            if (FAILED(hr)) { error = hr_text(hr, "CreateCommittedResource(DX12 texture upload arena)"); return false; }
            mapped = nullptr;
            hr = frame.texture_upload_buffer->Map(0u, &no_read, &mapped);
            if (FAILED(hr) || mapped == nullptr) { error = hr_text(hr, "Map(DX12 texture upload arena)"); return false; }
            frame.mapped_texture_upload = static_cast<std::byte *>(mapped);
        }
        frame.texture_upload_cursor = 0u;
        frame.transient_resources.reserve(128u);
    }
    hr = s.device->CreateCommandList(0u, D3D12_COMMAND_LIST_TYPE_DIRECT, s.frames[0].allocator.Get(), nullptr,
                                     IID_PPV_ARGS(&s.list));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommandList(DX12 GE)"); return false; }
    s.list->Close();

    hr = s.device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&s.texture_allocator));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommandAllocator(DX12 GE texture)"); return false; }
    hr = s.device->CreateCommandList(0u, D3D12_COMMAND_LIST_TYPE_DIRECT, s.texture_allocator.Get(), nullptr,
                                     IID_PPV_ARGS(&s.texture_list));
    if (FAILED(hr)) { error = hr_text(hr, "CreateCommandList(DX12 GE texture)"); return false; }
    s.texture_list->Close();

    hr = s.device->CreateFence(0u, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&s.fence));
    if (FAILED(hr)) { error = hr_text(hr, "CreateFence(DX12 GE)"); return false; }
    s.fence_event = CreateEventW(nullptr, FALSE, FALSE, nullptr);
    if (s.fence_event == nullptr) { error = "CreateEventW failed for DX12 GE fence"; return false; }
    if (!compile_shaders(s, error)) return false;
    if (!create_root_signature(s, error)) return false;
    if (!create_targets(s, error)) return false;
    if (!create_present_pipeline(s, error)) return false;
    s.vertices.reserve(262144u);
    s.packed_0115_vertices.reserve(2621440u);
    s.indices.reserve(524288u);
    s.batches.reserve(4096u);
    s.textures.reserve(std::max<std::uint32_t>(256u,
        lcs_render_configuration().rendering.texture_cache_entries));
    s.frame_targets.reserve(64u);
    s.pipelines.reserve(512u);
    s.sampler_cache.reserve(64u);
    s.pending_texture_keys.reserve(256u);
    s.free_texture_srvs.reserve(1024u);
    s.retired_texture_srvs.reserve(256u);
    s.texture_pool = std::make_shared<Dx12TexturePool>(s.device.Get());
    s.texture_pool->warm_up();
    return true;
}

void destroy_backend(Dx12GeState &s) noexcept {
    std::string ignored;
    if (s.queue && s.fence) (void)wait_for_gpu(s, ignored);
    for (Dx12FrameResources &frame : s.frames) {
        if (frame.upload_buffer && frame.mapped_upload != nullptr)
            frame.upload_buffer->Unmap(0u, nullptr);
        if (frame.texture_upload_buffer && frame.mapped_texture_upload != nullptr)
            frame.texture_upload_buffer->Unmap(0u, nullptr);
        if (frame.settings_upload && frame.settings_upload_mapped != nullptr)
            frame.settings_upload->Unmap(0u, nullptr);
        if (frame.settings_vertices && frame.settings_vertices_mapped != nullptr)
            frame.settings_vertices->Unmap(0u, nullptr);
        if (frame.fps_upload && frame.fps_upload_mapped != nullptr)
            frame.fps_upload->Unmap(0u, nullptr);
        if (frame.fps_vertices && frame.fps_vertices_mapped != nullptr)
            frame.fps_vertices->Unmap(0u, nullptr);
        frame.mapped_upload = nullptr;
        frame.mapped_texture_upload = nullptr;
        frame.settings_upload_mapped = nullptr;
        frame.settings_vertices_mapped = nullptr;
        frame.fps_upload_mapped = nullptr;
        frame.fps_vertices_mapped = nullptr;
        frame.transient_resources.clear();
        frame.transient_placements.clear();
        frame.texture_upload_buffer.Reset();
        frame.upload_buffer.Reset();
        frame.settings_upload.Reset();
        frame.settings_vertices.Reset();
        frame.settings_texture.Reset();
        frame.settings_srv = 0u;
        frame.settings_texture_state = D3D12_RESOURCE_STATE_COPY_DEST;
        frame.fps_upload.Reset();
        frame.fps_vertices.Reset();
        frame.fps_texture.Reset();
        frame.fps_srv = 0u;
        frame.fps_texture_state = D3D12_RESOURCE_STATE_COPY_DEST;
        frame.texture_upload_cursor = 0u;
        frame.allocator.Reset();
        frame.fence_value = 0u;
    }
    release_swapchain_buffers(s);
    s.swapchain.Reset();
    s.swap_rtv_heap.Reset();
    s.present_pipeline.Reset();
    s.present_pixel_shader.Reset();
    s.present_vertex_shader.Reset();
    s.settings_pipeline.Reset();
    s.settings_pixel_shader.Reset();
    s.settings_vertex_shader.Reset();
    s.pipelines.clear();
    s.textures.clear();
    s.texture_pool.reset();
    s.pending_texture_keys.clear();
    s.free_texture_srvs.clear();
    s.retired_texture_srvs.clear();
    s.sampler_cache.clear();
    s.known_frame_targets.clear();
    s.last_registered_framebuffer_target = 0xFFFFFFFFu;
    s.pixel_shader.Reset();
    s.packed_0115_vertex_shader.Reset();
    s.vertex_shader.Reset();
    s.root_signature.Reset();
    s.readback_buffer.Reset();
    s.frame_targets.clear();
    s.sampler_heap.Reset();
    s.srv_heap.Reset();
    s.dsv_heap.Reset();
    s.rtv_heap.Reset();
    s.texture_list.Reset();
    s.texture_allocator.Reset();
    s.list.Reset();
    if (s.fence_event != nullptr) CloseHandle(s.fence_event);
    s.fence_event = nullptr;
    s.fence.Reset();
    s.queue.Reset();
    s.device.Reset();
    s.adapter.Reset();
    s.factory.Reset();
    s.frame_rgba.clear();
    s.last_texture_rgba.clear();
    s.texture_cache_bytes = 0u;
    s.next_rtv = 0u;
    s.next_dsv = 0u;
    s.next_srv = 1u;
    s.next_sampler = 1u;
    s.frame_cursor = 0u;
    s.frame_epoch = 1u;
    s.sample_count = 1u;
    s.sample_quality = 0u;
    s.depth_format = kDepthFormat;
    s.depth_bits = 32u;
    s.swap_width = s.swap_height = 0u;
    s.native_window = nullptr;
    s.direct_present_ok = false;
    s.presented_framebuffer = 0u;
    s.missed_display_intervals = 0u;
    s.swapchain_tearing = false;
    clear_accumulation(s);
    s.enabled = false;
}

}

bool initialize_ge_gpu_backend(std::string &error) {
    Dx12GeState &s = state();
    destroy_backend(s);
    s.display_framebuffer = 0u;
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    if (rendering.backend == RenderingBackend::Vulkan) {
        error.clear();
        return true;
    }
    if (rendering.backend != RenderingBackend::DirectX12) {
        error.clear();
        return true;
    }
    if (!rendering.dx12_ge_color) {
        error.clear();
        return true;
    }
    if (!create_backend(s, error)) {
        const std::string native_error = error;
        destroy_backend(s);
        const char *strict = std::getenv("PSPRECOMP_DX12_GE_STRICT");
        const bool strict_mode = strict != nullptr && *strict != '\0' && *strict != '0';
        error = native_error;
        return !strict_mode;
    }
    s.enabled = true;
    error.clear();
    return true;
}

void shutdown_ge_gpu_backend() noexcept {
    Dx12GeState &s = state();
    destroy_backend(s);
    s.display_framebuffer = 0u;
}

bool ge_gpu_backend_active() noexcept { return state().enabled; }
bool ge_gpu_backend_transfer_ready() noexcept { return state().enabled; }
bool ge_gpu_backend_graphics_ready() noexcept { return state().enabled; }

void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled) return;
    const std::uint32_t target = draw.framebuffer_address & 0x001FFFF0u;
    if (draw.framebuffer_stride != 0u || target == s.display_framebuffer) {
        if (target != s.last_registered_framebuffer_target ||
            find_framebuffer_target(s, target) == nullptr) {
            s.last_registered_framebuffer_target = target;
            s.known_frame_targets.insert(target);
            std::string error;
            (void)ensure_framebuffer_target(s, target, error);
        }
        const std::uint32_t logical_width = target == s.display_framebuffer
            ? s.display_logical_width
            : std::max<std::uint32_t>(1u, draw.framebuffer_stride != 0u
                  ? draw.framebuffer_stride
                  : static_cast<std::uint32_t>(std::max(1, draw.scissor_x1 + 1)));
        const std::uint32_t logical_height = target == s.display_framebuffer
            ? s.display_logical_height
            : static_cast<std::uint32_t>(std::max(1, draw.scissor_y1 + 1));
        note_framebuffer_logical_extent(s, target, logical_width, logical_height);
    }
    if (draw.texture_enabled) {
        const std::uint32_t feedback = draw.texture_address & 0x001FFFF0u;
        if (Dx12FramebufferTarget *feedback_target = find_framebuffer_target(s, feedback)) {
            if (feedback == s.display_framebuffer) {
                feedback_target->logical_width = s.display_logical_width;
                feedback_target->logical_height = s.display_logical_height;
            } else {
                const std::uint32_t texture_width = draw.texture_width != 0u
                    ? draw.texture_width : draw.texture_buffer_width;
                if (texture_width != 0u) feedback_target->logical_width = texture_width;
                if (draw.texture_height != 0u) feedback_target->logical_height = draw.texture_height;
            }
        }
    }
}

void ge_gpu_backend_observe_camera(const std::array<float, 12> &,
                                   const std::array<float, 16> &,
                                   const std::array<float, 6> &,
                                   const std::array<float, 3> &,
                                   const GeGpuDrawDescriptor &,
                                   std::uint32_t) noexcept {}

bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &, std::span<const GeGpuVertex>) noexcept {
    return state().enabled;
}

bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &draw) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || !draw.texture_enabled || draw.texture_format > 10u ||
        draw.texture_width == 0u || draw.texture_height == 0u) return false;
    const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
    if (find_framebuffer_target(s, feedback_address) != nullptr) {
        return false;
    }
    const std::uint64_t key = texture_key(draw);
    Dx12Texture *found = find_cached_texture(s, key);
    if (found == nullptr) return true;
    found->signature_epoch = s.frame_epoch;
    found->last_used_epoch = s.frame_epoch;
    if (draw.texture_content_signature != 0u &&
        found->descriptor.texture_content_signature != draw.texture_content_signature)
        return true;
    return false;
}

void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.texture_enabled) {
        draw.texture_cache_key_hint = 0u;
        draw.texture_image_key_hint = 0u;
        return;
    }
    draw.texture_cache_key_hint = 0u;
    draw.texture_image_key_hint = 0u;
    const std::uint64_t key = texture_key(draw);
    draw.texture_cache_key_hint = key;
    draw.texture_image_key_hint = key;
}

bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &draw) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || !draw.texture_enabled || draw.texture_width == 0u || draw.texture_height == 0u)
        return false;
    if (find_framebuffer_target(s, draw.texture_address) != nullptr)
        return false;
    Dx12Texture *found = find_cached_texture(s, texture_key(draw));
    return found == nullptr || found->signature_epoch != s.frame_epoch;
}

bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &draw) noexcept {
    const Dx12GeState &s = state();
    return s.enabled && draw.texture_enabled &&
           find_framebuffer_target(s, draw.texture_address) != nullptr;
}
GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(
    const GeGpuDrawDescriptor &draw) noexcept {
    GeGpuWidescreenHud hud{};
    Dx12GeState &s = state();
    if (!s.enabled) return hud;

    const LcsConfiguration &config = lcs_render_configuration();
    if (!config.initialized || !config.widescreen.enabled) return hud;

    const float shrink = widescreen_render_stretch();
    if (!std::isfinite(shrink) || shrink <= 0.0f ||
        std::abs(shrink - 1.0f) < 1.0e-5f)
        return hud;

    std::uint32_t logical_width = kReferenceWidth;
    if (const Dx12FramebufferTarget *target =
            find_framebuffer_target(s, draw.framebuffer_address)) {
        logical_width = std::max<std::uint32_t>(1u, target->logical_width);
    }

    hud.shrink = shrink;
    hud.display_scale_x = static_cast<float>(kReferenceWidth) /
                          static_cast<float>(logical_width);
    hud.source_center = static_cast<float>(logical_width) * 0.5f;
    return hud;
}
void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &, float, float) noexcept {}
bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &) noexcept { return false; }

bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &draw) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || !draw.texture_enabled) return false;
    if (const auto *target = find_framebuffer_target(s, draw.texture_address))
        return target->color != nullptr;
    Dx12Texture *found = find_cached_texture(s, texture_key(draw));
    if (found == nullptr || !found->image) return false;
    found->last_used_epoch = s.frame_epoch;
    return true;
}

bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                           std::uint32_t height,
                                           std::span<const std::byte> rgba) noexcept {
    if (rgba.empty()) return false;
    auto packed = std::make_shared<const std::vector<std::byte>>(rgba.begin(), rgba.end());
    return prepare_texture_upload(state(), draw, width, height, 1u, std::move(packed));
}

bool ge_gpu_backend_upload_decoded_texture_chain(const GeGpuDrawDescriptor &draw,
                                                 std::span<const GeGpuDecodedMipLevel> levels) noexcept {
    if (levels.empty() || levels.size() > 8u) return false;
    std::size_t total = 0u;
    std::uint32_t w = levels.front().width;
    std::uint32_t h = levels.front().height;
    if (w == 0u || h == 0u) return false;
    for (const auto &level : levels) {
        const std::size_t bytes = static_cast<std::size_t>(level.width) * level.height * 4u;
        if (level.width != w || level.height != h || level.rgba8.size() != bytes) return false;
        total += bytes;
        w = std::max(1u, w >> 1u);
        h = std::max(1u, h >> 1u);
    }
    std::vector<std::byte> packed;
    try {
        packed.reserve(total);
        for (const auto &level : levels) packed.insert(packed.end(), level.rgba8.begin(), level.rgba8.end());
    } catch (...) { return false; }
    return prepare_texture_upload(state(), draw, levels.front().width, levels.front().height,
                                  static_cast<std::uint32_t>(levels.size()),
                                  std::make_shared<const std::vector<std::byte>>(std::move(packed)));
}

bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &draw,
                                                        std::uint32_t width, std::uint32_t height,
                                                        std::uint32_t mip_levels,
                                                        std::vector<std::byte> packed) noexcept {
    return prepare_texture_upload(state(), draw, width, height, mip_levels,
                                  std::make_shared<const std::vector<std::byte>>(std::move(packed)));
}

bool ge_gpu_backend_upload_shared_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width, std::uint32_t height,
                                          std::shared_ptr<const std::vector<std::byte>> rgba8) noexcept {
    if (!rgba8) return false;
    // An image that never changes: its address stands for its contents.
    const std::uint64_t checksum = hash_mix(reinterpret_cast<std::uintptr_t>(rgba8.get()), rgba8->size()) | 1u;
    return prepare_texture_upload(state(), draw, width, height, 1u, std::move(rgba8), checksum);
}
bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte> destination) noexcept {
    const Dx12GeState &s = state();
    if (s.last_texture_rgba.empty() || destination.size() < s.last_texture_rgba.size()) return false;
    std::memcpy(destination.data(), s.last_texture_rgba.data(), s.last_texture_rgba.size());
    return true;
}

void ge_gpu_backend_accumulate_color_triangles(
    const GeGpuDrawDescriptor &draw,
    std::span<const GeGpuVertex> triangle_vertices) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || triangle_vertices.empty() || triangle_vertices.size() % 3u != 0u) return;
    const std::size_t required =
        (s.vertices.size() + triangle_vertices.size()) * sizeof(Dx12UploadVertex) +
        s.packed_0115_vertices.size() +
        s.indices.size() * sizeof(std::uint32_t) + 16u;
    if (required > kGeometryUploadCapacity ||
        s.vertices.size() > std::numeric_limits<std::uint32_t>::max()) {
        return;
    }
    try {
        const bool sampled_texture = draw.texture_enabled && ge_gpu_backend_texture_available(draw);
        const std::uint32_t first = static_cast<std::uint32_t>(s.vertices.size());
        for (const GeGpuVertex &source : triangle_vertices) {
            Dx12UploadVertex vertex = make_upload_vertex(source);
            if (sampled_texture && draw.texture_width != 0u && draw.texture_height != 0u) {
                vertex.u /= static_cast<float>(draw.texture_width);
                vertex.v /= static_cast<float>(draw.texture_height);
            }
            s.vertices.push_back(vertex);
        }
        const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
        const bool framebuffer_feedback = draw.texture_enabled &&
            find_framebuffer_target(s, feedback_address) != nullptr;
        Dx12Batch batch{};
        batch.draw = draw;
        batch.first_vertex = first;
        batch.vertex_count = static_cast<std::uint32_t>(triangle_vertices.size());
        batch.logical_draw_count = 1u;
        batch.framebuffer_feedback = framebuffer_feedback;
        batch.feedback_address = feedback_address;
        (void)append_or_merge_batch(s, std::move(batch));
    } catch (...) {
    }
}

void ge_gpu_backend_accumulate_hardware_triangles(
    const GeGpuDrawDescriptor &draw,
    const GeGpuHardwareTransform &transform,
    std::span<const GeGpuVertex> vertices,
    std::span<const std::uint32_t> triangle_indices) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || vertices.empty()) return;

    const bool indexed = native_indexed_draw_enabled() && !triangle_indices.empty();
    const std::size_t emitted_count = triangle_indices.empty() ? vertices.size()
                                                               : triangle_indices.size();
    if (emitted_count == 0u ||
        (transform.primitive == 4u ? emitted_count < 3u : (emitted_count % 3u) != 0u)) return;
    if (s.vertices.size() > std::numeric_limits<std::uint32_t>::max() ||
        s.indices.size() > std::numeric_limits<std::uint32_t>::max()) {
        return;
    }

    const std::size_t vertices_to_append = indexed ? vertices.size() : emitted_count;
    const std::size_t indices_to_append = indexed ? triangle_indices.size() : 0u;
    const std::size_t required =
        (s.vertices.size() + vertices_to_append) * sizeof(Dx12UploadVertex) +
        s.packed_0115_vertices.size() +
        (s.indices.size() + indices_to_append) * sizeof(std::uint32_t) + 16u;
    if (required > kGeometryUploadCapacity) {
        return;
    }

    try {
        const std::uint32_t first_vertex = static_cast<std::uint32_t>(s.vertices.size());
        const std::uint32_t first_index = static_cast<std::uint32_t>(s.indices.size());

        if (indexed || triangle_indices.empty()) {
            for (const GeGpuVertex &source : vertices)
                s.vertices.push_back(make_upload_vertex(source));
        } else {
            for (std::uint32_t index : triangle_indices) {
                if (static_cast<std::size_t>(index) >= vertices.size()) {
                    s.vertices.resize(first_vertex);
                    return;
                }
                s.vertices.push_back(make_upload_vertex(vertices[index]));
            }
        }

        if (indexed) {
            for (std::uint32_t index : triangle_indices) {
                if (static_cast<std::size_t>(index) >= vertices.size()) {
                    s.vertices.resize(first_vertex);
                    s.indices.resize(first_index);
                    return;
                }
                s.indices.push_back(index);
            }
        }

        const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
        const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
        const bool framebuffer_feedback = draw.texture_enabled &&
            find_framebuffer_target(s, feedback_address) != nullptr;
        Dx12Batch batch{};
        batch.draw = draw;
        batch.first_vertex = first_vertex;
        batch.vertex_count = static_cast<std::uint32_t>(vertices_to_append);
        batch.first_index = first_index;
        batch.index_count = indexed ? static_cast<std::uint32_t>(triangle_indices.size()) : 0u;
        batch.indexed = indexed;
        batch.logical_draw_count = logical;
        batch.framebuffer_feedback = framebuffer_feedback;
        batch.feedback_address = feedback_address;
        batch.hardware_transform = true;
        batch.transform = transform;
        (void)append_or_merge_batch(s, std::move(batch));
    } catch (...) {
    }
}

bool ge_gpu_backend_accumulate_hardware_packed_0115(
    const GeGpuDrawDescriptor &draw,
    const GeGpuHardwareTransform &transform,
    std::span<const std::byte> packed_vertices,
    std::uint32_t vertex_count,
    std::span<const std::uint32_t> triangle_indices) noexcept {
    Dx12GeState &s = state();
    constexpr std::size_t kPackedStride = 10u;
    if (!s.enabled || vertex_count == 0u ||
        packed_vertices.size() != static_cast<std::size_t>(vertex_count) * kPackedStride)
        return false;

    const bool indexed = native_indexed_draw_enabled() && !triangle_indices.empty();
    const std::size_t emitted_count = triangle_indices.empty()
        ? static_cast<std::size_t>(vertex_count) : triangle_indices.size();
    if (emitted_count == 0u ||
        (transform.primitive == 4u ? emitted_count < 3u : (emitted_count % 3u) != 0u)) return false;

    const std::size_t first_packed_byte = s.packed_0115_vertices.size();
    if ((first_packed_byte % kPackedStride) != 0u) return false;
    const std::size_t first_vertex64 = first_packed_byte / kPackedStride;
    if (first_vertex64 > std::numeric_limits<std::uint32_t>::max() ||
        s.indices.size() > std::numeric_limits<std::uint32_t>::max())
        return false;

    const std::size_t packed_append_bytes = indexed || triangle_indices.empty()
        ? packed_vertices.size() : emitted_count * kPackedStride;
    const std::size_t index_append_count = indexed ? triangle_indices.size() : 0u;
    const std::size_t required = s.vertices.size() * sizeof(Dx12UploadVertex) +
        s.packed_0115_vertices.size() + packed_append_bytes +
        (s.indices.size() + index_append_count) * sizeof(std::uint32_t) + 16u;
    if (required > kGeometryUploadCapacity) {
        return false;
    }

    const std::uint32_t first_vertex = static_cast<std::uint32_t>(first_vertex64);
    const std::uint32_t first_index = static_cast<std::uint32_t>(s.indices.size());
    try {
        if (indexed || triangle_indices.empty()) {
            s.packed_0115_vertices.insert(s.packed_0115_vertices.end(),
                                          packed_vertices.begin(), packed_vertices.end());
        } else {
            for (std::uint32_t index : triangle_indices) {
                if (index >= vertex_count) {
                    s.packed_0115_vertices.resize(first_packed_byte);
                    return false;
                }
                const std::byte *source = packed_vertices.data() +
                    static_cast<std::size_t>(index) * kPackedStride;
                s.packed_0115_vertices.insert(s.packed_0115_vertices.end(),
                                               source, source + kPackedStride);
            }
        }
        if (indexed) {
            for (std::uint32_t index : triangle_indices) {
                if (index >= vertex_count) {
                    s.packed_0115_vertices.resize(first_packed_byte);
                    s.indices.resize(first_index);
                    return false;
                }
                s.indices.push_back(index);
            }
        }

        const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
        const std::uint32_t feedback_address = draw.texture_address & 0x001FFFF0u;
        const bool framebuffer_feedback = draw.texture_enabled &&
            find_framebuffer_target(s, feedback_address) != nullptr;
        Dx12Batch batch{};
        batch.draw = draw;
        batch.first_vertex = first_vertex;
        batch.vertex_count = static_cast<std::uint32_t>(indexed || triangle_indices.empty()
            ? vertex_count : emitted_count);
        batch.first_index = first_index;
        batch.index_count = indexed ? static_cast<std::uint32_t>(triangle_indices.size()) : 0u;
        batch.indexed = indexed;
        batch.packed_0115 = true;
        batch.logical_draw_count = logical;
        batch.framebuffer_feedback = framebuffer_feedback;
        batch.feedback_address = feedback_address;
        batch.hardware_transform = true;
        batch.transform = transform;
        (void)append_or_merge_batch(s, std::move(batch));
        return true;
    } catch (...) {
        s.packed_0115_vertices.resize(first_packed_byte);
        s.indices.resize(first_index);
        return false;
    }
}

void ge_gpu_backend_set_native_window(void *native_window) noexcept {
    Dx12GeState &s = state();
    const HWND window = static_cast<HWND>(native_window);
    if (s.native_window == window) return;
    if (s.swapchain) {
        std::string ignored;
        (void)wait_for_gpu(s, ignored);
        release_swapchain_buffers(s);
        s.swapchain.Reset();
        s.swap_rtv_heap.Reset();
        s.swap_width = s.swap_height = 0u;
        s.direct_present_ok = false;
        s.presented_framebuffer = 0u;
        s.missed_display_intervals = 0u;
    }
    s.native_window = window;
}

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address,
                                            std::uint32_t logical_width,
                                            std::uint32_t logical_height) noexcept {
    Dx12GeState &s = state();
    s.display_framebuffer = address & 0x001FFFF0u;
    s.display_logical_width = logical_width != 0u ? logical_width : kReferenceWidth;
    s.display_logical_height = logical_height != 0u ? logical_height : kReferenceHeight;
    if (!s.enabled || !s.device) return;
    std::string error;
    (void)ensure_framebuffer_target(s, s.display_framebuffer, error);
    note_framebuffer_logical_extent(s, s.display_framebuffer,
                                    s.display_logical_width, s.display_logical_height);
}

void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept {
    const Dx12GeState &s = state();
    width = s.display_logical_width;
    height = s.display_logical_height;
}

bool ge_gpu_backend_finish_color_frame(std::uint64_t) noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || !s.device) {
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }
    if ((s.vertices.empty() && s.packed_0115_vertices.empty()) || s.batches.empty()) {
        if (++s.missed_display_intervals > 4u) {
            s.direct_present_ok = false;
            s.presented_framebuffer = 0u;
        }
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }

    const std::size_t vertex_bytes = s.vertices.size() * sizeof(Dx12UploadVertex);
    const std::size_t packed_offset = (vertex_bytes + 3u) & ~std::size_t{3u};
    const std::size_t packed_bytes = s.packed_0115_vertices.size();
    const std::size_t index_offset = (packed_offset + packed_bytes + 3u) & ~std::size_t{3u};
    const std::size_t index_bytes = s.indices.size() * sizeof(std::uint32_t);
    const std::size_t bytes = index_offset + index_bytes;
    if (bytes > kGeometryUploadCapacity) {
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }

    Dx12FramebufferTarget *display_target = find_framebuffer_target(s, s.display_framebuffer);

    Dx12FrameResources &frame = s.frames[s.frame_cursor];
    std::string error;
    if (!wait_for_fence(s, frame.fence_value, error)) {
        clear_accumulation(s);
        return false;
    }
    frame.transient_resources.clear();
    frame.transient_placements.clear();
    frame.texture_upload_cursor = 0u;
    if (frame.mapped_upload == nullptr ||
        (s.texture_upload_ring_enabled && frame.mapped_texture_upload == nullptr)) {
        clear_accumulation(s);
        return false;
    }
    if (vertex_bytes != 0u)
        std::memcpy(frame.mapped_upload, s.vertices.data(), vertex_bytes);
    if (packed_bytes != 0u)
        std::memcpy(frame.mapped_upload + packed_offset, s.packed_0115_vertices.data(), packed_bytes);
    if (index_bytes != 0u)
        std::memcpy(frame.mapped_upload + index_offset, s.indices.data(), index_bytes);

    bool direct_possible = false;
    if (s.native_window != nullptr) {
        std::string present_error;
        direct_possible = ensure_swapchain(s, present_error);
    }


    HRESULT hr = frame.allocator->Reset();
    if (FAILED(hr)) {
        clear_accumulation(s);
        return false;
    }
    hr = s.list->Reset(frame.allocator.Get(), nullptr);
    if (FAILED(hr)) {
        clear_accumulation(s);
        return false;
    }

    record_pending_texture_uploads(s, frame);

    const D3D12_VIEWPORT viewport{0.0f, 0.0f, static_cast<float>(s.target_width),
                                  static_cast<float>(s.target_height), 0.0f, 1.0f};
    s.list->RSSetViewports(1u, &viewport);
    const D3D12_VERTEX_BUFFER_VIEW vb{
        frame.upload_buffer->GetGPUVirtualAddress(), static_cast<UINT>(vertex_bytes),
        static_cast<UINT>(sizeof(Dx12UploadVertex))};
    const D3D12_VERTEX_BUFFER_VIEW packed_vb{
        frame.upload_buffer->GetGPUVirtualAddress() + packed_offset,
        static_cast<UINT>(packed_bytes), 10u};
    D3D12_INDEX_BUFFER_VIEW ib{};
    if (index_bytes != 0u) {
        ib.BufferLocation = frame.upload_buffer->GetGPUVirtualAddress() + index_offset;
        ib.SizeInBytes = static_cast<UINT>(index_bytes);
        ib.Format = DXGI_FORMAT_R32_UINT;
        s.list->IASetIndexBuffer(&ib);
    }
    s.list->IASetPrimitiveTopology(D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    s.list->SetGraphicsRootSignature(s.root_signature.Get());
    ID3D12DescriptorHeap *descriptor_heaps[]{s.srv_heap.Get(), s.sampler_heap.Get()};
    s.list->SetDescriptorHeaps(2u, descriptor_heaps);

    ID3D12PipelineState *active_pipeline = nullptr;
    std::uint64_t active_pipeline_key = std::numeric_limits<std::uint64_t>::max();
    Dx12FramebufferTarget *current_target = nullptr;
    std::uint32_t current_address = 0xFFFFFFFFu;
    std::uint32_t executed_batches = 0u;
    std::uint32_t bound_srv = std::numeric_limits<std::uint32_t>::max();
    std::uint32_t bound_sampler = std::numeric_limits<std::uint32_t>::max();
    Dx12TransformConstants active_transform{};
    bool active_transform_valid = false;
    Dx12PixelConstants active_pixel{};
    bool active_pixel_valid = false;
    D3D12_RECT active_scissor{};
    bool active_scissor_valid = false;
    std::uint32_t active_blend_fix = std::numeric_limits<std::uint32_t>::max();
    bool active_packed_0115 = false;
    bool active_vertex_layout_valid = false;
    D3D12_PRIMITIVE_TOPOLOGY active_topology = D3D_PRIMITIVE_TOPOLOGY_UNDEFINED;
    bool touched_display = false;

    constexpr float black[4]{0.0f, 0.0f, 0.0f, 1.0f};
    for (const Dx12Batch &batch : s.batches) {
        const std::uint32_t address = batch.draw.framebuffer_address & 0x001FFFF0u;
        Dx12FramebufferTarget *target = address == current_address
            ? current_target : find_framebuffer_target(s, address);
        if (target == nullptr || !target->color || !target->depth) continue;

        if (current_target != target) {
            if (current_target != nullptr)
                resolve_target_for_sampling(s, *current_target, false);
            prepare_target_for_render(s, *target);
            const D3D12_CPU_DESCRIPTOR_HANDLE rtv = rtv_cpu(s, target->rtv_index);
            const D3D12_CPU_DESCRIPTOR_HANDLE dsv = dsv_cpu(s, target->dsv_index);
            s.list->OMSetRenderTargets(1u, &rtv, FALSE, &dsv);

            const bool first_ever_use = target->last_render_epoch == 0u;
            const bool first_use_this_frame = target->last_render_epoch != s.frame_epoch;
            if (first_use_this_frame) {
                if (first_ever_use || address == s.display_framebuffer)
                    s.list->ClearRenderTargetView(rtv, black, 0u, nullptr);
                s.list->ClearDepthStencilView(dsv, D3D12_CLEAR_FLAG_DEPTH, 0.0f, 0u, 0u, nullptr);
                target->last_render_epoch = s.frame_epoch;
            }
            current_target = target;
            current_address = address;
            bound_srv = std::numeric_limits<std::uint32_t>::max();
            bound_sampler = std::numeric_limits<std::uint32_t>::max();
        }

        if (address == s.display_framebuffer) touched_display = true;

        const D3D12_PRIMITIVE_TOPOLOGY topology =
            batch.hardware_transform && batch.transform.primitive == 4u
                ? D3D_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP
                : D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST;
        if (topology != active_topology) {
            s.list->IASetPrimitiveTopology(topology);
            active_topology = topology;
        }

        if (!active_vertex_layout_valid || active_packed_0115 != batch.packed_0115) {
            const D3D12_VERTEX_BUFFER_VIEW &active_vb = batch.packed_0115 ? packed_vb : vb;
            s.list->IASetVertexBuffers(0u, 1u, &active_vb);
            active_packed_0115 = batch.packed_0115;
            active_vertex_layout_valid = true;
        }

        const bool batch_cull = batch.hardware_transform && batch.transform.cull_enabled;
        const bool batch_accept_ccw = batch_cull && batch.transform.accept_counter_clockwise;
        const std::uint64_t batch_pipeline_key = pipeline_key(batch.draw) |
            (batch.packed_0115 ? (std::uint64_t{1} << 63u) : 0u) |
            (batch_cull ? (std::uint64_t{1} << 62u) : 0u) |
            (batch_accept_ccw ? (std::uint64_t{1} << 61u) : 0u);
        if (active_pipeline == nullptr || batch_pipeline_key != active_pipeline_key) {
            ID3D12PipelineState *pipeline = pipeline_for(
                s, batch.draw, batch.packed_0115, batch_cull, batch_accept_ccw, error);
            if (pipeline == nullptr) continue;
            if (pipeline != active_pipeline)
                s.list->SetPipelineState(pipeline);
            active_pipeline = pipeline;
            active_pipeline_key = batch_pipeline_key;
        }

        std::uint32_t srv_index = 0u;
        std::uint32_t sampler_index = 0u;
        if (batch.draw.texture_enabled) {
            const std::uint32_t feedback_address = batch.feedback_address;
            Dx12FramebufferTarget *feedback = batch.framebuffer_feedback
                ? find_framebuffer_target(s, feedback_address) : nullptr;
            if (feedback != nullptr && feedback->color) {
                sampler_index = ensure_sampler(s, batch.draw);
                if (feedback == current_target) {
                    std::string feedback_error;
                    if (ensure_feedback_copy(s, *feedback, feedback_error)) {
                        resolve_target_for_sampling(s, *feedback, false);
                        transition(s.list.Get(), feedback->color.Get(), feedback->color_state,
                                   D3D12_RESOURCE_STATE_COPY_SOURCE);
                        feedback->color_state = D3D12_RESOURCE_STATE_COPY_SOURCE;
                        transition(s.list.Get(), feedback->feedback_copy.Get(), feedback->feedback_state,
                                   D3D12_RESOURCE_STATE_COPY_DEST);
                        feedback->feedback_state = D3D12_RESOURCE_STATE_COPY_DEST;
                        s.list->CopyResource(feedback->feedback_copy.Get(), feedback->color.Get());
                        transition(s.list.Get(), feedback->feedback_copy.Get(), feedback->feedback_state,
                                   D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
                        feedback->feedback_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
                        transition(s.list.Get(), feedback->color.Get(), feedback->color_state,
                                   D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
                        feedback->color_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
                        prepare_target_for_render(s, *feedback);
                        const D3D12_CPU_DESCRIPTOR_HANDLE self_rtv = rtv_cpu(s, feedback->rtv_index);
                        const D3D12_CPU_DESCRIPTOR_HANDLE self_dsv = dsv_cpu(s, feedback->dsv_index);
                        s.list->OMSetRenderTargets(1u, &self_rtv, FALSE, &self_dsv);
                        srv_index = feedback->feedback_srv_index;
                    }
                } else {
                    resolve_target_for_sampling(s, *feedback, false);
                    srv_index = feedback->srv_index;
                }
            } else {
                if (Dx12Texture *texture = find_cached_texture(s, texture_key(batch.draw));
                    texture != nullptr && texture->image) {
                    srv_index = texture->srv_index;
                    sampler_index = texture->sampler_index;
                }
            }
        }
        if (srv_index != bound_srv) {
            s.list->SetGraphicsRootDescriptorTable(0u, srv_gpu(s, srv_index));
            bound_srv = srv_index;
        }
        if (sampler_index != bound_sampler) {
            s.list->SetGraphicsRootDescriptorTable(1u, sampler_gpu(s, sampler_index));
            bound_sampler = sampler_index;
        }

        const std::uint32_t logical_width = current_target != nullptr && current_target->logical_width != 0u
            ? current_target->logical_width : kReferenceWidth;
        const std::uint32_t logical_height = current_target != nullptr && current_target->logical_height != 0u
            ? current_target->logical_height : kReferenceHeight;
        const Dx12TransformConstants draw_transform =
            make_transform_constants(batch, logical_width, logical_height);
        if (!active_transform_valid ||
            std::memcmp(&draw_transform, &active_transform, sizeof(draw_transform)) != 0) {
            s.list->SetGraphicsRoot32BitConstants(
                2u, 40u, &draw_transform, 0u);
            active_transform = draw_transform;
            active_transform_valid = true;
        }

        const Dx12PixelConstants pixel_state = make_pixel_constants(batch.draw, srv_index != 0u);
        if (!active_pixel_valid ||
            std::memcmp(&pixel_state, &active_pixel, sizeof(pixel_state)) != 0) {
            s.list->SetGraphicsRoot32BitConstants(3u, 5u, &pixel_state, 0u);
            active_pixel = pixel_state;
            active_pixel_valid = true;
        }

        const auto scale_x = [&](std::int32_t value) {
            return static_cast<LONG>(std::clamp<std::int64_t>(
                static_cast<std::int64_t>(value) * s.target_width /
                    std::max<std::uint32_t>(1u, logical_width),
                0, static_cast<std::int64_t>(s.target_width)));
        };
        const auto scale_y = [&](std::int32_t value) {
            return static_cast<LONG>(std::clamp<std::int64_t>(
                static_cast<std::int64_t>(value) * s.target_height /
                    std::max<std::uint32_t>(1u, logical_height),
                0, static_cast<std::int64_t>(s.target_height)));
        };
        D3D12_RECT scissor{
            scale_x(batch.draw.scissor_x0), scale_y(batch.draw.scissor_y0),
            scale_x(batch.draw.scissor_x1 + 1), scale_y(batch.draw.scissor_y1 + 1)};
        if (scissor.right <= scissor.left || scissor.bottom <= scissor.top) continue;
        if (!active_scissor_valid ||
            std::memcmp(&scissor, &active_scissor, sizeof(scissor)) != 0) {
            s.list->RSSetScissorRects(1u, &scissor);
            active_scissor = scissor;
            active_scissor_valid = true;
        }
        if (blend_variant(batch.draw) == 4u) {
            const std::uint32_t fix = batch.draw.blend_fix_source & 0x00FFFFFFu;
            if (fix != active_blend_fix) {
                const float factors[4]{
                    static_cast<float>(fix & 0xFFu) / 255.0f,
                    static_cast<float>((fix >> 8u) & 0xFFu) / 255.0f,
                    static_cast<float>((fix >> 16u) & 0xFFu) / 255.0f,
                    1.0f};
                s.list->OMSetBlendFactor(factors);
                active_blend_fix = fix;
            }
        }
        if (batch.indexed)
            s.list->DrawIndexedInstanced(batch.index_count, 1u, batch.first_index,
                                         static_cast<INT>(batch.first_vertex), 0u);
        else
            s.list->DrawInstanced(batch.vertex_count, 1u, batch.first_vertex, 0u);
        ++executed_batches;
    }

    if (current_target != nullptr)
        resolve_target_for_sampling(s, *current_target, false);

    if (executed_batches == 0u) {
        hr = s.list->Close();
        if (SUCCEEDED(hr)) {
            ID3D12CommandList *upload_lists[]{s.list.Get()};
            s.queue->ExecuteCommandLists(1u, upload_lists);
            frame.fence_value = s.next_fence++;
            (void)s.queue->Signal(s.fence.Get(), frame.fence_value);
            s.frame_cursor = (s.frame_cursor + 1u) % kFrameCount;
        }
        clear_accumulation(s);
        ++s.frame_epoch;
        return false;
    }

    display_target = find_framebuffer_target(s, s.display_framebuffer);
    const bool display_ready = touched_display && display_target != nullptr && display_target->color;
    if (!display_ready) {
        if (++s.missed_display_intervals > 4u) {
            s.direct_present_ok = false;
            s.presented_framebuffer = 0u;
        }
    }

    const Dx12FramePresentDecision present_decision = decide_dx12_frame_present(direct_possible);
    direct_possible = present_decision.present_directly;
    const bool readback_now = s.readback_enabled && s.readback_buffer && display_ready &&
                              present_decision.map_full_frame_readback;
    if (readback_now) {
        transition(s.list.Get(), display_target->color.Get(), display_target->color_state,
                   D3D12_RESOURCE_STATE_COPY_SOURCE);
        display_target->color_state = D3D12_RESOURCE_STATE_COPY_SOURCE;
        D3D12_TEXTURE_COPY_LOCATION src{};
        src.pResource = display_target->color.Get();
        src.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
        D3D12_TEXTURE_COPY_LOCATION dst{};
        dst.pResource = s.readback_buffer.Get();
        dst.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
        dst.PlacedFootprint = s.readback_footprint;
        s.list->CopyTextureRegion(&dst, 0u, 0u, 0u, &src, nullptr);
        transition(s.list.Get(), display_target->color.Get(), display_target->color_state,
                   D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
        display_target->color_state = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;
    }

    bool recorded_present = false;
    if (direct_possible && display_ready) {
        std::string present_error;
        recorded_present = record_direct_present(s, *display_target, present_decision, present_error);
    }

    hr = s.list->Close();
    if (FAILED(hr)) {
        clear_accumulation(s);
        return false;
    }
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1u, lists);

    bool presented = false;
    if (recorded_present && s.swapchain) {
        const bool vsync = lcs_render_configuration().display.vsync;
        {
            const perf::Scope perf_scope(perf::kDxgiPresentUs);
            hr = s.swapchain->Present(vsync ? 1u : 0u,
                                      !vsync && s.swapchain_tearing ? DXGI_PRESENT_ALLOW_TEARING : 0u);
        }
        if (SUCCEEDED(hr)) {
            presented = true;
            s.direct_present_ok = true;
            s.presented_framebuffer = s.display_framebuffer;
            s.missed_display_intervals = 0u;
        } else {
            s.direct_present_ok = false;
            s.presented_framebuffer = 0u;
        }
    }

    frame.fence_value = s.next_fence++;
    hr = s.queue->Signal(s.fence.Get(), frame.fence_value);
    if (FAILED(hr)) {
        clear_accumulation(s);
        return false;
    }

    if (g_test_shot.pending && wait_for_fence(s, frame.fence_value, error)) write_test_shot();

    if (readback_now) {
        if (wait_for_fence(s, frame.fence_value, error)) {
            void *mapped = nullptr;
            const D3D12_RANGE read_range{0u, static_cast<SIZE_T>(s.readback_bytes)};
            hr = s.readback_buffer->Map(0u, &read_range, &mapped);
            if (SUCCEEDED(hr) && mapped != nullptr) {
                const auto *source = static_cast<const std::byte *>(mapped) + s.readback_footprint.Offset;
                const std::size_t row_bytes = static_cast<std::size_t>(s.target_width) * 4u;
                for (std::uint32_t y = 0u; y < s.target_height; ++y)
                    std::memcpy(s.frame_rgba.data() + static_cast<std::size_t>(y) * row_bytes,
                                source + static_cast<std::size_t>(y) * s.readback_footprint.Footprint.RowPitch,
                                row_bytes);
                const D3D12_RANGE no_write{0u, 0u};
                s.readback_buffer->Unmap(0u, &no_write);
            }
        }
    }

    clear_accumulation(s);
    s.frame_cursor = (s.frame_cursor + 1u) % kFrameCount;
    ++s.frame_epoch;
    return presented || readback_now;
}

bool ge_gpu_backend_supports_host_frame() noexcept { return state().enabled; }

bool ge_gpu_backend_present_host_frame() noexcept {
    Dx12GeState &s = state();
    if (!s.enabled || s.native_window == nullptr) return false;
    std::string error;
    if (!ensure_swapchain(s, error)) return false;
    Dx12FrameResources &frame = s.frames[s.frame_cursor];
    if (!wait_for_fence(s, frame.fence_value, error)) return false;
    frame.transient_resources.clear();
    frame.transient_placements.clear();
    if (FAILED(frame.allocator->Reset()) || FAILED(s.list->Reset(frame.allocator.Get(), nullptr))) return false;
    const UINT index = s.swapchain->GetCurrentBackBufferIndex();
    ID3D12Resource *backbuffer = s.backbuffers[index].Get();
    transition(s.list.Get(), backbuffer, D3D12_RESOURCE_STATE_PRESENT, D3D12_RESOURCE_STATE_RENDER_TARGET);
    const D3D12_CPU_DESCRIPTOR_HANDLE rtv = swap_rtv(s, index);
    s.list->OMSetRenderTargets(1u, &rtv, FALSE, nullptr);
    constexpr float black[4]{0.0f, 0.0f, 0.0f, 1.0f};
    s.list->ClearRenderTargetView(rtv, black, 0u, nullptr);
    imgui_menu_record(s.device.Get(), s.queue.Get(), s.list.Get(), s.native_window, kColorFormat, kFrameCount);
    if (test_shot_due()) record_test_shot(s, backbuffer);
    transition(s.list.Get(), backbuffer, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PRESENT);
    if (FAILED(s.list->Close())) return false;
    ID3D12CommandList *lists[]{s.list.Get()};
    s.queue->ExecuteCommandLists(1u, lists);
    const bool vsync = lcs_render_configuration().display.vsync;
    const HRESULT presented = s.swapchain->Present(vsync ? 1u : 0u, !vsync && s.swapchain_tearing ? DXGI_PRESENT_ALLOW_TEARING : 0u);
    frame.fence_value = s.next_fence++;
    if (FAILED(s.queue->Signal(s.fence.Get(), frame.fence_value))) return false;
    if (g_test_shot.pending && wait_for_fence(s, frame.fence_value, error)) write_test_shot();
    s.frame_cursor = (s.frame_cursor + 1u) % kFrameCount;
    return SUCCEEDED(presented);
}

bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte> destination) noexcept {
    const Dx12GeState &s = state();
    if (s.frame_rgba.empty() || destination.size() < s.frame_rgba.size()) return false;
    std::memcpy(destination.data(), s.frame_rgba.data(), s.frame_rgba.size());
    return true;
}

bool ge_gpu_backend_presents_directly() noexcept {
    const Dx12GeState &s = state();
    return s.enabled && s.swapchain != nullptr && s.direct_present_ok;
}
std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept {
    const Dx12GeState &s = state();
    return s.enabled && s.swapchain != nullptr && s.direct_present_ok
        ? s.presented_framebuffer : 0u;
}
std::uint32_t ge_gpu_backend_display_framebuffer() noexcept { return state().display_framebuffer; }
std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept {
    const Dx12GeState &s = state();
    return s.frame_rgba.empty() ? std::span<const std::byte>{}
                                : std::span<const std::byte>(s.frame_rgba.data(), s.frame_rgba.size());
}
bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte> destination) noexcept {
    return ge_gpu_backend_copy_game_frame_rgba(destination);
}
void ge_gpu_backend_mark_window_presented() noexcept {}
GeGpuBackendReport ge_gpu_backend_report() {
    const Dx12GeState &s = state();
    GeGpuBackendReport report{};
    report.offscreen_width = s.target_width;
    report.offscreen_height = s.target_height;
    return report;
}

#elif !defined(LCS_VULKAN_GE_BACKEND)

namespace {
struct Dx12StubState { std::uint32_t display_framebuffer{}; };
Dx12StubState &state() { static Dx12StubState s; return s; }
}
bool initialize_ge_gpu_backend(std::string &error) {
    auto &s = state(); s = {};
    error.clear(); return true;
}
void shutdown_ge_gpu_backend() noexcept { state() = {}; }
bool ge_gpu_backend_active() noexcept { return false; }
bool ge_gpu_backend_transfer_ready() noexcept { return false; }
bool ge_gpu_backend_graphics_ready() noexcept { return false; }
void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &) noexcept {}
void ge_gpu_backend_observe_camera(const std::array<float, 12> &,
                                   const std::array<float, 16> &,
                                   const std::array<float, 6> &,
                                   const std::array<float, 3> &,
                                   const GeGpuDrawDescriptor &,
                                   std::uint32_t) noexcept {}
bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &, std::span<const GeGpuVertex>) noexcept { return false; }
bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &) noexcept { return false; }
void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &) noexcept {}
bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &) noexcept { return false; }
bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &) noexcept { return false; }
GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(const GeGpuDrawDescriptor &) noexcept { return {}; }
void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &, float, float) noexcept {}
bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &) noexcept { return false; }
bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &) noexcept { return false; }
bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &, std::uint32_t, std::uint32_t, std::span<const std::byte>) noexcept { return false; }
bool ge_gpu_backend_upload_decoded_texture_chain(const GeGpuDrawDescriptor &, std::span<const GeGpuDecodedMipLevel>) noexcept { return false; }
bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &, std::uint32_t, std::uint32_t, std::uint32_t, std::vector<std::byte>) noexcept { return false; }
bool ge_gpu_backend_upload_shared_texture(const GeGpuDrawDescriptor &, std::uint32_t, std::uint32_t, std::shared_ptr<const std::vector<std::byte>>) noexcept { return false; }
bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte>) noexcept { return false; }
void ge_gpu_backend_accumulate_color_triangles(const GeGpuDrawDescriptor &, std::span<const GeGpuVertex>) noexcept {}
void ge_gpu_backend_accumulate_hardware_triangles(const GeGpuDrawDescriptor &, const GeGpuHardwareTransform &, std::span<const GeGpuVertex>, std::span<const std::uint32_t>) noexcept {}
bool ge_gpu_backend_accumulate_hardware_packed_0115(const GeGpuDrawDescriptor &, const GeGpuHardwareTransform &, std::span<const std::byte>, std::uint32_t, std::span<const std::uint32_t>) noexcept { return false; }
void ge_gpu_backend_set_native_window(void *) noexcept {}
void ge_gpu_backend_set_display_framebuffer(std::uint32_t address, std::uint32_t, std::uint32_t) noexcept { state().display_framebuffer = address & 0x001FFFF0u; }
void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept { width = 480u; height = 272u; }
bool ge_gpu_backend_finish_color_frame(std::uint64_t) noexcept { return false; }
bool ge_gpu_backend_supports_host_frame() noexcept { return false; }
bool ge_gpu_backend_present_host_frame() noexcept { return false; }
bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte>) noexcept { return false; }
bool ge_gpu_backend_presents_directly() noexcept { return false; }
std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept { return 0u; }
std::uint32_t ge_gpu_backend_display_framebuffer() noexcept { return state().display_framebuffer; }
std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept { return {}; }
bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte>) noexcept { return false; }
void ge_gpu_backend_mark_window_presented() noexcept {}
GeGpuBackendReport ge_gpu_backend_report() { return {}; }

#endif

}

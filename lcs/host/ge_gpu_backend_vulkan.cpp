#include "ge_gpu_backend.hpp"

#if defined(LCS_VULKAN_GE_BACKEND)

#include "lcs_display_menu.hpp"
#include "lcs_render_config.hpp"
#include "lcs_runtime_log.hpp"
#include "vulkan/ge_spv.hpp"

#include <vulkan/vulkan.h>

#include <SDL.h>
#include <SDL_vulkan.h>

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <limits>
#include <mutex>
#include <unordered_map>
#include <vector>

namespace lcs {
namespace {

constexpr std::uint32_t kReferenceWidth = 480u;
constexpr std::uint32_t kReferenceHeight = 272u;
constexpr std::size_t kGeometryUploadCapacity = 64u * 1024u * 1024u;
constexpr std::uint32_t kMaxDescriptorSets = 4096u;
constexpr std::uint32_t kUniformAlign = 256u;
constexpr std::uint32_t kMaxDraws = 32768u;

struct UploadVertex {
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
static_assert(sizeof(UploadVertex) == 36u);

struct DrawUniforms {
    float row0[4]{};
    float row1[4]{};
    float row2[4]{};
    float row3[4]{};
    float view_z[4]{};
    float uv[4]{1.0f, 1.0f, 0.0f, 0.0f};
    float fog[4]{};
    std::uint32_t control[4]{};
    float color_mul[4]{1.0f, 1.0f, 1.0f, 1.0f};
    float color_add[4]{};
    std::uint32_t pixel0[4]{};
    std::uint32_t pixel1[4]{};
};
static_assert(sizeof(DrawUniforms) == 192u);
static_assert(offsetof(DrawUniforms, control) == 112u);
static_assert(offsetof(DrawUniforms, pixel0) == 160u);

#pragma pack(push, 1)
struct Packed0115 {
    std::uint8_t u{};
    std::uint8_t v{};
    std::uint16_t color{};
    std::int16_t x{};
    std::int16_t y{};
    std::int16_t z{};
};
#pragma pack(pop)
static_assert(sizeof(Packed0115) == 10u);

struct Batch {
    GeGpuDrawDescriptor draw{};
    std::uint32_t first_vertex{};
    std::uint32_t vertex_count{};
    std::uint32_t first_index{};
    std::uint32_t index_count{};
    bool indexed{};
    std::uint32_t logical_draw_count{1u};
    bool hardware_transform{};
    GeGpuHardwareTransform transform{};
    bool framebuffer_feedback{};
    std::uint32_t feedback_address{};
};

struct GpuImage {
    VkImage image{};
    VkDeviceMemory memory{};
    VkImageView view{};
    VkDescriptorSet set{};
    VkSampler sampler{};
    VkImageLayout layout{VK_IMAGE_LAYOUT_UNDEFINED};
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint32_t mips{1u};
    std::unordered_map<std::uint64_t, VkDescriptorSet> draw_sets{};
};

struct Target {
    std::uint32_t address{};
    std::uint32_t logical_width{kReferenceWidth};
    std::uint32_t logical_height{kReferenceHeight};
    GpuImage color{};
    GpuImage snapshot{};
    VkImage depth{};
    VkDeviceMemory depth_memory{};
    VkImageView depth_view{};
    VkFramebuffer framebuffer{};
    VkImageLayout depth_layout{VK_IMAGE_LAYOUT_UNDEFINED};
    std::uint64_t last_render_epoch{};
    bool created{};
};

struct Texture {
    GeGpuDrawDescriptor descriptor{};
    GpuImage gpu{};
    std::vector<std::byte> rgba8;
    std::uint32_t mip_levels{1u};
    bool dirty{};
    std::uint64_t signature_epoch{};
    std::uint64_t last_used_epoch{};
};

struct Staging {
    VkBuffer buffer{};
    VkDeviceMemory memory{};
};

struct VulkanState {
    std::recursive_mutex mutex;
    GeGpuBackendReport report{};
    bool enabled{};
    VkInstance instance{};
    VkDebugUtilsMessengerEXT debug_messenger{};
    VkPhysicalDevice physical{};
    VkDevice device{};
    VkQueue queue{};
    std::uint32_t queue_family{0u};
    VkCommandPool pool{};
    VkCommandBuffer command{};
    VkRenderPass render_pass{};
    VkPipelineLayout pipeline_layout{};
    VkDescriptorSetLayout set_layout{};
    VkDescriptorPool descriptor_pool{};
    std::uint32_t descriptor_sets_live{};
    VkShaderModule vertex_shader{};
    VkShaderModule fragment_shader{};
    VkBuffer geometry{};
    VkDeviceMemory geometry_memory{};
    void *geometry_mapped{};
    VkBuffer uniforms{};
    VkDeviceMemory uniform_memory{};
    void *uniform_mapped{};
    VkBuffer readback{};
    VkDeviceMemory readback_memory{};
    void *readback_mapped{};
    Texture white{};
    std::unordered_map<std::uint64_t, VkPipeline> pipelines{};
    std::unordered_map<std::uint64_t, VkSampler> sampler_cache{};
    bool sampler_anisotropy{};
    float max_sampler_anisotropy{1.0f};
    float max_sampler_lod_bias{2.0f};
    std::unordered_map<std::uint64_t, Texture> textures{};
    std::unordered_map<std::uint32_t, Target> targets{};
    std::vector<Staging> staging;
    std::vector<UploadVertex> vertices;
    std::vector<std::uint32_t> indices;
    std::vector<Batch> batches;
    std::vector<std::byte> frame_rgba;
    std::vector<std::byte> last_texture_rgba;
    std::uint32_t uniform_align{kUniformAlign};
    std::uint32_t target_width{kReferenceWidth};
    std::uint32_t target_height{kReferenceHeight};
    std::uint32_t display_framebuffer{};
    std::uint32_t display_logical_width{kReferenceWidth};
    std::uint32_t display_logical_height{kReferenceHeight};
    std::uint32_t last_registered_framebuffer_target{0xFFFFFFFFu};
    std::uint64_t frame_epoch{1u};
    bool pass_open{};
    Target *current_target{};
    // Previous submit still owns the command buffer, geometry, and readback.
    bool submit_pending{};
    bool pending_readback{};
    std::size_t pending_readback_bytes{};
    // Copied pixels the present finish has not shown yet.
    bool readback_latched{};
    SDL_Window *window{};
    VkSurfaceKHR surface{};
    VkSwapchainKHR swapchain{};
    VkFormat swap_format{VK_FORMAT_UNDEFINED};
    VkPresentModeKHR swap_present_mode{VK_PRESENT_MODE_FIFO_KHR};
    std::uint32_t swap_width{};
    std::uint32_t swap_height{};
    std::vector<VkImage> swap_images;
    std::vector<VkImageView> swap_views;
    std::vector<VkFramebuffer> swap_framebuffers;
    std::vector<VkPresentModeKHR> swap_present_modes;
    VkRenderPass present_pass{};
    VkPipeline present_pipeline{};
    VkPipelineLayout present_layout{};
    VkDescriptorSetLayout present_set_layout{};
    VkDescriptorPool present_pool{};
    std::array<VkDescriptorSet, 4> present_sets{};
    VkSampler game_sampler{};
    VkSampler overlay_sampler{};
    bool game_sampler_linear{};
    VkShaderModule present_vertex_shader{};
    VkShaderModule present_fragment_shader{};
    VkSemaphore acquire_semaphore{};
    // One per swapchain image. The next acquire of that image releases it.
    std::vector<VkSemaphore> present_semaphores;
    GpuImage fps_overlay{};
    GpuImage settings_overlay{};
    GpuImage guest_image{};
    VkBuffer present_staging{};
    VkDeviceMemory present_staging_memory{};
    void *present_staging_mapped{};
    VkDeviceSize present_staging_bytes{};
    std::uint32_t present_image_index{};
    bool present_recorded{};
    bool direct_present_ok{};
    bool swapchain_extension{};
    bool swapchain_dirty{};
    bool present_lost{};
};

VulkanState &state() {
    static VulkanState s;
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
    return key;
}

std::uint32_t find_memory_type(VulkanState &s, std::uint32_t bits, VkMemoryPropertyFlags flags) {
    VkPhysicalDeviceMemoryProperties properties{};
    vkGetPhysicalDeviceMemoryProperties(s.physical, &properties);
    for (std::uint32_t index = 0u; index < properties.memoryTypeCount; ++index) {
        if ((bits & (1u << index)) != 0u &&
            (properties.memoryTypes[index].propertyFlags & flags) == flags)
            return index;
    }
    return 0xFFFFFFFFu;
}

bool create_buffer(VulkanState &s, VkDeviceSize size, VkBufferUsageFlags usage,
                   VkMemoryPropertyFlags properties, VkBuffer &buffer, VkDeviceMemory &memory,
                   void **mapped, std::string &error, bool cpu_reads = false) {
    VkBufferCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    info.size = size;
    info.usage = usage;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    if (vkCreateBuffer(s.device, &info, nullptr, &buffer) != VK_SUCCESS) {
        error = "vkCreateBuffer failed";
        return false;
    }
    VkMemoryRequirements requirements{};
    vkGetBufferMemoryRequirements(s.device, buffer, &requirements);
    VkMemoryAllocateInfo alloc{};
    alloc.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    alloc.allocationSize = requirements.size;
    // The first host-visible coherent type is write-combined. Reading it is slow.
    alloc.memoryTypeIndex = cpu_reads ? find_memory_type(s, requirements.memoryTypeBits,
                                                         properties | VK_MEMORY_PROPERTY_HOST_CACHED_BIT)
                                      : 0xFFFFFFFFu;
    if (alloc.memoryTypeIndex == 0xFFFFFFFFu)
        alloc.memoryTypeIndex = find_memory_type(s, requirements.memoryTypeBits, properties);
    if (alloc.memoryTypeIndex == 0xFFFFFFFFu ||
        vkAllocateMemory(s.device, &alloc, nullptr, &memory) != VK_SUCCESS ||
        vkBindBufferMemory(s.device, buffer, memory, 0) != VK_SUCCESS) {
        error = "Vulkan buffer memory allocation failed";
        return false;
    }
    if (mapped != nullptr &&
        vkMapMemory(s.device, memory, 0, size, 0, mapped) != VK_SUCCESS) {
        error = "vkMapMemory failed";
        return false;
    }
    return true;
}

void transition_image(VkCommandBuffer command, VkImage image, VkImageLayout &current,
                      VkImageLayout next, VkImageAspectFlags aspect, std::uint32_t levels) {
    if (image == VK_NULL_HANDLE || current == next) return;
    VkImageMemoryBarrier barrier{};
    barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.oldLayout = current;
    barrier.newLayout = next;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = image;
    barrier.subresourceRange.aspectMask = aspect;
    barrier.subresourceRange.levelCount = levels;
    barrier.subresourceRange.layerCount = 1u;
    barrier.srcAccessMask = current == VK_IMAGE_LAYOUT_UNDEFINED ? 0u
        : static_cast<VkAccessFlags>(VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT);
    barrier.dstAccessMask = VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT;
    vkCmdPipelineBarrier(command, VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                         VK_PIPELINE_STAGE_ALL_COMMANDS_BIT, 0, 0, nullptr, 0, nullptr, 1, &barrier);
    current = next;
}

bool create_image(VulkanState &s, GpuImage &image, std::uint32_t width, std::uint32_t height,
                  std::uint32_t mips, VkFormat format, VkImageUsageFlags usage,
                  VkImageAspectFlags aspect, std::string &error) {
    image.width = width;
    image.height = height;
    image.mips = mips;
    VkImageCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    info.imageType = VK_IMAGE_TYPE_2D;
    info.format = format;
    info.extent = {width, height, 1u};
    info.mipLevels = mips;
    info.arrayLayers = 1u;
    info.samples = VK_SAMPLE_COUNT_1_BIT;
    info.tiling = VK_IMAGE_TILING_OPTIMAL;
    info.usage = usage;
    info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    if (vkCreateImage(s.device, &info, nullptr, &image.image) != VK_SUCCESS) {
        error = "vkCreateImage failed";
        return false;
    }
    VkMemoryRequirements requirements{};
    vkGetImageMemoryRequirements(s.device, image.image, &requirements);
    VkMemoryAllocateInfo alloc{};
    alloc.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    alloc.allocationSize = requirements.size;
    alloc.memoryTypeIndex = find_memory_type(s, requirements.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (alloc.memoryTypeIndex == 0xFFFFFFFFu)
        alloc.memoryTypeIndex = find_memory_type(s, requirements.memoryTypeBits, 0);
    if (alloc.memoryTypeIndex == 0xFFFFFFFFu ||
        vkAllocateMemory(s.device, &alloc, nullptr, &image.memory) != VK_SUCCESS ||
        vkBindImageMemory(s.device, image.image, image.memory, 0) != VK_SUCCESS) {
        error = "Vulkan image memory allocation failed";
        return false;
    }
    VkImageViewCreateInfo view{};
    view.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    view.image = image.image;
    view.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view.format = format;
    view.subresourceRange.aspectMask = aspect;
    view.subresourceRange.levelCount = mips;
    view.subresourceRange.layerCount = 1u;
    if (vkCreateImageView(s.device, &view, nullptr, &image.view) != VK_SUCCESS) {
        error = "vkCreateImageView failed";
        return false;
    }
    image.layout = VK_IMAGE_LAYOUT_UNDEFINED;
    return true;
}

void destroy_image(VulkanState &s, GpuImage &image) noexcept {
    if (s.device != VK_NULL_HANDLE) {
        if (s.descriptor_pool != VK_NULL_HANDLE) {
            if (image.set != VK_NULL_HANDLE) {
                vkFreeDescriptorSets(s.device, s.descriptor_pool, 1u, &image.set);
                if (s.descriptor_sets_live > 0u) --s.descriptor_sets_live;
            }
            for (auto &entry : image.draw_sets) {
                if (entry.second == VK_NULL_HANDLE) continue;
                vkFreeDescriptorSets(s.device, s.descriptor_pool, 1u, &entry.second);
                if (s.descriptor_sets_live > 0u) --s.descriptor_sets_live;
            }
        }
        if (image.view) vkDestroyImageView(s.device, image.view, nullptr);
        if (image.image) vkDestroyImage(s.device, image.image, nullptr);
        if (image.memory) vkFreeMemory(s.device, image.memory, nullptr);
        if (image.sampler) vkDestroySampler(s.device, image.sampler, nullptr);
    }
    image = {};
}

float sampler_lod_bias(const VulkanState &s, const GeGpuDrawDescriptor &draw) noexcept {
    const float bias = static_cast<float>(draw.texture_level_offset16) / 16.0f + rendering_texture_lod_bias();
    const float limit = s.max_sampler_lod_bias > 0.0f ? s.max_sampler_lod_bias : 2.0f;
    return std::clamp(bias, -limit, limit);
}

VkSampler make_sampler(VulkanState &s, const GeGpuDrawDescriptor &draw) {
    VkSamplerCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    info.magFilter = draw.texture_mag_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.minFilter = draw.texture_min_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.mipmapMode = draw.texture_mipmap_enabled && draw.texture_mipmap_linear
        ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    info.addressModeU = draw.texture_clamp_u ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE
                                             : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.addressModeV = draw.texture_clamp_v ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE
                                             : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.mipLodBias = sampler_lod_bias(s, draw);
    info.maxLod = 16.0f;
    VkSampler sampler{};
    if (vkCreateSampler(s.device, &info, nullptr, &sampler) != VK_SUCCESS) return VK_NULL_HANDLE;
    ++s.report.texture_samplers_created;
    return sampler;
}

void evict_stale_textures(VulkanState &s, std::uint32_t slots_needed) {
    if (s.descriptor_sets_live + slots_needed <= kMaxDescriptorSets) return;
    std::vector<std::pair<std::uint64_t, std::uint64_t>> stale;
    stale.reserve(s.textures.size());
    for (const auto &entry : s.textures) {
        const Texture &texture = entry.second;
        if (texture.dirty || texture.gpu.set == VK_NULL_HANDLE ||
            texture.last_used_epoch >= s.frame_epoch)
            continue;
        stale.emplace_back(texture.last_used_epoch, entry.first);
    }
    std::sort(stale.begin(), stale.end());
    for (const auto &item : stale) {
        if (s.descriptor_sets_live + slots_needed <= kMaxDescriptorSets) break;
        const auto found = s.textures.find(item.second);
        if (found == s.textures.end()) continue;
        destroy_image(s, found->second.gpu);
        s.textures.erase(found);
    }
}

VkDescriptorSet allocate_combined_set(VulkanState &s, VkImageView view, VkSampler sampler,
                                      std::string &error) {
    if (view == VK_NULL_HANDLE || sampler == VK_NULL_HANDLE) return VK_NULL_HANDLE;
    evict_stale_textures(s, 1u);
    VkDescriptorSet set = VK_NULL_HANDLE;
    VkDescriptorSetAllocateInfo alloc{};
    alloc.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    alloc.descriptorPool = s.descriptor_pool;
    alloc.descriptorSetCount = 1u;
    alloc.pSetLayouts = &s.set_layout;
    if (vkAllocateDescriptorSets(s.device, &alloc, &set) != VK_SUCCESS) {
        error = "vkAllocateDescriptorSets failed";
        return VK_NULL_HANDLE;
    }
    VkDescriptorBufferInfo uniform{};
    uniform.buffer = s.uniforms;
    uniform.range = sizeof(DrawUniforms);
    VkDescriptorImageInfo sampled{};
    sampled.sampler = sampler;
    sampled.imageView = view;
    sampled.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    VkWriteDescriptorSet writes[2]{};
    writes[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    writes[0].dstSet = set;
    writes[0].dstBinding = 0u;
    writes[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
    writes[0].descriptorCount = 1u;
    writes[0].pBufferInfo = &uniform;
    writes[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    writes[1].dstSet = set;
    writes[1].dstBinding = 1u;
    writes[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    writes[1].descriptorCount = 1u;
    writes[1].pImageInfo = &sampled;
    vkUpdateDescriptorSets(s.device, 2u, writes, 0u, nullptr);
    ++s.descriptor_sets_live;
    ++s.report.texture_descriptor_sets_allocated;
    return set;
}

bool write_descriptor(VulkanState &s, GpuImage &image, std::string &error) {
    if (image.set != VK_NULL_HANDLE) return true;
    image.set = allocate_combined_set(
        s, image.view, image.sampler != VK_NULL_HANDLE ? image.sampler : s.white.gpu.sampler, error);
    return image.set != VK_NULL_HANDLE;
}

std::uint64_t draw_sampler_key(const GeGpuDrawDescriptor &draw) noexcept {
    const std::uint32_t anisotropy =
        std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    std::uint64_t key = draw.texture_min_linear ? 1u : 0u;
    key = hash_mix(key, draw.texture_mag_linear ? 1u : 0u);
    key = hash_mix(key, (draw.texture_mipmap_enabled && draw.texture_mipmap_linear) ? 1u : 0u);
    key = hash_mix(key, draw.texture_clamp_u ? 1u : 0u);
    key = hash_mix(key, draw.texture_clamp_v ? 1u : 0u);
    key = hash_mix(key, draw.texture_level_mode);
    key = hash_mix(key, static_cast<std::uint32_t>(draw.texture_level_offset16));
    key = hash_mix(key, draw.texture_selected_level);
    key = hash_mix(key, draw.texture_max_level);
    key = hash_mix(key, anisotropy);
    return key;
}

VkSampler sampler_for(VulkanState &s, const GeGpuDrawDescriptor &draw) {
    const std::uint64_t key = draw_sampler_key(draw);
    if (const auto found = s.sampler_cache.find(key); found != s.sampler_cache.end())
        return found->second;
    const std::uint32_t anisotropy =
        std::clamp(lcs_render_configuration().rendering.anisotropic_filtering, 1u, 16u);
    const bool mip_linear = draw.texture_mipmap_enabled && draw.texture_mipmap_linear;
    VkSamplerCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    info.magFilter = draw.texture_mag_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.minFilter = draw.texture_min_linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.mipmapMode = mip_linear ? VK_SAMPLER_MIPMAP_MODE_LINEAR : VK_SAMPLER_MIPMAP_MODE_NEAREST;
    info.addressModeU = draw.texture_clamp_u ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE
                                             : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.addressModeV = draw.texture_clamp_v ? VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE
                                             : VK_SAMPLER_ADDRESS_MODE_REPEAT;
    info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    info.mipLodBias = sampler_lod_bias(s, draw);
    info.minLod = 0.0f;
    info.maxLod = static_cast<float>(std::max<std::uint32_t>(1u, draw.texture_max_level + 1u));
    if (draw.texture_level_mode == 1u) {
        const float level = static_cast<float>(draw.texture_selected_level);
        info.minLod = level;
        info.maxLod = level;
    }
    if (s.sampler_anisotropy && anisotropy > 1u && draw.texture_mipmap_enabled) {
        info.anisotropyEnable = VK_TRUE;
        info.maxAnisotropy = std::min(static_cast<float>(anisotropy), s.max_sampler_anisotropy);
    }
    VkSampler sampler = VK_NULL_HANDLE;
    if (vkCreateSampler(s.device, &info, nullptr, &sampler) != VK_SUCCESS) return VK_NULL_HANDLE;
    s.sampler_cache.emplace(key, sampler);
    ++s.report.texture_samplers_created;
    return sampler;
}

VkDescriptorSet descriptor_for_draw(VulkanState &s, GpuImage &image, const GeGpuDrawDescriptor &draw,
                                    std::string &error) {
    if (image.view == VK_NULL_HANDLE) return VK_NULL_HANDLE;
    const std::uint64_t key = draw_sampler_key(draw);
    if (const auto found = image.draw_sets.find(key); found != image.draw_sets.end())
        return found->second;
    const VkSampler sampler = sampler_for(s, draw);
    const VkDescriptorSet set = allocate_combined_set(s, image.view, sampler, error);
    if (set == VK_NULL_HANDLE) return VK_NULL_HANDLE;
    image.draw_sets.emplace(key, set);
    return set;
}

Target *find_target(VulkanState &s, std::uint32_t address) {
    address &= 0x001FFFF0u;
    const auto found = s.targets.find(address);
    return found == s.targets.end() ? nullptr : &found->second;
}

bool ensure_target(VulkanState &s, std::uint32_t address, std::string &error) {
    address &= 0x001FFFF0u;
    if (find_target(s, address) != nullptr) return true;
    Target target{};
    target.address = address;
    target.logical_width = kReferenceWidth;
    target.logical_height = kReferenceHeight;
    if (!create_image(s, target.color, s.target_width, s.target_height, 1u,
                      VK_FORMAT_R8G8B8A8_UNORM,
                      VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT |
                          VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_COLOR_BIT, error))
        return false;
    VkImageCreateInfo depth_info{};
    depth_info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    depth_info.imageType = VK_IMAGE_TYPE_2D;
    depth_info.format = VK_FORMAT_D32_SFLOAT;
    depth_info.extent = {s.target_width, s.target_height, 1u};
    depth_info.mipLevels = 1u;
    depth_info.arrayLayers = 1u;
    depth_info.samples = VK_SAMPLE_COUNT_1_BIT;
    depth_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    depth_info.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    if (vkCreateImage(s.device, &depth_info, nullptr, &target.depth) != VK_SUCCESS) {
        error = "vkCreateImage(depth) failed";
        return false;
    }
    VkMemoryRequirements requirements{};
    vkGetImageMemoryRequirements(s.device, target.depth, &requirements);
    VkMemoryAllocateInfo alloc{};
    alloc.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    alloc.allocationSize = requirements.size;
    alloc.memoryTypeIndex = find_memory_type(s, requirements.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (alloc.memoryTypeIndex == 0xFFFFFFFFu ||
        vkAllocateMemory(s.device, &alloc, nullptr, &target.depth_memory) != VK_SUCCESS ||
        vkBindImageMemory(s.device, target.depth, target.depth_memory, 0) != VK_SUCCESS) {
        error = "Vulkan depth allocation failed";
        return false;
    }
    VkImageViewCreateInfo view{};
    view.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    view.image = target.depth;
    view.viewType = VK_IMAGE_VIEW_TYPE_2D;
    view.format = VK_FORMAT_D32_SFLOAT;
    view.subresourceRange.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
    view.subresourceRange.levelCount = 1u;
    view.subresourceRange.layerCount = 1u;
    if (vkCreateImageView(s.device, &view, nullptr, &target.depth_view) != VK_SUCCESS) {
        error = "vkCreateImageView(depth) failed";
        return false;
    }
    VkImageView attachments[]{target.color.view, target.depth_view};
    VkFramebufferCreateInfo framebuffer{};
    framebuffer.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    framebuffer.renderPass = s.render_pass;
    framebuffer.attachmentCount = 2u;
    framebuffer.pAttachments = attachments;
    framebuffer.width = s.target_width;
    framebuffer.height = s.target_height;
    framebuffer.layers = 1u;
    if (vkCreateFramebuffer(s.device, &framebuffer, nullptr, &target.framebuffer) != VK_SUCCESS) {
        error = "vkCreateFramebuffer failed";
        return false;
    }
    target.created = true;
    s.targets.emplace(address, std::move(target));
    ++s.report.framebuffer_targets_observed;
    ++s.report.native_framebuffer_targets;
    s.report.depth_image_created = true;
    s.report.depth_image_memory_bound = true;
    s.report.depth_image_view_created = true;
    s.report.depth_attachment_active = true;
    s.report.offscreen_image_created = true;
    s.report.offscreen_image_memory_bound = true;
    s.report.offscreen_image_view_created = true;
    s.report.framebuffer_created = true;
    return true;
}

void note_logical_size(VulkanState &s, std::uint32_t address, std::uint32_t width, std::uint32_t height) {
    Target *target = find_target(s, address);
    if (target == nullptr) return;
    if (width != 0u) target->logical_width = width;
    if (height != 0u) target->logical_height = height;
}

UploadVertex make_upload_vertex(const GeGpuVertex &source) noexcept {
    return {source.x, source.y, source.z, source.w, source.rgba, source.u, source.v,
            source.fog_factor, source.q};
}

float expand5(std::uint32_t value) noexcept {
    value &= 31u;
    const std::uint32_t expanded = (value << 3u) | (value >> 2u);
    return static_cast<float>(expanded) * (1.0f / 255.0f);
}

UploadVertex decode_packed(const Packed0115 &packed) noexcept {
    UploadVertex vertex{};
    vertex.x = static_cast<float>(packed.x) * (1.0f / 32768.0f);
    vertex.y = static_cast<float>(packed.y) * (1.0f / 32768.0f);
    vertex.z = static_cast<float>(packed.z) * (1.0f / 32768.0f);
    vertex.w = 1.0f;
    vertex.u = static_cast<float>(packed.u) * (1.0f / 128.0f);
    vertex.v = static_cast<float>(packed.v) * (1.0f / 128.0f);
    vertex.q = 1.0f;
    const std::uint32_t r = static_cast<std::uint32_t>(std::lround(expand5(packed.color) * 255.0f));
    const std::uint32_t g = static_cast<std::uint32_t>(std::lround(expand5(packed.color >> 5u) * 255.0f));
    const std::uint32_t b = static_cast<std::uint32_t>(std::lround(expand5(packed.color >> 10u) * 255.0f));
    const std::uint32_t a = (packed.color & 0x8000u) != 0u ? 255u : 0u;
    vertex.rgba = r | (g << 8u) | (b << 16u) | (a << 24u);
    return vertex;
}

std::array<float, 4> scaled(const std::array<float, 4> &a, float sa,
                            const std::array<float, 4> &b, float sb) noexcept {
    return {a[0] * sa + b[0] * sb, a[1] * sa + b[1] * sb, a[2] * sa + b[2] * sb, a[3] * sa + b[3] * sb};
}

DrawUniforms make_uniforms(const Batch &batch, std::uint32_t logical_width, std::uint32_t logical_height,
                           bool sampled) noexcept {
    DrawUniforms constants{};
    logical_width = std::max<std::uint32_t>(1u, logical_width);
    logical_height = std::max<std::uint32_t>(1u, logical_height);
    if (!batch.hardware_transform) {
        constants.uv[0] = 2.0f / static_cast<float>(logical_width);
        constants.uv[1] = 2.0f / static_cast<float>(logical_height);
        constants.uv[2] = 1.0f / 65535.0f;
        constants.control[0] = 2u;
    } else {
        const GeGpuHardwareTransform &hw = batch.transform;
        const auto row = [&](std::size_t r) {
            return std::array<float, 4>{hw.model_to_clip[r], hw.model_to_clip[4u + r],
                                        hw.model_to_clip[8u + r], hw.model_to_clip[12u + r]};
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
        const auto row_x = scaled(clip_x, x_a, clip_w, x_b);
        const auto row_y = scaled(clip_y, -y_a, clip_w, -y_b);
        const auto row_z = scaled(clip_z, hw.viewport_scale_z * inv_depth, clip_w,
                                  hw.viewport_center_z * inv_depth);
        std::copy(row_x.begin(), row_x.end(), constants.row0);
        std::copy(row_y.begin(), row_y.end(), constants.row1);
        std::copy(row_z.begin(), row_z.end(), constants.row2);
        std::copy(clip_w.begin(), clip_w.end(), constants.row3);
        std::copy(hw.model_to_view_z.begin(), hw.model_to_view_z.end(), constants.view_z);
        constants.uv[0] = hw.uv_scale_u;
        constants.uv[1] = hw.uv_scale_v;
        constants.uv[2] = hw.uv_offset_u;
        constants.uv[3] = hw.uv_offset_v;
        constants.fog[0] = hw.fog_end;
        constants.fog[1] = hw.fog_slope;
        constants.control[0] = 1u;
        constants.control[1] = hw.depth_clip_enabled ? 1u : 0u;
        constants.control[2] = hw.vertex_color_affine ? 1u : 0u;
        std::copy(hw.vertex_color_mul.begin(), hw.vertex_color_mul.end(), constants.color_mul);
        std::copy(hw.vertex_color_add.begin(), hw.vertex_color_add.end(), constants.color_add);
    }
    const GeGpuDrawDescriptor &draw = batch.draw;
    constants.pixel0[0] = static_cast<std::uint32_t>(draw.alpha_test_enabled ? 1u : 0u) |
                          ((draw.alpha_function & 7u) << 8u) |
                          ((draw.alpha_reference & 0xFFu) << 16u) |
                          ((draw.alpha_mask & 0xFFu) << 24u);
    constants.pixel0[1] = (draw.texture_function & 0xFFu) |
                          (static_cast<std::uint32_t>(draw.texture_use_alpha ? 1u : 0u) << 8u) |
                          (static_cast<std::uint32_t>(draw.texture_double_color ? 1u : 0u) << 16u) |
                          (static_cast<std::uint32_t>(sampled ? 1u : 0u) << 24u);
    constants.pixel0[2] = draw.texture_env & 0x00FFFFFFu;
    constants.pixel0[3] = (draw.fog_color & 0x00FFFFFFu) |
                          (static_cast<std::uint32_t>(draw.fog_enabled ? 0xFFu : 0u) << 24u);
    constants.pixel1[0] = draw.framebuffer_format & 3u;
    return constants;
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

VkColorComponentFlags color_write_mask(const GeGpuDrawDescriptor &draw) noexcept {
    VkColorComponentFlags mask = 0;
    for (std::uint32_t channel = 0u; channel < 4u; ++channel) {
        const std::uint32_t byte = (draw.color_write_mask >> (channel * 8u)) & 0xFFu;
        if (byte != 0xFFu) mask |= static_cast<VkColorComponentFlags>(1u << channel);
    }
    return mask;
}

VkCompareOp depth_compare(std::uint32_t function) noexcept {
    switch (function & 7u) {
    case 0u: return VK_COMPARE_OP_NEVER;
    case 1u: return VK_COMPARE_OP_ALWAYS;
    case 2u: return VK_COMPARE_OP_EQUAL;
    case 3u: return VK_COMPARE_OP_NOT_EQUAL;
    case 4u: return VK_COMPARE_OP_LESS;
    case 5u: return VK_COMPARE_OP_LESS_OR_EQUAL;
    case 6u: return VK_COMPARE_OP_GREATER;
    case 7u: return VK_COMPARE_OP_GREATER_OR_EQUAL;
    }
    return VK_COMPARE_OP_ALWAYS;
}

std::uint64_t pipeline_key(const GeGpuDrawDescriptor &draw, bool strip, bool cull, bool ccw) noexcept {
    std::uint64_t key = static_cast<std::uint64_t>(draw.depth_test_enabled ? 1u : 0u);
    key |= static_cast<std::uint64_t>(draw.depth_write_enabled ? 1u : 0u) << 1u;
    key |= static_cast<std::uint64_t>(draw.depth_function & 7u) << 2u;
    key |= static_cast<std::uint64_t>(blend_variant(draw) & 7u) << 5u;
    key |= static_cast<std::uint64_t>(color_write_mask(draw) & 0xFu) << 8u;
    key |= static_cast<std::uint64_t>(strip ? 1u : 0u) << 16u;
    key |= static_cast<std::uint64_t>(cull ? 1u : 0u) << 17u;
    key |= static_cast<std::uint64_t>(ccw ? 1u : 0u) << 18u;
    return key;
}

VkPipeline pipeline_for(VulkanState &s, const GeGpuDrawDescriptor &draw, bool strip, bool cull,
                        bool ccw, std::string &error) {
    const std::uint64_t key = pipeline_key(draw, strip, cull, ccw);
    if (const auto found = s.pipelines.find(key); found != s.pipelines.end()) return found->second;
    VkPipelineShaderStageCreateInfo stages[2]{};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = s.vertex_shader;
    stages[0].pName = "main";
    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = s.fragment_shader;
    stages[1].pName = "main";
    VkVertexInputBindingDescription binding{};
    binding.binding = 0u;
    binding.stride = sizeof(UploadVertex);
    binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
    VkVertexInputAttributeDescription attributes[5]{};
    attributes[0] = {0u, 0u, VK_FORMAT_R32G32B32A32_SFLOAT, 0u};
    attributes[1] = {1u, 0u, VK_FORMAT_R8G8B8A8_UNORM, 16u};
    attributes[2] = {2u, 0u, VK_FORMAT_R32G32_SFLOAT, 20u};
    attributes[3] = {3u, 0u, VK_FORMAT_R32_SFLOAT, offsetof(UploadVertex, q)};
    attributes[4] = {4u, 0u, VK_FORMAT_R32_SFLOAT, offsetof(UploadVertex, fog_factor)};
    VkPipelineVertexInputStateCreateInfo vertex{};
    vertex.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    vertex.vertexBindingDescriptionCount = 1u;
    vertex.pVertexBindingDescriptions = &binding;
    vertex.vertexAttributeDescriptionCount = 5u;
    vertex.pVertexAttributeDescriptions = attributes;
    VkPipelineInputAssemblyStateCreateInfo assembly{};
    assembly.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    assembly.topology = strip ? VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP : VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo viewport{};
    viewport.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewport.viewportCount = 1u;
    viewport.scissorCount = 1u;
    VkPipelineRasterizationStateCreateInfo raster{};
    raster.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    raster.cullMode = cull ? VK_CULL_MODE_BACK_BIT : VK_CULL_MODE_NONE;
    // Y is negated in the vertex shader, which reverses D3D winding.
    raster.frontFace = ccw ? VK_FRONT_FACE_COUNTER_CLOCKWISE : VK_FRONT_FACE_CLOCKWISE;
    raster.lineWidth = 1.0f;
    VkPipelineMultisampleStateCreateInfo multisample{};
    multisample.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo depth{};
    depth.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    depth.depthTestEnable = draw.depth_test_enabled ? VK_TRUE : VK_FALSE;
    depth.depthWriteEnable = draw.depth_write_enabled ? VK_TRUE : VK_FALSE;
    depth.depthCompareOp = draw.depth_test_enabled ? depth_compare(draw.depth_function) : VK_COMPARE_OP_ALWAYS;
    VkPipelineColorBlendAttachmentState blend{};
    blend.colorWriteMask = color_write_mask(draw);
    const std::size_t variant = blend_variant(draw);
    blend.blendEnable = (variant != 0u && variant != 2u) ? VK_TRUE : VK_FALSE;
    blend.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstColorBlendFactor = VK_BLEND_FACTOR_ZERO;
    blend.colorBlendOp = VK_BLEND_OP_ADD;
    blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    blend.alphaBlendOp = VK_BLEND_OP_ADD;
    if (variant == 1u) {
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    } else if (variant == 3u || variant == 5u) {
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE;
        blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
        if (variant == 5u) blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    } else if (variant == 4u) {
        blend.srcColorBlendFactor = VK_BLEND_FACTOR_CONSTANT_COLOR;
        blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
    }
    VkPipelineColorBlendStateCreateInfo blending{};
    blending.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    blending.attachmentCount = 1u;
    blending.pAttachments = &blend;
    VkDynamicState dynamics[]{VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR,
                              VK_DYNAMIC_STATE_BLEND_CONSTANTS};
    VkPipelineDynamicStateCreateInfo dynamic{};
    dynamic.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamic.dynamicStateCount = 3u;
    dynamic.pDynamicStates = dynamics;
    VkGraphicsPipelineCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    info.stageCount = 2u;
    info.pStages = stages;
    info.pVertexInputState = &vertex;
    info.pInputAssemblyState = &assembly;
    info.pViewportState = &viewport;
    info.pRasterizationState = &raster;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &depth;
    info.pColorBlendState = &blending;
    info.pDynamicState = &dynamic;
    info.layout = s.pipeline_layout;
    info.renderPass = s.render_pass;
    VkPipeline pipeline{};
    if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1u, &info, nullptr, &pipeline) != VK_SUCCESS) {
        error = "vkCreateGraphicsPipelines failed";
        return VK_NULL_HANDLE;
    }
    s.pipelines.emplace(key, pipeline);
    s.report.unique_pipeline_keys = s.pipelines.size();
    s.report.graphics_pipeline_created = true;
    if (draw.depth_test_enabled) ++s.report.depth_pipeline_variants_created;
    if (variant != 0u) ++s.report.blend_pipeline_variants_created;
    return pipeline;
}

void clear_image(VkCommandBuffer command, VkImage image, VkImageLayout &layout, bool depth) {
    transition_image(command, image, layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                     depth ? VK_IMAGE_ASPECT_DEPTH_BIT : VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    VkImageSubresourceRange range{};
    range.aspectMask = depth ? VK_IMAGE_ASPECT_DEPTH_BIT : VK_IMAGE_ASPECT_COLOR_BIT;
    range.levelCount = 1u;
    range.layerCount = 1u;
    if (depth) {
        VkClearDepthStencilValue value{};
        value.depth = 0.0f;
        vkCmdClearDepthStencilImage(command, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &value, 1u, &range);
    } else {
        VkClearColorValue value{};
        value.float32[3] = 1.0f;
        vkCmdClearColorImage(command, image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &value, 1u, &range);
    }
}

void end_pass(VulkanState &s) {
    if (!s.pass_open || s.command == VK_NULL_HANDLE) return;
    vkCmdEndRenderPass(s.command);
    s.pass_open = false;
    if (s.current_target != nullptr) {
        transition_image(s.command, s.current_target->color.image, s.current_target->color.layout,
                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    }
}

bool begin_target(VulkanState &s, Target &target) {
    if (s.current_target == &target && s.pass_open) return true;
    end_pass(s);
    const bool first_ever = target.last_render_epoch == 0u;
    const bool first_this_frame = target.last_render_epoch != s.frame_epoch;
    if (first_ever || (first_this_frame && target.address == s.display_framebuffer))
        clear_image(s.command, target.color.image, target.color.layout, false);
    if (first_this_frame)
        clear_image(s.command, target.depth, target.depth_layout, true);
    transition_image(s.command, target.color.image, target.color.layout,
                     VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    transition_image(s.command, target.depth, target.depth_layout,
                     VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL, VK_IMAGE_ASPECT_DEPTH_BIT, 1u);
    VkClearValue clears[2]{};
    clears[0].color.float32[3] = 1.0f;
    VkRenderPassBeginInfo begin{};
    begin.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    begin.renderPass = s.render_pass;
    begin.framebuffer = target.framebuffer;
    begin.renderArea.extent = {s.target_width, s.target_height};
    begin.clearValueCount = 2u;
    begin.pClearValues = clears;
    vkCmdBeginRenderPass(s.command, &begin, VK_SUBPASS_CONTENTS_INLINE);
    VkViewport viewport{};
    viewport.width = static_cast<float>(s.target_width);
    viewport.height = static_cast<float>(s.target_height);
    viewport.maxDepth = 1.0f;
    vkCmdSetViewport(s.command, 0u, 1u, &viewport);
    s.pass_open = true;
    s.current_target = &target;
    target.last_render_epoch = s.frame_epoch;
    return true;
}

bool snapshot_target(VulkanState &s, Target &target, std::string &error) {
    if (target.color.image == VK_NULL_HANDLE) return false;
    if (target.snapshot.image == VK_NULL_HANDLE &&
        !create_image(s, target.snapshot, s.target_width, s.target_height, 1u,
                      VK_FORMAT_R8G8B8A8_UNORM,
                      VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_COLOR_BIT, error))
        return false;
    const bool resume = s.pass_open && s.current_target == &target;
    if (resume) end_pass(s);
    transition_image(s.command, target.color.image, target.color.layout,
                     VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    transition_image(s.command, target.snapshot.image, target.snapshot.layout,
                     VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    VkImageCopy region{};
    region.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.srcSubresource.layerCount = 1u;
    region.dstSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.dstSubresource.layerCount = 1u;
    region.extent = {s.target_width, s.target_height, 1u};
    vkCmdCopyImage(s.command, target.color.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                   target.snapshot.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1u, &region);
    transition_image(s.command, target.snapshot.image, target.snapshot.layout,
                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    if (resume && !begin_target(s, target)) return false;
    return target.snapshot.view != VK_NULL_HANDLE;
}

bool upload_texture(VulkanState &s, Texture &texture, std::string &error) {
    if (!texture.dirty) return true;
    const std::uint32_t width = texture.gpu.width;
    const std::uint32_t height = texture.gpu.height;
    if (width == 0u || height == 0u || texture.rgba8.empty()) return false;
    if (texture.gpu.image == VK_NULL_HANDLE) {
        texture.gpu.sampler = make_sampler(s, texture.descriptor);
        if (!create_image(s, texture.gpu, width, height, texture.mip_levels, VK_FORMAT_R8G8B8A8_UNORM,
                          VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                          VK_IMAGE_ASPECT_COLOR_BIT, error))
            return false;
        ++s.report.texture_images_created;
    }
    VkDeviceSize bytes = texture.rgba8.size();
    Staging staging{};
    void *mapped = nullptr;
    if (!create_buffer(s, bytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                       VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                       staging.buffer, staging.memory, &mapped, error))
        return false;
    std::memcpy(mapped, texture.rgba8.data(), texture.rgba8.size());
    VkMemoryBarrier host{};
    host.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    host.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
    host.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(s.command, VK_PIPELINE_STAGE_HOST_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         0, 1u, &host, 0, nullptr, 0, nullptr);
    transition_image(s.command, texture.gpu.image, texture.gpu.layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT, texture.mip_levels);
    std::uint32_t mip_width = width;
    std::uint32_t mip_height = height;
    std::size_t offset = 0u;
    std::vector<VkBufferImageCopy> regions;
    for (std::uint32_t level = 0u; level < texture.mip_levels; ++level) {
        const std::size_t level_bytes = static_cast<std::size_t>(mip_width) * mip_height * 4u;
        if (offset + level_bytes > texture.rgba8.size()) break;
        VkBufferImageCopy region{};
        region.bufferOffset = offset;
        region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        region.imageSubresource.mipLevel = level;
        region.imageSubresource.layerCount = 1u;
        region.imageExtent = {mip_width, mip_height, 1u};
        regions.push_back(region);
        offset += level_bytes;
        mip_width = std::max(1u, mip_width >> 1u);
        mip_height = std::max(1u, mip_height >> 1u);
    }
    vkCmdCopyBufferToImage(s.command, staging.buffer, texture.gpu.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                           static_cast<std::uint32_t>(regions.size()), regions.data());
    transition_image(s.command, texture.gpu.image, texture.gpu.layout,
                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, texture.mip_levels);
    if (!write_descriptor(s, texture.gpu, error)) return false;
    s.staging.push_back(staging);
    texture.dirty = false;
    ++s.report.texture_image_uploads;
    s.report.texture_image_upload_bytes += texture.rgba8.size();
    s.report.uploaded_mip_levels += texture.mip_levels;
    return true;
}

bool prepare_texture(VulkanState &s, const GeGpuDrawDescriptor &draw, std::uint32_t width,
                     std::uint32_t height, std::uint32_t mips, std::vector<std::byte> rgba) {
    if (width == 0u) width = draw.texture_width;
    if (height == 0u) height = draw.texture_height;
    if (width == 0u || height == 0u || rgba.empty() || mips == 0u) return false;
    const std::uint64_t key = texture_key(draw);
    Texture &texture = s.textures[key];
    texture.descriptor = draw;
    texture.rgba8 = std::move(rgba);
    texture.mip_levels = mips;
    texture.gpu.width = width;
    texture.gpu.height = height;
    texture.dirty = true;
    texture.signature_epoch = s.frame_epoch;
    texture.last_used_epoch = s.frame_epoch;
    s.last_texture_rgba = texture.rgba8;
    if (draw.texture_format <= 10u) s.report.base_texture_formats_active = true;
    ++s.report.decoded_texture_uploads;
    s.report.decoded_texture_bytes += s.last_texture_rgba.size();
    s.report.unique_texture_keys = s.textures.size();
    return true;
}

void destroy_target(VulkanState &s, Target &target) noexcept {
    if (target.framebuffer) vkDestroyFramebuffer(s.device, target.framebuffer, nullptr);
    if (target.depth_view) vkDestroyImageView(s.device, target.depth_view, nullptr);
    if (target.depth) vkDestroyImage(s.device, target.depth, nullptr);
    if (target.depth_memory) vkFreeMemory(s.device, target.depth_memory, nullptr);
    destroy_image(s, target.color);
    destroy_image(s, target.snapshot);
    target.framebuffer = VK_NULL_HANDLE;
    target.depth_view = VK_NULL_HANDLE;
    target.depth = VK_NULL_HANDLE;
    target.depth_memory = VK_NULL_HANDLE;
}

constexpr std::size_t kPresentGame = 0u;
constexpr std::size_t kPresentFps = 1u;
constexpr std::size_t kPresentSettings = 2u;
constexpr std::size_t kPresentGuest = 3u;

VkDeviceSize align_upload(VkDeviceSize value) noexcept {
    return (value + 255u) & ~VkDeviceSize{255u};
}

const char *swap_format_name(VkFormat format) noexcept {
    switch (format) {
    case VK_FORMAT_R8G8B8A8_UNORM: return "RGBA8";
    case VK_FORMAT_B8G8R8A8_UNORM: return "BGRA8";
    default: return "other";
    }
}

const char *present_mode_name(VkPresentModeKHR mode) noexcept {
    switch (mode) {
    case VK_PRESENT_MODE_IMMEDIATE_KHR: return "immediate";
    case VK_PRESENT_MODE_MAILBOX_KHR: return "mailbox";
    case VK_PRESENT_MODE_FIFO_KHR: return "fifo";
    default: return "other";
    }
}

bool window_pixels(SDL_Window *window, std::uint32_t &width, std::uint32_t &height) noexcept {
    if (window == nullptr) return false;
    int w = 0;
    int h = 0;
    SDL_Vulkan_GetDrawableSize(window, &w, &h);
    if (w <= 0 || h <= 0) SDL_GetWindowSize(window, &w, &h);
    if (w <= 0 || h <= 0) return false;
    width = static_cast<std::uint32_t>(w);
    height = static_cast<std::uint32_t>(h);
    return true;
}

void destroy_surface(VulkanState &s) noexcept {
    if (s.surface != VK_NULL_HANDLE && s.instance != VK_NULL_HANDLE)
        vkDestroySurfaceKHR(s.instance, s.surface, nullptr);
    s.surface = VK_NULL_HANDLE;
}

void destroy_swap_views(VulkanState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) {
        for (VkFramebuffer framebuffer : s.swap_framebuffers) {
            if (framebuffer != VK_NULL_HANDLE) vkDestroyFramebuffer(s.device, framebuffer, nullptr);
        }
        for (VkImageView view : s.swap_views) {
            if (view != VK_NULL_HANDLE) vkDestroyImageView(s.device, view, nullptr);
        }
    }
    s.swap_framebuffers.clear();
    s.swap_views.clear();
    s.swap_images.clear();
}

void destroy_present_pipeline(VulkanState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) {
        if (s.present_pipeline != VK_NULL_HANDLE) vkDestroyPipeline(s.device, s.present_pipeline, nullptr);
        if (s.present_layout != VK_NULL_HANDLE) vkDestroyPipelineLayout(s.device, s.present_layout, nullptr);
        if (s.present_pass != VK_NULL_HANDLE) vkDestroyRenderPass(s.device, s.present_pass, nullptr);
        if (s.present_pool != VK_NULL_HANDLE) vkDestroyDescriptorPool(s.device, s.present_pool, nullptr);
        if (s.present_set_layout != VK_NULL_HANDLE)
            vkDestroyDescriptorSetLayout(s.device, s.present_set_layout, nullptr);
        if (s.present_vertex_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.present_vertex_shader, nullptr);
        if (s.present_fragment_shader != VK_NULL_HANDLE)
            vkDestroyShaderModule(s.device, s.present_fragment_shader, nullptr);
    }
    s.present_pipeline = VK_NULL_HANDLE;
    s.present_layout = VK_NULL_HANDLE;
    s.present_pass = VK_NULL_HANDLE;
    s.present_pool = VK_NULL_HANDLE;
    s.present_set_layout = VK_NULL_HANDLE;
    s.present_vertex_shader = VK_NULL_HANDLE;
    s.present_fragment_shader = VK_NULL_HANDLE;
    s.present_sets = {};
}

void destroy_present_semaphores(VulkanState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) {
        for (VkSemaphore semaphore : s.present_semaphores) {
            if (semaphore != VK_NULL_HANDLE) vkDestroySemaphore(s.device, semaphore, nullptr);
        }
    }
    s.present_semaphores.clear();
}

void destroy_present_device(VulkanState &s) noexcept {
    destroy_swap_views(s);
    if (s.device != VK_NULL_HANDLE && s.swapchain != VK_NULL_HANDLE)
        vkDestroySwapchainKHR(s.device, s.swapchain, nullptr);
    s.swapchain = VK_NULL_HANDLE;
    destroy_present_pipeline(s);
    if (s.device != VK_NULL_HANDLE) {
        if (s.game_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.game_sampler, nullptr);
        if (s.overlay_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.overlay_sampler, nullptr);
        if (s.acquire_semaphore != VK_NULL_HANDLE) vkDestroySemaphore(s.device, s.acquire_semaphore, nullptr);
        destroy_present_semaphores(s);
        if (s.present_staging_mapped != nullptr) vkUnmapMemory(s.device, s.present_staging_memory);
        if (s.present_staging != VK_NULL_HANDLE) vkDestroyBuffer(s.device, s.present_staging, nullptr);
        if (s.present_staging_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.present_staging_memory, nullptr);
    }
    s.game_sampler = VK_NULL_HANDLE;
    s.overlay_sampler = VK_NULL_HANDLE;
    s.acquire_semaphore = VK_NULL_HANDLE;
    s.present_semaphores.clear();
    s.present_staging = VK_NULL_HANDLE;
    s.present_staging_memory = VK_NULL_HANDLE;
    s.present_staging_mapped = nullptr;
    s.present_staging_bytes = 0u;
    destroy_image(s, s.fps_overlay);
    destroy_image(s, s.settings_overlay);
    destroy_image(s, s.guest_image);
    s.swap_format = VK_FORMAT_UNDEFINED;
    s.swap_present_mode = VK_PRESENT_MODE_FIFO_KHR;
    s.swap_width = 0u;
    s.swap_height = 0u;
    s.swap_present_modes.clear();
    s.present_image_index = 0u;
    s.present_recorded = false;
    s.direct_present_ok = false;
    s.swapchain_dirty = false;
    s.present_lost = false;
    s.report.swapchain_active = false;
}

bool create_window_surface(VulkanState &s, std::string &error) {
    if (s.surface != VK_NULL_HANDLE) return true;
    if (s.window == nullptr || s.instance == VK_NULL_HANDLE) {
        error = "Vulkan present has no window";
        return false;
    }
    if (SDL_Vulkan_CreateSurface(s.window, s.instance, &s.surface) != SDL_TRUE) {
        error = std::string("SDL_Vulkan_CreateSurface failed: ") + SDL_GetError();
        return false;
    }
    return true;
}

bool device_has_swapchain(VkPhysicalDevice device) {
    std::uint32_t count = 0u;
    vkEnumerateDeviceExtensionProperties(device, nullptr, &count, nullptr);
    std::vector<VkExtensionProperties> extensions(count);
    if (count > 0u)
        vkEnumerateDeviceExtensionProperties(device, nullptr, &count, extensions.data());
    for (const VkExtensionProperties &extension : extensions) {
        if (std::strcmp(extension.extensionName, VK_KHR_SWAPCHAIN_EXTENSION_NAME) == 0) return true;
    }
    return false;
}

std::uint32_t graphics_family(VkPhysicalDevice device, VkSurfaceKHR surface, bool need_present) {
    std::uint32_t count = 0u;
    vkGetPhysicalDeviceQueueFamilyProperties(device, &count, nullptr);
    std::vector<VkQueueFamilyProperties> families(count);
    vkGetPhysicalDeviceQueueFamilyProperties(device, &count, families.data());
    for (std::uint32_t index = 0u; index < count; ++index) {
        if ((families[index].queueFlags & VK_QUEUE_GRAPHICS_BIT) == 0u) continue;
        if (!need_present || surface == VK_NULL_HANDLE) return index;
        VkBool32 supported = VK_FALSE;
        if (vkGetPhysicalDeviceSurfaceSupportKHR(device, index, surface, &supported) == VK_SUCCESS &&
            supported == VK_TRUE)
            return index;
    }
    return 0xFFFFFFFFu;
}

bool select_present_device(VulkanState &s, std::string &error) {
    std::uint32_t device_count = 0u;
    vkEnumeratePhysicalDevices(s.instance, &device_count, nullptr);
    if (device_count == 0u) {
        error = "No Vulkan physical device";
        return false;
    }
    std::vector<VkPhysicalDevice> devices(device_count);
    vkEnumeratePhysicalDevices(s.instance, &device_count, devices.data());
    s.report.physical_device_count = device_count;
    VkPhysicalDevice chosen = VK_NULL_HANDLE;
    std::uint32_t family = 0xFFFFFFFFu;
    VkPhysicalDevice fallback = VK_NULL_HANDLE;
    std::uint32_t fallback_family = 0xFFFFFFFFu;
    for (VkPhysicalDevice device : devices) {
        const std::uint32_t graphics = graphics_family(device, s.surface, false);
        if (graphics == 0xFFFFFFFFu) continue;
        VkPhysicalDeviceProperties properties{};
        vkGetPhysicalDeviceProperties(device, &properties);
        const bool discrete = properties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU;
        if (fallback == VK_NULL_HANDLE || discrete) {
            fallback = device;
            fallback_family = graphics;
        }
        if (s.surface == VK_NULL_HANDLE) continue;
        const std::uint32_t presenting = graphics_family(device, s.surface, true);
        if (presenting == 0xFFFFFFFFu) continue;
        if (chosen == VK_NULL_HANDLE || discrete) {
            chosen = device;
            family = presenting;
            if (discrete) break;
        }
    }
    if (s.surface != VK_NULL_HANDLE && chosen == VK_NULL_HANDLE) {
        std::cerr << "[vulkan] no graphics queue can present; using the CPU readback\n";
        destroy_surface(s);
    }
    if (chosen == VK_NULL_HANDLE) {
        chosen = fallback;
        family = fallback_family;
    }
    if (chosen == VK_NULL_HANDLE || family == 0xFFFFFFFFu) {
        error = "No Vulkan graphics queue";
        return false;
    }
    s.physical = chosen;
    s.queue_family = family;
    s.report.graphics_queue_family = family;
    return true;
}

VkSampler make_present_sampler(VulkanState &s, bool linear) {
    VkSamplerCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    info.magFilter = linear ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    info.minFilter = info.magFilter;
    info.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
    info.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    info.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    info.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    VkSampler sampler = VK_NULL_HANDLE;
    if (vkCreateSampler(s.device, &info, nullptr, &sampler) != VK_SUCCESS) return VK_NULL_HANDLE;
    return sampler;
}

bool load_shader_words(VulkanState &s, const std::uint32_t *words, std::size_t count, VkShaderModule &module) {
    VkShaderModuleCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    info.codeSize = count * sizeof(std::uint32_t);
    info.pCode = words;
    return vkCreateShaderModule(s.device, &info, nullptr, &module) == VK_SUCCESS;
}

bool ensure_present_pipeline(VulkanState &s, VkFormat format, std::string &error) {
    if (s.present_pipeline != VK_NULL_HANDLE && s.swap_format == format) return true;
    destroy_present_pipeline(s);
    if (!load_shader_words(s, kVulkanPresentVertexSpirv, std::size(kVulkanPresentVertexSpirv),
                           s.present_vertex_shader) ||
        !load_shader_words(s, kVulkanPresentFragmentSpirv, std::size(kVulkanPresentFragmentSpirv),
                           s.present_fragment_shader)) {
        error = "Vulkan present shader failed";
        return false;
    }
    VkAttachmentDescription attachment{};
    attachment.format = format;
    attachment.samples = VK_SAMPLE_COUNT_1_BIT;
    attachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    attachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    VkAttachmentReference color{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1u;
    subpass.pColorAttachments = &color;
    VkSubpassDependency dependency{};
    dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
    dependency.dstSubpass = 0u;
    dependency.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependency.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    VkRenderPassCreateInfo pass{};
    pass.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    pass.attachmentCount = 1u;
    pass.pAttachments = &attachment;
    pass.subpassCount = 1u;
    pass.pSubpasses = &subpass;
    pass.dependencyCount = 1u;
    pass.pDependencies = &dependency;
    if (vkCreateRenderPass(s.device, &pass, nullptr, &s.present_pass) != VK_SUCCESS) {
        error = "Vulkan present render pass failed";
        return false;
    }
    VkDescriptorSetLayoutBinding binding{};
    binding.binding = 0u;
    binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    binding.descriptorCount = 1u;
    binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo set_info{};
    set_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    set_info.bindingCount = 1u;
    set_info.pBindings = &binding;
    if (vkCreateDescriptorSetLayout(s.device, &set_info, nullptr, &s.present_set_layout) != VK_SUCCESS) {
        error = "Vulkan present descriptor layout failed";
        return false;
    }
    VkPushConstantRange range{};
    range.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    range.size = 4u;
    VkPipelineLayoutCreateInfo layout{};
    layout.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    layout.setLayoutCount = 1u;
    layout.pSetLayouts = &s.present_set_layout;
    layout.pushConstantRangeCount = 1u;
    layout.pPushConstantRanges = &range;
    if (vkCreatePipelineLayout(s.device, &layout, nullptr, &s.present_layout) != VK_SUCCESS) {
        error = "Vulkan present pipeline layout failed";
        return false;
    }
    VkDescriptorPoolSize pool_size{VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 4u};
    VkDescriptorPoolCreateInfo pool{};
    pool.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    pool.maxSets = 4u;
    pool.poolSizeCount = 1u;
    pool.pPoolSizes = &pool_size;
    if (vkCreateDescriptorPool(s.device, &pool, nullptr, &s.present_pool) != VK_SUCCESS) {
        error = "Vulkan present descriptor pool failed";
        return false;
    }
    const VkDescriptorSetLayout layouts[4]{s.present_set_layout, s.present_set_layout, s.present_set_layout,
                                           s.present_set_layout};
    VkDescriptorSetAllocateInfo alloc{};
    alloc.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    alloc.descriptorPool = s.present_pool;
    alloc.descriptorSetCount = 4u;
    alloc.pSetLayouts = layouts;
    if (vkAllocateDescriptorSets(s.device, &alloc, s.present_sets.data()) != VK_SUCCESS) {
        error = "Vulkan present descriptor sets failed";
        return false;
    }
    VkPipelineShaderStageCreateInfo stages[2]{};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = s.present_vertex_shader;
    stages[0].pName = "main";
    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = s.present_fragment_shader;
    stages[1].pName = "main";
    VkPipelineVertexInputStateCreateInfo vertex{};
    vertex.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    VkPipelineInputAssemblyStateCreateInfo assembly{};
    assembly.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    assembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo viewport{};
    viewport.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewport.viewportCount = 1u;
    viewport.scissorCount = 1u;
    VkPipelineRasterizationStateCreateInfo raster{};
    raster.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    raster.polygonMode = VK_POLYGON_MODE_FILL;
    raster.cullMode = VK_CULL_MODE_NONE;
    raster.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    raster.lineWidth = 1.0f;
    VkPipelineMultisampleStateCreateInfo multisample{};
    multisample.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo depth{};
    depth.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    VkPipelineColorBlendAttachmentState blend{};
    blend.blendEnable = VK_TRUE;
    blend.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    blend.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    blend.colorBlendOp = VK_BLEND_OP_ADD;
    blend.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    blend.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    blend.alphaBlendOp = VK_BLEND_OP_ADD;
    blend.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT |
                           VK_COLOR_COMPONENT_A_BIT;
    VkPipelineColorBlendStateCreateInfo blending{};
    blending.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    blending.attachmentCount = 1u;
    blending.pAttachments = &blend;
    VkDynamicState dynamics[]{VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo dynamic{};
    dynamic.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamic.dynamicStateCount = 2u;
    dynamic.pDynamicStates = dynamics;
    VkGraphicsPipelineCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    info.stageCount = 2u;
    info.pStages = stages;
    info.pVertexInputState = &vertex;
    info.pInputAssemblyState = &assembly;
    info.pViewportState = &viewport;
    info.pRasterizationState = &raster;
    info.pMultisampleState = &multisample;
    info.pDepthStencilState = &depth;
    info.pColorBlendState = &blending;
    info.pDynamicState = &dynamic;
    info.layout = s.present_layout;
    info.renderPass = s.present_pass;
    if (vkCreateGraphicsPipelines(s.device, VK_NULL_HANDLE, 1u, &info, nullptr, &s.present_pipeline) !=
        VK_SUCCESS) {
        error = "Vulkan present pipeline failed";
        return false;
    }
    if (s.overlay_sampler == VK_NULL_HANDLE) s.overlay_sampler = make_present_sampler(s, false);
    if (s.overlay_sampler == VK_NULL_HANDLE) {
        error = "Vulkan present sampler failed";
        return false;
    }
    s.swap_format = format;
    return true;
}

bool ensure_present_semaphores(VulkanState &s, std::uint32_t count, std::string &error) {
    destroy_present_semaphores(s);
    VkSemaphoreCreateInfo info{};
    info.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    if (s.acquire_semaphore == VK_NULL_HANDLE &&
        vkCreateSemaphore(s.device, &info, nullptr, &s.acquire_semaphore) != VK_SUCCESS) {
        error = "Vulkan present semaphore failed";
        return false;
    }
    s.present_semaphores.resize(count, VK_NULL_HANDLE);
    for (VkSemaphore &semaphore : s.present_semaphores) {
        if (vkCreateSemaphore(s.device, &info, nullptr, &semaphore) != VK_SUCCESS) {
            error = "Vulkan present semaphore failed";
            return false;
        }
    }
    return true;
}

VkFormat choose_swap_format(VkPhysicalDevice device, VkSurfaceKHR surface) {
    std::uint32_t count = 0u;
    vkGetPhysicalDeviceSurfaceFormatsKHR(device, surface, &count, nullptr);
    if (count == 0u) return VK_FORMAT_UNDEFINED;
    std::vector<VkSurfaceFormatKHR> formats(count);
    vkGetPhysicalDeviceSurfaceFormatsKHR(device, surface, &count, formats.data());
    if (count == 1u && formats[0].format == VK_FORMAT_UNDEFINED) return VK_FORMAT_R8G8B8A8_UNORM;
    for (const VkSurfaceFormatKHR &format : formats) {
        if (format.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR &&
            (format.format == VK_FORMAT_R8G8B8A8_UNORM || format.format == VK_FORMAT_B8G8R8A8_UNORM))
            return format.format;
    }
    for (const VkSurfaceFormatKHR &format : formats) {
        if (format.format == VK_FORMAT_R8G8B8A8_UNORM || format.format == VK_FORMAT_B8G8R8A8_UNORM)
            return format.format;
    }
    return formats[0].format;
}

VkPresentModeKHR desired_present_mode(const VulkanState &s) noexcept {
    if (lcs_render_configuration().display.vsync) return VK_PRESENT_MODE_FIFO_KHR;
    for (VkPresentModeKHR mode : s.swap_present_modes) {
        if (mode == VK_PRESENT_MODE_MAILBOX_KHR) return mode;
    }
    for (VkPresentModeKHR mode : s.swap_present_modes) {
        if (mode == VK_PRESENT_MODE_IMMEDIATE_KHR) return mode;
    }
    return VK_PRESENT_MODE_FIFO_KHR;
}

bool ensure_swapchain(VulkanState &s, std::string &error) {
    if (s.present_lost || s.device == VK_NULL_HANDLE || !s.swapchain_extension) {
        error = "Vulkan swapchain is not available";
        return false;
    }
    if (s.surface == VK_NULL_HANDLE && !create_window_surface(s, error)) return false;
    std::uint32_t drawable_w = 0u;
    std::uint32_t drawable_h = 0u;
    if (!window_pixels(s.window, drawable_w, drawable_h)) {
        if (s.swapchain != VK_NULL_HANDLE) return true;
        error = "Vulkan window size is zero";
        return false;
    }
    VkSurfaceCapabilitiesKHR caps{};
    if (vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s.physical, s.surface, &caps) != VK_SUCCESS) {
        error = "vkGetPhysicalDeviceSurfaceCapabilitiesKHR failed";
        return false;
    }
    VkExtent2D extent = caps.currentExtent;
    if (extent.width == 0xFFFFFFFFu) {
        extent.width = std::clamp(drawable_w, caps.minImageExtent.width, caps.maxImageExtent.width);
        extent.height = std::clamp(drawable_h, caps.minImageExtent.height, caps.maxImageExtent.height);
    }
    if (extent.width == 0u || extent.height == 0u) {
        if (s.swapchain != VK_NULL_HANDLE) return true;
        error = "Vulkan surface extent is zero";
        return false;
    }
    if ((caps.supportedUsageFlags & VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT) == 0u) {
        error = "Vulkan surface cannot be a color attachment";
        return false;
    }
    if (s.swap_present_modes.empty()) {
        std::uint32_t mode_count = 0u;
        vkGetPhysicalDeviceSurfacePresentModesKHR(s.physical, s.surface, &mode_count, nullptr);
        s.swap_present_modes.resize(mode_count);
        if (mode_count > 0u)
            vkGetPhysicalDeviceSurfacePresentModesKHR(s.physical, s.surface, &mode_count,
                                                      s.swap_present_modes.data());
    }
    const VkFormat format = choose_swap_format(s.physical, s.surface);
    if (format == VK_FORMAT_UNDEFINED) {
        error = "Vulkan surface has no present format";
        return false;
    }
    const VkPresentModeKHR mode = desired_present_mode(s);
    if (!s.swapchain_dirty && s.swapchain != VK_NULL_HANDLE && s.present_pipeline != VK_NULL_HANDLE &&
        s.swap_width == extent.width && s.swap_height == extent.height && s.swap_present_mode == mode &&
        s.swap_format == format && !s.swap_framebuffers.empty() &&
        s.swap_framebuffers.size() == s.swap_images.size())
        return true;
    if (s.swapchain != VK_NULL_HANDLE) vkDeviceWaitIdle(s.device);
    const bool format_changed = s.present_pass != VK_NULL_HANDLE && s.swap_format != format;
    destroy_swap_views(s);
    if (format_changed) destroy_present_pipeline(s);
    std::uint32_t image_count = caps.minImageCount + 1u;
    if (caps.maxImageCount > 0u && image_count > caps.maxImageCount) image_count = caps.maxImageCount;
    VkCompositeAlphaFlagBitsKHR composite = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    if ((caps.supportedCompositeAlpha & composite) == 0u) {
        if ((caps.supportedCompositeAlpha & VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR) != 0u)
            composite = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
        else if ((caps.supportedCompositeAlpha & VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR) != 0u)
            composite = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR;
        else
            composite = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR;
    }
    VkSwapchainCreateInfoKHR info{};
    info.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    info.surface = s.surface;
    info.minImageCount = image_count;
    info.imageFormat = format;
    info.imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
    info.imageExtent = extent;
    info.imageArrayLayers = 1u;
    info.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    info.preTransform = (caps.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) != 0u
                            ? VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR
                            : caps.currentTransform;
    info.compositeAlpha = composite;
    info.presentMode = mode;
    info.clipped = VK_TRUE;
    info.oldSwapchain = s.swapchain;
    VkSwapchainKHR created = VK_NULL_HANDLE;
    if (vkCreateSwapchainKHR(s.device, &info, nullptr, &created) != VK_SUCCESS) {
        // oldSwapchain is retired even when creation fails.
        if (s.swapchain != VK_NULL_HANDLE) vkDestroySwapchainKHR(s.device, s.swapchain, nullptr);
        s.swapchain = VK_NULL_HANDLE;
        s.swapchain_dirty = true;
        s.report.swapchain_active = false;
        error = "vkCreateSwapchainKHR failed";
        return false;
    }
    if (s.swapchain != VK_NULL_HANDLE) vkDestroySwapchainKHR(s.device, s.swapchain, nullptr);
    s.swapchain = created;
    s.swap_width = extent.width;
    s.swap_height = extent.height;
    s.swap_present_mode = mode;
    s.swapchain_dirty = false;
    if (!ensure_present_pipeline(s, format, error)) return false;
    std::uint32_t created_count = 0u;
    vkGetSwapchainImagesKHR(s.device, s.swapchain, &created_count, nullptr);
    s.swap_images.resize(created_count);
    if (created_count == 0u ||
        vkGetSwapchainImagesKHR(s.device, s.swapchain, &created_count, s.swap_images.data()) != VK_SUCCESS) {
        error = "vkGetSwapchainImagesKHR failed";
        return false;
    }
    if (!ensure_present_semaphores(s, created_count, error)) return false;
    s.swap_views.reserve(s.swap_images.size());
    s.swap_framebuffers.reserve(s.swap_images.size());
    for (VkImage image : s.swap_images) {
        VkImageViewCreateInfo view{};
        view.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        view.image = image;
        view.viewType = VK_IMAGE_VIEW_TYPE_2D;
        view.format = format;
        view.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        view.subresourceRange.levelCount = 1u;
        view.subresourceRange.layerCount = 1u;
        VkImageView image_view = VK_NULL_HANDLE;
        if (vkCreateImageView(s.device, &view, nullptr, &image_view) != VK_SUCCESS) {
            error = "Vulkan swapchain image view failed";
            return false;
        }
        VkFramebufferCreateInfo framebuffer{};
        framebuffer.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        framebuffer.renderPass = s.present_pass;
        framebuffer.attachmentCount = 1u;
        framebuffer.pAttachments = &image_view;
        framebuffer.width = extent.width;
        framebuffer.height = extent.height;
        framebuffer.layers = 1u;
        VkFramebuffer buffer = VK_NULL_HANDLE;
        if (vkCreateFramebuffer(s.device, &framebuffer, nullptr, &buffer) != VK_SUCCESS) {
            vkDestroyImageView(s.device, image_view, nullptr);
            error = "Vulkan swapchain framebuffer failed";
            return false;
        }
        s.swap_views.push_back(image_view);
        s.swap_framebuffers.push_back(buffer);
    }
    s.report.swapchain_active = true;
    std::cerr << "[vulkan] swapchain " << extent.width << "x" << extent.height << " "
              << swap_format_name(format) << " " << present_mode_name(mode) << "\n";
    return true;
}

bool ensure_present_staging(VulkanState &s, VkDeviceSize bytes, std::string &error) {
    if (bytes == 0u) return true;
    if (s.present_staging_mapped != nullptr && s.present_staging_bytes >= bytes) return true;
    if (s.submit_pending) {
        error = "present staging is still in use";
        return false;
    }
    if (s.present_staging_mapped != nullptr) vkUnmapMemory(s.device, s.present_staging_memory);
    if (s.present_staging != VK_NULL_HANDLE) vkDestroyBuffer(s.device, s.present_staging, nullptr);
    if (s.present_staging_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.present_staging_memory, nullptr);
    s.present_staging = VK_NULL_HANDLE;
    s.present_staging_memory = VK_NULL_HANDLE;
    s.present_staging_mapped = nullptr;
    s.present_staging_bytes = 0u;
    void *mapped = nullptr;
    const VkMemoryPropertyFlags host =
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
    if (!create_buffer(s, bytes, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, host, s.present_staging,
                       s.present_staging_memory, &mapped, error))
        return false;
    s.present_staging_mapped = mapped;
    s.present_staging_bytes = bytes;
    return true;
}

bool ensure_overlay_image(VulkanState &s, GpuImage &image, std::uint32_t width, std::uint32_t height,
                          std::string &error) {
    if (image.image != VK_NULL_HANDLE && image.width == width && image.height == height) return true;
    destroy_image(s, image);
    return create_image(s, image, width, height, 1u, VK_FORMAT_R8G8B8A8_UNORM,
                        VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                        VK_IMAGE_ASPECT_COLOR_BIT, error);
}

bool ensure_game_sampler(VulkanState &s, std::string &error) {
    const bool linear =
        lcs_render_configuration().display.upscale_filter == DisplayUpscaleFilter::Bilinear;
    if (s.game_sampler != VK_NULL_HANDLE && s.game_sampler_linear == linear) return true;
    if (s.submit_pending) {
        error = "present sampler is still in use";
        return false;
    }
    if (s.game_sampler != VK_NULL_HANDLE) vkDestroySampler(s.device, s.game_sampler, nullptr);
    s.game_sampler = make_present_sampler(s, linear);
    s.game_sampler_linear = linear;
    if (s.game_sampler == VK_NULL_HANDLE) {
        error = "Vulkan present sampler failed";
        return false;
    }
    return true;
}

void write_present_set(VulkanState &s, std::size_t slot, VkImageView view, VkSampler sampler) {
    if (slot >= s.present_sets.size() || s.present_sets[slot] == VK_NULL_HANDLE ||
        view == VK_NULL_HANDLE || sampler == VK_NULL_HANDLE)
        return;
    VkDescriptorImageInfo info{};
    info.sampler = sampler;
    info.imageView = view;
    info.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    VkWriteDescriptorSet write{};
    write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    write.dstSet = s.present_sets[slot];
    write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    write.descriptorCount = 1u;
    write.pImageInfo = &info;
    vkUpdateDescriptorSets(s.device, 1u, &write, 0u, nullptr);
}

void cmd_upload_image(VulkanState &s, GpuImage &image, VkDeviceSize offset, std::uint32_t width,
                      std::uint32_t height) {
    VkMemoryBarrier host{};
    host.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    host.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
    host.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(s.command, VK_PIPELINE_STAGE_HOST_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0u, 1u,
                         &host, 0u, nullptr, 0u, nullptr);
    transition_image(s.command, image.image, image.layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    VkBufferImageCopy region{};
    region.bufferOffset = offset;
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1u;
    region.imageExtent = {width, height, 1u};
    vkCmdCopyBufferToImage(s.command, s.present_staging, image.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                           1u, &region);
    transition_image(s.command, image.image, image.layout, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT, 1u);
}

void draw_present_layer(VulkanState &s, VkDescriptorSet set, std::int32_t x, std::int32_t y,
                        std::int32_t width, std::int32_t height, bool opaque) {
    if (set == VK_NULL_HANDLE || width <= 0 || height <= 0) return;
    if (x < 0) {
        width += x;
        x = 0;
    }
    if (y < 0) {
        height += y;
        y = 0;
    }
    if (width <= 0 || height <= 0 || x >= static_cast<std::int32_t>(s.swap_width) ||
        y >= static_cast<std::int32_t>(s.swap_height))
        return;
    width = std::min(width, static_cast<std::int32_t>(s.swap_width) - x);
    height = std::min(height, static_cast<std::int32_t>(s.swap_height) - y);
    VkViewport viewport{};
    viewport.x = static_cast<float>(x);
    viewport.y = static_cast<float>(y);
    viewport.width = static_cast<float>(width);
    viewport.height = static_cast<float>(height);
    viewport.maxDepth = 1.0f;
    VkRect2D scissor{};
    scissor.offset = {x, y};
    scissor.extent = {static_cast<std::uint32_t>(width), static_cast<std::uint32_t>(height)};
    vkCmdSetViewport(s.command, 0u, 1u, &viewport);
    vkCmdSetScissor(s.command, 0u, 1u, &scissor);
    const std::uint32_t opaque_flag = opaque ? 1u : 0u;
    vkCmdPushConstants(s.command, s.present_layout, VK_SHADER_STAGE_FRAGMENT_BIT, 0u, sizeof(opaque_flag),
                       &opaque_flag);
    vkCmdBindDescriptorSets(s.command, VK_PIPELINE_BIND_POINT_GRAPHICS, s.present_layout, 0u, 1u, &set, 0u,
                            nullptr);
    vkCmdDraw(s.command, 3u, 1u, 0u, 0u);
}

void cmd_present_pass(VulkanState &s, std::uint32_t image_index, VkDescriptorSet source,
                      std::uint32_t source_width, std::uint32_t source_height, bool draw_fps,
                      bool draw_settings) {
    const DisplayConfiguration &display = lcs_render_configuration().display;
    const PresentationRectangle fitted = calculate_presentation_rectangle(
        s.swap_width, s.swap_height, source_width, source_height, display.aspect_mode,
        display.integer_scale);
    VkClearValue clear{};
    clear.color.float32[3] = 1.0f;
    VkRenderPassBeginInfo begin{};
    begin.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    begin.renderPass = s.present_pass;
    begin.framebuffer = s.swap_framebuffers[image_index];
    begin.renderArea.extent = {s.swap_width, s.swap_height};
    begin.clearValueCount = 1u;
    begin.pClearValues = &clear;
    vkCmdBeginRenderPass(s.command, &begin, VK_SUBPASS_CONTENTS_INLINE);
    vkCmdBindPipeline(s.command, VK_PIPELINE_BIND_POINT_GRAPHICS, s.present_pipeline);
    draw_present_layer(s, source, fitted.x, fitted.y, fitted.width, fitted.height, true);
    if (draw_fps) {
        const std::int32_t panel_h = std::max(28, static_cast<std::int32_t>(s.swap_height / 28u));
        const std::int32_t panel_w = panel_h * static_cast<std::int32_t>(kFpsOverlayWidth / kFpsOverlayHeight);
        draw_present_layer(s, s.present_sets[kPresentFps], 16, 16, panel_w, panel_h, false);
    }
    if (draw_settings) {
        const std::int32_t panel_w = std::min(static_cast<std::int32_t>(static_cast<float>(s.swap_width) * 0.46f),
                                              static_cast<std::int32_t>(kSettingsOverlayWidth));
        const std::int32_t panel_h = panel_w / 2;
        draw_present_layer(s, s.present_sets[kPresentSettings],
                           static_cast<std::int32_t>(s.swap_width) - panel_w - 24, 24, panel_w, panel_h, false);
    }
    vkCmdEndRenderPass(s.command);
}

bool acquire_swap_image(VulkanState &s, std::uint32_t &index, std::string &error) {
    VkResult result = vkAcquireNextImageKHR(s.device, s.swapchain, 1000000000ull, s.acquire_semaphore,
                                            VK_NULL_HANDLE, &index);
    if (result == VK_ERROR_OUT_OF_DATE_KHR) {
        s.swapchain_dirty = true;
        if (!ensure_swapchain(s, error)) return false;
        result = vkAcquireNextImageKHR(s.device, s.swapchain, 1000000000ull, s.acquire_semaphore,
                                       VK_NULL_HANDLE, &index);
    }
    if (result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR) {
        error = "vkAcquireNextImageKHR failed";
        return false;
    }
    return true;
}

void retire_acquired_present(VulkanState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) vkDeviceWaitIdle(s.device);
    s.present_recorded = false;
    if (s.device != VK_NULL_HANDLE && s.acquire_semaphore != VK_NULL_HANDLE) {
        // Submit never waited, so this acquire semaphore stays signaled.
        vkDestroySemaphore(s.device, s.acquire_semaphore, nullptr);
        s.acquire_semaphore = VK_NULL_HANDLE;
        VkSemaphoreCreateInfo semaphore{};
        semaphore.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        vkCreateSemaphore(s.device, &semaphore, nullptr, &s.acquire_semaphore);
    }
    s.swapchain_dirty = true;
    std::string ignored;
    ensure_swapchain(s, ignored);
}

bool prepare_overlay_uploads(VulkanState &s, const Dx12FramePresentDecision &decision,
                             VkDeviceSize fps_offset, VkDeviceSize settings_offset, bool &draw_fps,
                             bool &draw_settings, std::string &error) {
    draw_fps = false;
    draw_settings = false;
    auto *mapped = static_cast<std::uint8_t *>(s.present_staging_mapped);
    if (mapped == nullptr) return false;
    if (decision.composite_fps &&
        ensure_overlay_image(s, s.fps_overlay, kFpsOverlayWidth, kFpsOverlayHeight, error)) {
        rasterize_fps_overlay(mapped + fps_offset, kFpsOverlayWidth, kFpsOverlayHeight);
        draw_fps = true;
    }
    if (decision.composite_settings &&
        ensure_overlay_image(s, s.settings_overlay, kSettingsOverlayWidth, kSettingsOverlayHeight, error)) {
        rasterize_settings_overlay(decision.settings, mapped + settings_offset, kSettingsOverlayWidth,
                                   kSettingsOverlayHeight);
        draw_settings = true;
    }
    return true;
}

bool record_swapchain_present(VulkanState &s, VkImageView source, std::uint32_t source_width,
                              std::uint32_t source_height, std::string &error) {
    if (source == VK_NULL_HANDLE || s.present_lost) return false;
    if (!ensure_swapchain(s, error) || !ensure_game_sampler(s, error)) return false;
    const Dx12FramePresentDecision decision = decide_dx12_frame_present(true);
    const VkDeviceSize fps_bytes = static_cast<VkDeviceSize>(kFpsOverlayWidth) * kFpsOverlayHeight * 4u;
    const VkDeviceSize settings_bytes =
        static_cast<VkDeviceSize>(kSettingsOverlayWidth) * kSettingsOverlayHeight * 4u;
    const VkDeviceSize fps_offset = 0u;
    const VkDeviceSize settings_offset = align_upload(fps_bytes);
    if (!ensure_present_staging(s, settings_offset + settings_bytes, error)) return false;
    host_fps_note_presented_frame();
    bool draw_fps = false;
    bool draw_settings = false;
    if (!prepare_overlay_uploads(s, decision, fps_offset, settings_offset, draw_fps, draw_settings, error))
        return false;
    std::uint32_t index = 0u;
    if (!acquire_swap_image(s, index, error)) return false;
    if (draw_fps)
        cmd_upload_image(s, s.fps_overlay, fps_offset, kFpsOverlayWidth, kFpsOverlayHeight);
    if (draw_settings)
        cmd_upload_image(s, s.settings_overlay, settings_offset, kSettingsOverlayWidth, kSettingsOverlayHeight);
    write_present_set(s, kPresentGame, source, s.game_sampler);
    if (draw_fps) write_present_set(s, kPresentFps, s.fps_overlay.view, s.overlay_sampler);
    if (draw_settings) write_present_set(s, kPresentSettings, s.settings_overlay.view, s.overlay_sampler);
    cmd_present_pass(s, index, s.present_sets[kPresentGame], source_width, source_height, draw_fps,
                     draw_settings);
    s.present_image_index = index;
    s.present_recorded = true;
    return true;
}

VkResult queue_present(VulkanState &s) {
    if (s.present_image_index >= s.present_semaphores.size()) return VK_ERROR_OUT_OF_DATE_KHR;
    VkSemaphore wait = s.present_semaphores[s.present_image_index];
    VkPresentInfoKHR info{};
    info.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    info.waitSemaphoreCount = 1u;
    info.pWaitSemaphores = &wait;
    info.swapchainCount = 1u;
    info.pSwapchains = &s.swapchain;
    info.pImageIndices = &s.present_image_index;
    s.present_recorded = false;
    return vkQueuePresentKHR(s.queue, &info);
}

void log_frame_failure(const VulkanState &s, const char *step, VkResult result) noexcept {
    static std::uint64_t failures = 0u;
    ++failures;
    if (failures > 5u && (failures % 300u) != 0u) return;
    std::cerr << "[vulkan] " << step << " result=" << static_cast<int>(result)
              << " failures=" << failures
              << " batches=" << s.batches.size()
              << " textures=" << s.textures.size()
              << " descriptor_sets=" << s.descriptor_sets_live
              << " staging=" << s.staging.size()
              << " display_fb=" << std::hex << s.display_framebuffer << std::dec << '\n';
}

void release_staging(VulkanState &s) noexcept {
    for (Staging &staging : s.staging) {
        vkDestroyBuffer(s.device, staging.buffer, nullptr);
        vkFreeMemory(s.device, staging.memory, nullptr);
    }
    s.staging.clear();
}

bool complete_pending_submit(VulkanState &s, bool &copied) noexcept {
    copied = false;
    if (!s.submit_pending) return true;
    const VkResult waited = vkQueueWaitIdle(s.queue);
    if (waited != VK_SUCCESS) {
        log_frame_failure(s, "vkQueueWaitIdle", waited);
        return false;
    }
    if (s.pending_readback && s.readback_mapped != nullptr && s.pending_readback_bytes != 0u) {
        s.frame_rgba.resize(s.pending_readback_bytes);
        std::memcpy(s.frame_rgba.data(), s.readback_mapped, s.pending_readback_bytes);
        copied = true;
        s.readback_latched = true;
    }
    release_staging(s);
    s.submit_pending = false;
    s.pending_readback = false;
    s.pending_readback_bytes = 0u;
    return true;
}

bool present_guest_image(VulkanState &s, std::span<const std::byte> rgba, std::uint32_t width,
                         std::uint32_t height, std::string &error) {
    if (s.present_lost || s.swapchain == VK_NULL_HANDLE && !s.swapchain_extension) return false;
    if (width == 0u || height == 0u || width > 8192u || height > 8192u) return false;
    const std::size_t guest_bytes = static_cast<std::size_t>(width) * height * 4u;
    if (rgba.size() < guest_bytes) return false;
    bool copied = false;
    if (!complete_pending_submit(s, copied)) return false;
    if (!ensure_swapchain(s, error) || !ensure_game_sampler(s, error)) return false;
    if (!ensure_overlay_image(s, s.guest_image, width, height, error)) return false;
    const Dx12FramePresentDecision decision = decide_dx12_frame_present(true);
    const VkDeviceSize fps_bytes = static_cast<VkDeviceSize>(kFpsOverlayWidth) * kFpsOverlayHeight * 4u;
    const VkDeviceSize settings_bytes =
        static_cast<VkDeviceSize>(kSettingsOverlayWidth) * kSettingsOverlayHeight * 4u;
    const VkDeviceSize fps_offset = align_upload(static_cast<VkDeviceSize>(guest_bytes));
    const VkDeviceSize settings_offset = align_upload(fps_offset + fps_bytes);
    if (!ensure_present_staging(s, settings_offset + settings_bytes, error)) return false;
    std::memcpy(s.present_staging_mapped, rgba.data(), guest_bytes);
    host_fps_note_presented_frame();
    bool draw_fps = false;
    bool draw_settings = false;
    if (!prepare_overlay_uploads(s, decision, fps_offset, settings_offset, draw_fps, draw_settings, error))
        return false;
    std::uint32_t index = 0u;
    if (!acquire_swap_image(s, index, error)) return false;
    VkCommandBufferBeginInfo begin{};
    begin.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (vkResetCommandBuffer(s.command, 0u) != VK_SUCCESS ||
        vkBeginCommandBuffer(s.command, &begin) != VK_SUCCESS) {
        retire_acquired_present(s);
        error = "Vulkan guest present could not begin a command buffer";
        return false;
    }
    cmd_upload_image(s, s.guest_image, 0u, width, height);
    if (draw_fps) cmd_upload_image(s, s.fps_overlay, fps_offset, kFpsOverlayWidth, kFpsOverlayHeight);
    if (draw_settings)
        cmd_upload_image(s, s.settings_overlay, settings_offset, kSettingsOverlayWidth, kSettingsOverlayHeight);
    write_present_set(s, kPresentGuest, s.guest_image.view, s.game_sampler);
    if (draw_fps) write_present_set(s, kPresentFps, s.fps_overlay.view, s.overlay_sampler);
    if (draw_settings) write_present_set(s, kPresentSettings, s.settings_overlay.view, s.overlay_sampler);
    cmd_present_pass(s, index, s.present_sets[kPresentGuest], width, height, draw_fps, draw_settings);
    if (vkEndCommandBuffer(s.command) != VK_SUCCESS) {
        vkResetCommandBuffer(s.command, 0u);
        retire_acquired_present(s);
        error = "Vulkan guest present command buffer failed";
        return false;
    }
    if (index >= s.present_semaphores.size()) {
        vkResetCommandBuffer(s.command, 0u);
        retire_acquired_present(s);
        error = "Vulkan guest present semaphore is missing";
        return false;
    }
    VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    VkSemaphore acquire_wait = s.acquire_semaphore;
    VkSemaphore present_signal = s.present_semaphores[index];
    VkSubmitInfo submit{};
    submit.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit.waitSemaphoreCount = 1u;
    submit.pWaitSemaphores = &acquire_wait;
    submit.pWaitDstStageMask = &wait_stage;
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &s.command;
    submit.signalSemaphoreCount = 1u;
    submit.pSignalSemaphores = &present_signal;
    s.present_image_index = index;
    s.present_recorded = true;
    if (vkQueueSubmit(s.queue, 1u, &submit, VK_NULL_HANDLE) != VK_SUCCESS) {
        vkResetCommandBuffer(s.command, 0u);
        retire_acquired_present(s);
        error = "Vulkan guest present submit failed";
        return false;
    }
    const VkResult presented = queue_present(s);
    vkQueueWaitIdle(s.queue);
    vkResetCommandBuffer(s.command, 0u);
    if (presented == VK_ERROR_OUT_OF_DATE_KHR) s.swapchain_dirty = true;
    if (presented == VK_ERROR_DEVICE_LOST) s.present_lost = true;
    if (presented != VK_SUCCESS && presented != VK_SUBOPTIMAL_KHR) {
        error = "vkQueuePresentKHR failed";
        return false;
    }
    return true;
}

void destroy_backend(VulkanState &s) noexcept {
    if (s.device != VK_NULL_HANDLE) vkDeviceWaitIdle(s.device);
    destroy_present_device(s);
    for (Staging &staging : s.staging) {
        if (staging.buffer) vkDestroyBuffer(s.device, staging.buffer, nullptr);
        if (staging.memory) vkFreeMemory(s.device, staging.memory, nullptr);
    }
    s.staging.clear();
    s.submit_pending = false;
    s.pending_readback = false;
    s.pending_readback_bytes = 0u;
    s.readback_latched = false;
    for (auto &entry : s.targets) destroy_target(s, entry.second);
    s.targets.clear();
    for (auto &entry : s.textures) destroy_image(s, entry.second.gpu);
    s.textures.clear();
    destroy_image(s, s.white.gpu);
    for (auto &entry : s.sampler_cache) {
        if (entry.second != VK_NULL_HANDLE) vkDestroySampler(s.device, entry.second, nullptr);
    }
    s.sampler_cache.clear();
    for (auto &entry : s.pipelines) vkDestroyPipeline(s.device, entry.second, nullptr);
    s.pipelines.clear();
    if (s.geometry_mapped) vkUnmapMemory(s.device, s.geometry_memory);
    if (s.uniform_mapped) vkUnmapMemory(s.device, s.uniform_memory);
    if (s.readback_mapped) vkUnmapMemory(s.device, s.readback_memory);
    s.geometry_mapped = s.uniform_mapped = s.readback_mapped = nullptr;
    if (s.geometry) vkDestroyBuffer(s.device, s.geometry, nullptr);
    if (s.geometry_memory) vkFreeMemory(s.device, s.geometry_memory, nullptr);
    if (s.uniforms) vkDestroyBuffer(s.device, s.uniforms, nullptr);
    if (s.uniform_memory) vkFreeMemory(s.device, s.uniform_memory, nullptr);
    if (s.readback) vkDestroyBuffer(s.device, s.readback, nullptr);
    if (s.readback_memory) vkFreeMemory(s.device, s.readback_memory, nullptr);
    if (s.descriptor_pool) vkDestroyDescriptorPool(s.device, s.descriptor_pool, nullptr);
    if (s.set_layout) vkDestroyDescriptorSetLayout(s.device, s.set_layout, nullptr);
    if (s.pipeline_layout) vkDestroyPipelineLayout(s.device, s.pipeline_layout, nullptr);
    if (s.vertex_shader) vkDestroyShaderModule(s.device, s.vertex_shader, nullptr);
    if (s.fragment_shader) vkDestroyShaderModule(s.device, s.fragment_shader, nullptr);
    if (s.render_pass) vkDestroyRenderPass(s.device, s.render_pass, nullptr);
    if (s.command) vkFreeCommandBuffers(s.device, s.pool, 1u, &s.command);
    if (s.pool) vkDestroyCommandPool(s.device, s.pool, nullptr);
    if (s.device) vkDestroyDevice(s.device, nullptr);
    if (s.debug_messenger != VK_NULL_HANDLE && s.instance != VK_NULL_HANDLE) {
        const auto destroy_messenger = reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(
            vkGetInstanceProcAddr(s.instance, "vkDestroyDebugUtilsMessengerEXT"));
        if (destroy_messenger != nullptr)
            destroy_messenger(s.instance, s.debug_messenger, nullptr);
    }
    s.debug_messenger = VK_NULL_HANDLE;
    // After the device, before the instance.
    destroy_surface(s);
    if (s.instance) vkDestroyInstance(s.instance, nullptr);
    s.geometry = s.uniforms = s.readback = VK_NULL_HANDLE;
    s.geometry_memory = s.uniform_memory = s.readback_memory = VK_NULL_HANDLE;
    s.descriptor_pool = VK_NULL_HANDLE;
    s.set_layout = VK_NULL_HANDLE;
    s.pipeline_layout = VK_NULL_HANDLE;
    s.vertex_shader = s.fragment_shader = VK_NULL_HANDLE;
    s.render_pass = VK_NULL_HANDLE;
    s.command = VK_NULL_HANDLE;
    s.pool = VK_NULL_HANDLE;
    s.device = VK_NULL_HANDLE;
    s.debug_messenger = VK_NULL_HANDLE;
    s.instance = VK_NULL_HANDLE;
    s.swapchain_extension = false;
    s.enabled = false;
    s.pass_open = false;
    s.current_target = nullptr;
}

VKAPI_ATTR VkBool32 VKAPI_CALL vulkan_validation_message(
    VkDebugUtilsMessageSeverityFlagBitsEXT, VkDebugUtilsMessageTypeFlagsEXT,
    const VkDebugUtilsMessengerCallbackDataEXT *data, void *) {
    if (data != nullptr && data->pMessage != nullptr)
        std::cerr << "[vulkan] " << data->pMessage << '\n';
    return VK_FALSE;
}

bool run_offscreen_self_test(VulkanState &s, std::string &error) {
    struct Probe {
        VulkanState &state;
        GpuImage color{};
        GpuImage depth{};
        VkFramebuffer framebuffer{VK_NULL_HANDLE};
        VkBuffer buffer{VK_NULL_HANDLE};
        VkDeviceMemory memory{VK_NULL_HANDLE};
        ~Probe() { release(); }
        void release() noexcept {
            if (state.device == VK_NULL_HANDLE) return;
            if (framebuffer != VK_NULL_HANDLE) vkDestroyFramebuffer(state.device, framebuffer, nullptr);
            if (buffer != VK_NULL_HANDLE) vkDestroyBuffer(state.device, buffer, nullptr);
            if (memory != VK_NULL_HANDLE) vkFreeMemory(state.device, memory, nullptr);
            framebuffer = VK_NULL_HANDLE;
            buffer = VK_NULL_HANDLE;
            memory = VK_NULL_HANDLE;
            destroy_image(state, color);
            destroy_image(state, depth);
        }
    } probe{s};

    if (!create_image(s, probe.color, 1u, 1u, 1u, VK_FORMAT_R8G8B8A8_UNORM,
                      VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT |
                          VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_COLOR_BIT, error) ||
        !create_image(s, probe.depth, 1u, 1u, 1u, VK_FORMAT_D32_SFLOAT,
                      VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_DEPTH_BIT, error))
        return false;
    VkImageView attachments[]{probe.color.view, probe.depth.view};
    VkFramebufferCreateInfo framebuffer{};
    framebuffer.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    framebuffer.renderPass = s.render_pass;
    framebuffer.attachmentCount = 2u;
    framebuffer.pAttachments = attachments;
    framebuffer.width = 1u;
    framebuffer.height = 1u;
    framebuffer.layers = 1u;
    if (vkCreateFramebuffer(s.device, &framebuffer, nullptr, &probe.framebuffer) != VK_SUCCESS) {
        error = "Vulkan offscreen self-test framebuffer failed";
        return false;
    }
    void *mapped = nullptr;
    const VkMemoryPropertyFlags host =
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
    if (!create_buffer(s, 4u, VK_BUFFER_USAGE_TRANSFER_DST_BIT, host, probe.buffer, probe.memory,
                       &mapped, error))
        return false;

    if (vkResetCommandBuffer(s.command, 0) != VK_SUCCESS) {
        error = "vkResetCommandBuffer failed before the offscreen self-test";
        return false;
    }
    VkCommandBufferBeginInfo begin_info{};
    begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    if (vkBeginCommandBuffer(s.command, &begin_info) != VK_SUCCESS) {
        error = "Vulkan offscreen self-test could not begin a command buffer";
        return false;
    }
    transition_image(s.command, probe.color.image, probe.color.layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    VkClearColorValue blank{};
    VkImageSubresourceRange color_range{};
    color_range.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    color_range.levelCount = 1u;
    color_range.layerCount = 1u;
    vkCmdClearColorImage(s.command, probe.color.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &blank, 1u,
                         &color_range);
    clear_image(s.command, probe.depth.image, probe.depth.layout, true);
    transition_image(s.command, probe.color.image, probe.color.layout,
                     VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    transition_image(s.command, probe.depth.image, probe.depth.layout,
                     VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL, VK_IMAGE_ASPECT_DEPTH_BIT, 1u);
    VkRenderPassBeginInfo pass{};
    pass.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    pass.renderPass = s.render_pass;
    pass.framebuffer = probe.framebuffer;
    pass.renderArea.extent = {1u, 1u};
    vkCmdBeginRenderPass(s.command, &pass, VK_SUBPASS_CONTENTS_INLINE);
    VkClearAttachment clear{};
    clear.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    clear.clearValue.color.float32[0] = 32.0f / 255.0f;
    clear.clearValue.color.float32[1] = 64.0f / 255.0f;
    clear.clearValue.color.float32[2] = 96.0f / 255.0f;
    clear.clearValue.color.float32[3] = 1.0f;
    VkClearRect rect{};
    rect.rect.extent = {1u, 1u};
    rect.layerCount = 1u;
    vkCmdClearAttachments(s.command, 1u, &clear, 1u, &rect);
    vkCmdEndRenderPass(s.command);
    transition_image(s.command, probe.color.image, probe.color.layout, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    VkBufferImageCopy copy{};
    copy.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    copy.imageSubresource.layerCount = 1u;
    copy.imageExtent = {1u, 1u, 1u};
    vkCmdCopyImageToBuffer(s.command, probe.color.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, probe.buffer, 1u,
                           &copy);
    if (vkEndCommandBuffer(s.command) != VK_SUCCESS) {
        error = "Vulkan offscreen self-test command buffer failed";
        return false;
    }
    VkSubmitInfo submit{};
    submit.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &s.command;
    if (vkQueueSubmit(s.queue, 1u, &submit, VK_NULL_HANDLE) != VK_SUCCESS ||
        vkQueueWaitIdle(s.queue) != VK_SUCCESS) {
        error = "Vulkan offscreen self-test submit failed";
        return false;
    }
    vkResetCommandBuffer(s.command, 0);
    const auto *bytes = static_cast<const std::uint8_t *>(mapped);
    if (bytes[0] != 32u || bytes[1] != 64u || bytes[2] != 96u || bytes[3] != 255u) {
        error = "Vulkan offscreen self-test read " + std::to_string(bytes[0]) + "," +
                std::to_string(bytes[1]) + "," + std::to_string(bytes[2]) + "," +
                std::to_string(bytes[3]) + " instead of 32,64,96,255";
        return false;
    }
    s.report.offscreen_self_test_passed = true;
    s.report.offscreen_readback_bytes = 4u;
    s.report.offscreen_center_rgba = 32u | (64u << 8u) | (96u << 16u) | (255u << 24u);
    return true;
}

bool create_backend(VulkanState &s, std::string &error) {
    const InternalResolutionDimensions dims = resolve_internal_resolution(lcs_render_configuration().rendering);
    s.target_width = std::max<std::uint32_t>(1u, dims.width);
    s.target_height = std::max<std::uint32_t>(1u, dims.height);
    VkApplicationInfo application{};
    application.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    application.pApplicationName = "LCSNative";
    application.apiVersion = VK_API_VERSION_1_0;
    VkInstanceCreateInfo instance_info{};
    instance_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_info.pApplicationInfo = &application;
    const char *validation = std::getenv("LCS_VULKAN_VALIDATION");
    const bool enable_validation = validation != nullptr && *validation != '\0' && *validation != '0';
    const char *layer = "VK_LAYER_KHRONOS_validation";
    const char *debug_extension = VK_EXT_DEBUG_UTILS_EXTENSION_NAME;
    std::vector<const char *> instance_extensions;
    bool sdl_surface_extensions = false;
    if (s.window != nullptr) {
        unsigned int sdl_count = 0u;
        if (SDL_Vulkan_GetInstanceExtensions(s.window, &sdl_count, nullptr) == SDL_TRUE && sdl_count > 0u) {
            instance_extensions.resize(sdl_count);
            if (SDL_Vulkan_GetInstanceExtensions(s.window, &sdl_count, instance_extensions.data()) == SDL_TRUE) {
                instance_extensions.resize(sdl_count);
                sdl_surface_extensions = true;
            } else {
                instance_extensions.clear();
            }
        }
        if (!sdl_surface_extensions)
            std::cerr << "[vulkan] SDL_Vulkan_GetInstanceExtensions failed: " << SDL_GetError()
                      << "; using the CPU readback\n";
    }
    VkDebugUtilsMessengerCreateInfoEXT messenger_info{};
    messenger_info.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
    messenger_info.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                                     VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
    messenger_info.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                                 VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                                 VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
    messenger_info.pfnUserCallback = vulkan_validation_message;
    if (enable_validation) {
        bool have_debug = false;
        for (const char *name : instance_extensions) {
            if (std::strcmp(name, debug_extension) == 0) have_debug = true;
        }
        if (!have_debug) instance_extensions.push_back(debug_extension);
        instance_info.enabledLayerCount = 1u;
        instance_info.ppEnabledLayerNames = &layer;
        instance_info.pNext = &messenger_info;
    }
    if (!instance_extensions.empty()) {
        instance_info.enabledExtensionCount = static_cast<std::uint32_t>(instance_extensions.size());
        instance_info.ppEnabledExtensionNames = instance_extensions.data();
    }
    if (vkCreateInstance(&instance_info, nullptr, &s.instance) != VK_SUCCESS) {
        error = "vkCreateInstance failed";
        return false;
    }
    s.report.instance_created = true;
    if (enable_validation) {
        const auto create_messenger = reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(
            vkGetInstanceProcAddr(s.instance, "vkCreateDebugUtilsMessengerEXT"));
        if (create_messenger == nullptr ||
            create_messenger(s.instance, &messenger_info, nullptr, &s.debug_messenger) != VK_SUCCESS) {
            error = "Vulkan validation messenger failed";
            return false;
        }
        std::cerr << "[vulkan] validation layer enabled\n";
    }
    if (sdl_surface_extensions) {
        std::string surface_error;
        if (!create_window_surface(s, surface_error))
            std::cerr << "[vulkan] " << surface_error << "; using the CPU readback\n";
    }
    if (!select_present_device(s, error)) return false;
    VkPhysicalDeviceProperties device_properties{};
    vkGetPhysicalDeviceProperties(s.physical, &device_properties);
    s.uniform_align = std::max<std::uint32_t>(
        kUniformAlign, static_cast<std::uint32_t>(device_properties.limits.minUniformBufferOffsetAlignment));
    s.max_sampler_lod_bias = std::max(2.0f, device_properties.limits.maxSamplerLodBias);
    const float priority = 1.0f;
    VkDeviceQueueCreateInfo queue_info{};
    queue_info.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    queue_info.queueFamilyIndex = s.queue_family;
    queue_info.queueCount = 1u;
    queue_info.pQueuePriorities = &priority;
    VkPhysicalDeviceFeatures available_features{};
    vkGetPhysicalDeviceFeatures(s.physical, &available_features);
    VkPhysicalDeviceFeatures enabled_features{};
    if (available_features.samplerAnisotropy) {
        enabled_features.samplerAnisotropy = VK_TRUE;
        s.sampler_anisotropy = true;
        s.max_sampler_anisotropy = std::max(1.0f, device_properties.limits.maxSamplerAnisotropy);
    }
    s.swapchain_extension = s.surface != VK_NULL_HANDLE && device_has_swapchain(s.physical);
    const char *swapchain_extension = VK_KHR_SWAPCHAIN_EXTENSION_NAME;
    if (s.surface != VK_NULL_HANDLE && !s.swapchain_extension) {
        std::cerr << "[vulkan] device has no swapchain extension; using the CPU readback\n";
        destroy_surface(s);
    }
    VkDeviceCreateInfo device_info{};
    device_info.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    device_info.queueCreateInfoCount = 1u;
    device_info.pQueueCreateInfos = &queue_info;
    device_info.pEnabledFeatures = &enabled_features;
    if (s.swapchain_extension) {
        device_info.enabledExtensionCount = 1u;
        device_info.ppEnabledExtensionNames = &swapchain_extension;
    }
    if (vkCreateDevice(s.physical, &device_info, nullptr, &s.device) != VK_SUCCESS) {
        error = "vkCreateDevice failed";
        return false;
    }
    vkGetDeviceQueue(s.device, s.queue_family, 0u, &s.queue);
    s.report.device_created = true;
    VkCommandPoolCreateInfo pool_info{};
    pool_info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    pool_info.queueFamilyIndex = s.queue_family;
    pool_info.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    if (vkCreateCommandPool(s.device, &pool_info, nullptr, &s.pool) != VK_SUCCESS) {
        error = "vkCreateCommandPool failed";
        return false;
    }
    VkCommandBufferAllocateInfo command_info{};
    command_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    command_info.commandPool = s.pool;
    command_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_info.commandBufferCount = 1u;
    if (vkAllocateCommandBuffers(s.device, &command_info, &s.command) != VK_SUCCESS) {
        error = "vkAllocateCommandBuffers failed";
        return false;
    }
    s.report.command_pool_created = true;

    VkAttachmentDescription attachments[2]{};
    attachments[0].format = VK_FORMAT_R8G8B8A8_UNORM;
    attachments[0].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[0].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    attachments[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[0].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    attachments[0].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    attachments[1].format = VK_FORMAT_D32_SFLOAT;
    attachments[1].samples = VK_SAMPLE_COUNT_1_BIT;
    attachments[1].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    attachments[1].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachments[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachments[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachments[1].initialLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    attachments[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    VkAttachmentReference color_ref{0u, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkAttachmentReference depth_ref{1u, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL};
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1u;
    subpass.pColorAttachments = &color_ref;
    subpass.pDepthStencilAttachment = &depth_ref;
    VkSubpassDependency dependency{};
    dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
    dependency.dstSubpass = 0u;
    dependency.srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT |
                              VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
    dependency.dstStageMask = dependency.srcStageMask;
    dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT | VK_ACCESS_COLOR_ATTACHMENT_READ_BIT |
                               VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT |
                               VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT;
    VkRenderPassCreateInfo pass_info{};
    pass_info.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    pass_info.attachmentCount = 2u;
    pass_info.pAttachments = attachments;
    pass_info.subpassCount = 1u;
    pass_info.pSubpasses = &subpass;
    pass_info.dependencyCount = 1u;
    pass_info.pDependencies = &dependency;
    if (vkCreateRenderPass(s.device, &pass_info, nullptr, &s.render_pass) != VK_SUCCESS) {
        error = "vkCreateRenderPass failed";
        return false;
    }
    s.report.render_pass_created = true;

    VkDescriptorSetLayoutBinding bindings[2]{};
    bindings[0].binding = 0u;
    bindings[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
    bindings[0].descriptorCount = 1u;
    bindings[0].stageFlags = VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT;
    bindings[1].binding = 1u;
    bindings[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    bindings[1].descriptorCount = 1u;
    bindings[1].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
    VkDescriptorSetLayoutCreateInfo set_info{};
    set_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    set_info.bindingCount = 2u;
    set_info.pBindings = bindings;
    if (vkCreateDescriptorSetLayout(s.device, &set_info, nullptr, &s.set_layout) != VK_SUCCESS) {
        error = "vkCreateDescriptorSetLayout failed";
        return false;
    }
    s.report.texture_descriptor_layout_created = true;
    VkPipelineLayoutCreateInfo layout_info{};
    layout_info.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    layout_info.setLayoutCount = 1u;
    layout_info.pSetLayouts = &s.set_layout;
    if (vkCreatePipelineLayout(s.device, &layout_info, nullptr, &s.pipeline_layout) != VK_SUCCESS) {
        error = "vkCreatePipelineLayout failed";
        return false;
    }
    VkDescriptorPoolSize pool_sizes[2]{};
    pool_sizes[0] = {VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC, kMaxDescriptorSets};
    pool_sizes[1] = {VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, kMaxDescriptorSets};
    VkDescriptorPoolCreateInfo descriptor_pool_info{};
    descriptor_pool_info.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    descriptor_pool_info.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    descriptor_pool_info.maxSets = kMaxDescriptorSets;
    descriptor_pool_info.poolSizeCount = 2u;
    descriptor_pool_info.pPoolSizes = pool_sizes;
    if (vkCreateDescriptorPool(s.device, &descriptor_pool_info, nullptr, &s.descriptor_pool) != VK_SUCCESS) {
        error = "vkCreateDescriptorPool failed";
        return false;
    }
    s.report.texture_descriptor_pool_created = true;

    auto shader_module = [&](const std::uint32_t *code, std::size_t words, VkShaderModule &module) {
        VkShaderModuleCreateInfo shader{};
        shader.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
        shader.codeSize = words * sizeof(std::uint32_t);
        shader.pCode = code;
        return vkCreateShaderModule(s.device, &shader, nullptr, &module) == VK_SUCCESS;
    };
    if (!shader_module(kVulkanGeVertexSpirv, std::size(kVulkanGeVertexSpirv), s.vertex_shader) ||
        !shader_module(kVulkanGeFragmentSpirv, std::size(kVulkanGeFragmentSpirv), s.fragment_shader)) {
        error = "vkCreateShaderModule failed";
        return false;
    }
    s.report.shader_modules_created = true;
    s.report.textured_shader_modules_created = true;

    const VkDeviceSize geometry_size = kGeometryUploadCapacity;
    const VkDeviceSize uniform_size = static_cast<VkDeviceSize>(kMaxDraws) * s.uniform_align;
    const VkMemoryPropertyFlags host = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
    if (!create_buffer(s, geometry_size,
                       VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
                       host, s.geometry, s.geometry_memory, &s.geometry_mapped, error) ||
        !create_buffer(s, uniform_size, VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT, host,
                       s.uniforms, s.uniform_memory, &s.uniform_mapped, error))
        return false;
    s.report.transfer_buffer_created = true;
    s.report.transfer_memory_mapped = true;
    s.report.upload_capacity_bytes = geometry_size;
    s.report.offscreen_width = s.target_width;
    s.report.offscreen_height = s.target_height;
    s.report.memory_type_index = 0u;

    std::vector<std::byte> white(4u, std::byte{0xFF});
    GeGpuDrawDescriptor white_draw{};
    white_draw.texture_mag_linear = true;
    white_draw.texture_min_linear = true;
    s.white.gpu.sampler = make_sampler(s, white_draw);
    if (!create_image(s, s.white.gpu, 1u, 1u, 1u, VK_FORMAT_R8G8B8A8_UNORM,
                      VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
                      VK_IMAGE_ASPECT_COLOR_BIT, error))
        return false;
    VkCommandBufferBeginInfo begin{};
    begin.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    vkBeginCommandBuffer(s.command, &begin);
    Staging staging{};
    void *mapped = nullptr;
    if (!create_buffer(s, 4u, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, host, staging.buffer, staging.memory,
                       &mapped, error))
        return false;
    std::memcpy(mapped, white.data(), 4u);
    transition_image(s.command, s.white.gpu.image, s.white.gpu.layout, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                     VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    VkBufferImageCopy region{};
    region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.layerCount = 1u;
    region.imageExtent = {1u, 1u, 1u};
    vkCmdCopyBufferToImage(s.command, staging.buffer, s.white.gpu.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                           1u, &region);
    transition_image(s.command, s.white.gpu.image, s.white.gpu.layout,
                     VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    vkEndCommandBuffer(s.command);
    VkSubmitInfo submit{};
    submit.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit.commandBufferCount = 1u;
    submit.pCommandBuffers = &s.command;
    if (vkQueueSubmit(s.queue, 1u, &submit, VK_NULL_HANDLE) != VK_SUCCESS ||
        vkQueueWaitIdle(s.queue) != VK_SUCCESS) {
        error = "Vulkan white-texture upload failed";
        return false;
    }
    vkDestroyBuffer(s.device, staging.buffer, nullptr);
    vkFreeMemory(s.device, staging.memory, nullptr);
    if (!write_descriptor(s, s.white.gpu, error)) return false;
    s.report.transfer_self_test_passed = true;
    if (!run_offscreen_self_test(s, error)) return false;
    if (s.surface != VK_NULL_HANDLE && s.swapchain_extension) {
        std::string present_error;
        if (!ensure_swapchain(s, present_error) || s.swapchain == VK_NULL_HANDLE) {
            std::cerr << "[vulkan] " << (present_error.empty() ? "swapchain unavailable" : present_error)
                      << "; using the CPU readback\n";
            destroy_present_device(s);
            destroy_surface(s);
        }
    }
    if (s.swapchain == VK_NULL_HANDLE) {
        const VkDeviceSize readback_size = static_cast<VkDeviceSize>(s.target_width) * s.target_height * 4u;
        if (!create_buffer(s, readback_size, VK_BUFFER_USAGE_TRANSFER_DST_BIT, host,
                           s.readback, s.readback_memory, &s.readback_mapped, error, true))
            return false;
        std::cerr << "[vulkan] frame readback " << (readback_size / (1024u * 1024u)) << " MiB\n";
    }
    s.report.frames_in_flight_capacity = 2u;
    s.vertices.reserve(1u << 16u);
    return true;
}

}  // namespace

bool initialize_ge_gpu_backend(std::string &error) {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    destroy_backend(s);
    s.report = {};
    s.display_framebuffer = 0u;
    const RenderingConfiguration &rendering = lcs_render_configuration().rendering;
    const bool requested_gpu = rendering.backend == RenderingBackend::DirectX12 ||
                               rendering.backend == RenderingBackend::Vulkan;
    s.report.requested = requested_gpu ? GeGpuBackendKind::Vulkan : GeGpuBackendKind::Software;
    s.report.active = GeGpuBackendKind::Software;
    if (!requested_gpu) {
        s.report.message = "Software GE backend active";
        error.clear();
        return true;
    }
    if (!rendering.dx12_ge_color) {
        s.report.message = "Vulkan GE is built, but NativeGE=false, so the software rasterizer stays active";
        error.clear();
        return true;
    }
    if (!create_backend(s, error)) {
        const std::string native_error = error;
        runtime_log_error("vulkan ge initialize", native_error);
        destroy_backend(s);
        s.report.requested = GeGpuBackendKind::Vulkan;
        s.report.active = GeGpuBackendKind::Software;
        s.report.message = "Vulkan GE failed; using the software GE: " + native_error;
        const char *strict_ge = std::getenv("PSPRECOMP_GE_STRICT");
        const char *strict = (strict_ge != nullptr && *strict_ge != '\0')
            ? strict_ge : std::getenv("PSPRECOMP_DX12_GE_STRICT");
        const bool strict_mode = strict != nullptr && *strict != '\0' && *strict != '0';
        error = native_error;
        return !strict_mode;
    }
    s.enabled = true;
    s.report.active = GeGpuBackendKind::Vulkan;
    s.report.loader_opened = true;
    s.report.message = rendering.backend == RenderingBackend::DirectX12
        ? "Vulkan GE backend active (Backend=DirectX12 selects Vulkan on Linux)"
        : "Vulkan GE backend active";
    s.report.offscreen_width = s.target_width;
    s.report.offscreen_height = s.target_height;
    error.clear();
    return true;
}

void shutdown_ge_gpu_backend() noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    destroy_backend(s);
    s.report = {};
    s.vertices.clear();
    s.indices.clear();
    s.batches.clear();
    s.frame_rgba.clear();
}

bool ge_gpu_backend_active() noexcept { return state().enabled; }
bool ge_gpu_backend_transfer_ready() noexcept { return state().enabled; }
bool ge_gpu_backend_graphics_ready() noexcept { return state().enabled; }

void ge_gpu_backend_record_draw(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled) return;
    ++s.report.draw_calls;
    s.report.vertices += draw.vertex_count;
    if (draw.texture_enabled) ++s.report.textured_draw_calls;
    const std::uint32_t target = draw.framebuffer_address & 0x001FFFF0u;
    if (draw.framebuffer_stride != 0u || target == s.display_framebuffer) {
        std::string error;
        if (!ensure_target(s, target, error) && !error.empty())
            runtime_log_error("vulkan framebuffer target", error);
        const std::uint32_t logical_width = target == s.display_framebuffer
            ? s.display_logical_width
            : std::max<std::uint32_t>(1u, draw.framebuffer_stride != 0u
                  ? draw.framebuffer_stride
                  : static_cast<std::uint32_t>(std::max(1, draw.scissor_x1 + 1)));
        const std::uint32_t logical_height = target == s.display_framebuffer
            ? s.display_logical_height
            : static_cast<std::uint32_t>(std::max(1, draw.scissor_y1 + 1));
        note_logical_size(s, target, logical_width, logical_height);
        s.last_registered_framebuffer_target = target;
    }
}

void ge_gpu_backend_observe_camera(const std::array<float, 12> &, const std::array<float, 16> &,
                                   const std::array<float, 6> &, const std::array<float, 3> &,
                                   const GeGpuDrawDescriptor &, std::uint32_t) noexcept {}

bool ge_gpu_backend_stage_vertices(const GeGpuDrawDescriptor &, std::span<const GeGpuVertex> vertices) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled) return false;
    ++s.report.staged_draw_calls;
    s.report.staged_vertices += vertices.size();
    s.report.staged_bytes += vertices.size_bytes();
    return true;
}

bool ge_gpu_backend_texture_needed(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled || !draw.texture_enabled || draw.texture_format > 10u ||
        draw.texture_width == 0u || draw.texture_height == 0u) return false;
    if (find_target(s, draw.texture_address) != nullptr) {
        ++s.report.texture_cache_hits;
        return false;
    }
    ++s.report.texture_decode_requests;
    const auto found = s.textures.find(texture_key(draw));
    if (found == s.textures.end()) return true;
    found->second.signature_epoch = s.frame_epoch;
    found->second.last_used_epoch = s.frame_epoch;
    if (draw.texture_content_signature != 0u &&
        found->second.descriptor.texture_content_signature != draw.texture_content_signature)
        return true;
    ++s.report.texture_cache_hits;
    return false;
}

void ge_gpu_backend_prepare_texture_keys(GeGpuDrawDescriptor &draw) noexcept {
    if (!draw.texture_enabled) {
        draw.texture_cache_key_hint = 0u;
        draw.texture_image_key_hint = 0u;
        return;
    }
    const std::uint64_t key = texture_key(draw);
    draw.texture_cache_key_hint = key;
    draw.texture_image_key_hint = key;
}

bool ge_gpu_backend_texture_signature_needed(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled || !draw.texture_enabled || draw.texture_width == 0u || draw.texture_height == 0u)
        return false;
    if (find_target(s, draw.texture_address) != nullptr) return false;
    const auto found = s.textures.find(texture_key(draw));
    return found == s.textures.end() || found->second.signature_epoch != s.frame_epoch;
}

bool ge_gpu_backend_is_framebuffer_feedback_texture(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return s.enabled && draw.texture_enabled && find_target(s, draw.texture_address) != nullptr;
}

GeGpuWidescreenHud ge_gpu_backend_widescreen_hud(const GeGpuDrawDescriptor &draw) noexcept {
    GeGpuWidescreenHud hud{};
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled) return hud;
    const LcsConfiguration &config = lcs_render_configuration();
    if (!config.initialized || !config.widescreen.enabled) return hud;
    const float shrink = widescreen_render_stretch();
    if (!std::isfinite(shrink) || shrink <= 0.0f || std::abs(shrink - 1.0f) < 1.0e-5f) return hud;
    std::uint32_t logical_width = kReferenceWidth;
    if (const Target *target = find_target(s, draw.framebuffer_address))
        logical_width = std::max<std::uint32_t>(1u, target->logical_width);
    hud.shrink = shrink;
    hud.display_scale_x = static_cast<float>(kReferenceWidth) / static_cast<float>(logical_width);
    hud.source_center = static_cast<float>(logical_width) * 0.5f;
    return hud;
}

void ge_gpu_backend_note_through_extent(const GeGpuDrawDescriptor &, float, float) noexcept {}
bool ge_gpu_backend_adopt_shared_texture(const GeGpuDrawDescriptor &) noexcept { return false; }

bool ge_gpu_backend_texture_available(const GeGpuDrawDescriptor &draw) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled || !draw.texture_enabled) return false;
    if (find_target(s, draw.texture_address) != nullptr) return true;
    const auto found = s.textures.find(texture_key(draw));
    if (found == s.textures.end() || found->second.gpu.image == VK_NULL_HANDLE) return false;
    found->second.last_used_epoch = s.frame_epoch;
    return !found->second.dirty || !found->second.rgba8.empty();
}

bool ge_gpu_backend_upload_decoded_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width,
                                           std::uint32_t height, std::span<const std::byte> rgba) noexcept {
    if (rgba.empty()) return false;
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return prepare_texture(s, draw, width, height, 1u, std::vector<std::byte>(rgba.begin(), rgba.end()));
}

bool ge_gpu_backend_upload_decoded_texture_chain(const GeGpuDrawDescriptor &draw,
                                                 std::span<const GeGpuDecodedMipLevel> levels) noexcept {
    if (levels.empty() || levels.size() > 8u || levels.front().width == 0u || levels.front().height == 0u)
        return false;
    std::vector<std::byte> packed;
    std::uint32_t width = levels.front().width;
    std::uint32_t height = levels.front().height;
    for (const GeGpuDecodedMipLevel &level : levels) {
        const std::size_t bytes = static_cast<std::size_t>(level.width) * level.height * 4u;
        if (level.rgba8.size() != bytes) return false;
        packed.insert(packed.end(), level.rgba8.begin(), level.rgba8.end());
    }
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return prepare_texture(s, draw, width, height, static_cast<std::uint32_t>(levels.size()), std::move(packed));
}

bool ge_gpu_backend_upload_decoded_texture_chain_packed(const GeGpuDrawDescriptor &draw,
                                                        std::uint32_t width, std::uint32_t height,
                                                        std::uint32_t mip_levels,
                                                        std::vector<std::byte> packed) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return prepare_texture(s, draw, width, height, mip_levels, std::move(packed));
}

bool ge_gpu_backend_upload_shared_texture(const GeGpuDrawDescriptor &draw, std::uint32_t width, std::uint32_t height,
                                          std::shared_ptr<const std::vector<std::byte>> rgba8, std::uint32_t,
                                          std::shared_ptr<const std::vector<std::byte>>) noexcept {
    // The full-size image only: the smaller levels of a pack image are used by the DirectX 12 backend so far.
    if (!rgba8) return false;
    return ge_gpu_backend_upload_decoded_texture_chain_packed(draw, width, height, 1u, std::vector<std::byte>(*rgba8));
}

bool ge_gpu_backend_copy_last_texture_rgba(std::span<std::byte> destination) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (s.last_texture_rgba.empty() || destination.size() < s.last_texture_rgba.size()) return false;
    std::memcpy(destination.data(), s.last_texture_rgba.data(), s.last_texture_rgba.size());
    return true;
}

void ge_gpu_backend_accumulate_color_triangles(const GeGpuDrawDescriptor &draw,
                                               std::span<const GeGpuVertex> triangle_vertices) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled || triangle_vertices.empty() || triangle_vertices.size() % 3u != 0u) return;
    const std::size_t used = s.vertices.size() * sizeof(UploadVertex) + s.indices.size() * sizeof(std::uint32_t);
    if (used + triangle_vertices.size() * sizeof(UploadVertex) > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        return;
    }
    const bool sampled = draw.texture_enabled && ge_gpu_backend_texture_available(draw);
    const std::uint32_t first = static_cast<std::uint32_t>(s.vertices.size());
    // Grown once and written in place, as in the DirectX 12 backend.
    s.vertices.resize(first + triangle_vertices.size());
    UploadVertex *out = s.vertices.data() + first;
    for (const GeGpuVertex &source : triangle_vertices) {
        UploadVertex vertex = make_upload_vertex(source);
        if (sampled && draw.texture_width != 0u && draw.texture_height != 0u) {
            vertex.u /= static_cast<float>(draw.texture_width);
            vertex.v /= static_cast<float>(draw.texture_height);
        }
        *out++ = vertex;
    }
    Batch batch{};
    batch.draw = draw;
    batch.first_vertex = first;
    batch.vertex_count = static_cast<std::uint32_t>(triangle_vertices.size());
    batch.feedback_address = draw.texture_address & 0x001FFFF0u;
    batch.framebuffer_feedback = draw.texture_enabled && find_target(s, batch.feedback_address) != nullptr;
    s.batches.push_back(batch);
    ++s.report.game_draw_calls;
    s.report.game_triangles += triangle_vertices.size() / 3u;
    s.report.game_vertices += triangle_vertices.size();
    if (draw.texture_enabled && sampled) ++s.report.textured_game_draw_calls;
    else if (draw.texture_enabled) ++s.report.game_textured_draws_without_texture;
}

void ge_gpu_backend_accumulate_hardware_triangles(
    const GeGpuDrawDescriptor &draw, const GeGpuHardwareTransform &transform,
    std::span<const GeGpuVertex> vertices, std::span<const std::uint32_t> triangle_indices) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled || vertices.empty()) return;
    const bool indexed = !triangle_indices.empty();
    const std::size_t emitted = indexed ? triangle_indices.size() : vertices.size();
    if (emitted == 0u || (transform.primitive == 4u ? emitted < 3u : (emitted % 3u) != 0u)) return;
    const std::size_t append = indexed ? vertices.size() : emitted;
    const std::size_t extra_indices = indexed ? triangle_indices.size() : 0u;
    const std::size_t used = s.vertices.size() * sizeof(UploadVertex) + s.indices.size() * sizeof(std::uint32_t);
    if (used + append * sizeof(UploadVertex) + extra_indices * sizeof(std::uint32_t) > kGeometryUploadCapacity) {
        ++s.report.game_vertex_overflows;
        return;
    }
    const std::uint32_t first_vertex = static_cast<std::uint32_t>(s.vertices.size());
    const std::uint32_t first_index = static_cast<std::uint32_t>(s.indices.size());
    s.vertices.resize(first_vertex + vertices.size());  // grown once and written in place
    UploadVertex *out = s.vertices.data() + first_vertex;
    for (const GeGpuVertex &source : vertices) *out++ = make_upload_vertex(source);
    if (indexed) {
        s.indices.resize(first_index + triangle_indices.size());
        std::uint32_t *index_out = s.indices.data() + first_index;
        for (std::uint32_t index : triangle_indices) {
            if (index >= vertices.size()) {
                s.vertices.resize(first_vertex);
                s.indices.resize(first_index);
                ++s.report.game_vertex_overflows;
                return;
            }
            *index_out++ = index;
        }
    }
    const std::uint32_t logical = std::max<std::uint32_t>(1u, transform.logical_prim_batches);
    Batch batch{};
    batch.draw = draw;
    batch.first_vertex = first_vertex;
    batch.vertex_count = static_cast<std::uint32_t>(append);
    batch.first_index = first_index;
    batch.index_count = indexed ? static_cast<std::uint32_t>(triangle_indices.size()) : 0u;
    batch.indexed = indexed;
    batch.logical_draw_count = logical;
    batch.hardware_transform = true;
    batch.transform = transform;
    batch.feedback_address = draw.texture_address & 0x001FFFF0u;
    batch.framebuffer_feedback = draw.texture_enabled && find_target(s, batch.feedback_address) != nullptr;
    s.batches.push_back(batch);
    s.report.game_draw_calls += logical;
    s.report.game_triangles += transform.primitive == 4u
        ? (emitted > 2u ? emitted - 2u : 0u) : emitted / 3u;
    s.report.game_vertices += emitted;
    s.report.hw_transform_draw_calls += logical;
    s.report.hw_transform_vertices += vertices.size();
    const bool sampled = draw.texture_enabled && ge_gpu_backend_texture_available(draw);
    if (draw.texture_enabled && sampled) s.report.textured_game_draw_calls += logical;
    else if (draw.texture_enabled) s.report.game_textured_draws_without_texture += logical;
}

bool ge_gpu_backend_accumulate_hardware_packed_0115(
    const GeGpuDrawDescriptor &draw, const GeGpuHardwareTransform &transform,
    std::span<const std::byte> packed_vertices, std::uint32_t vertex_count,
    std::span<const std::uint32_t> triangle_indices) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled || vertex_count == 0u ||
        packed_vertices.size() != static_cast<std::size_t>(vertex_count) * sizeof(Packed0115))
        return false;
    std::vector<GeGpuVertex> decoded(vertex_count);
    for (std::uint32_t index = 0u; index < vertex_count; ++index) {
        Packed0115 packed{};
        std::memcpy(&packed, packed_vertices.data() + static_cast<std::size_t>(index) * sizeof(Packed0115),
                    sizeof(Packed0115));
        const UploadVertex upload = decode_packed(packed);
        GeGpuVertex vertex{};
        vertex.x = upload.x;
        vertex.y = upload.y;
        vertex.z = upload.z;
        vertex.w = upload.w;
        vertex.rgba = upload.rgba;
        vertex.u = upload.u;
        vertex.v = upload.v;
        vertex.q = upload.q;
        vertex.fog_factor = upload.fog_factor;
        decoded[index] = vertex;
    }
    ge_gpu_backend_accumulate_hardware_triangles(draw, transform, decoded, triangle_indices);
    return true;
}

void ge_gpu_backend_set_native_window(void *native) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    auto *window = static_cast<SDL_Window *>(native);
    if (window == s.window && s.swapchain != VK_NULL_HANDLE) return;
    const bool window_changed = window != s.window;
    s.window = window;
    if (s.device == VK_NULL_HANDLE) return;
    if (window_changed && (s.swapchain != VK_NULL_HANDLE || s.surface != VK_NULL_HANDLE)) {
        vkDeviceWaitIdle(s.device);
        destroy_present_device(s);
        destroy_surface(s);
    }
    if (window == nullptr || !s.swapchain_extension || s.swapchain != VK_NULL_HANDLE) return;
    std::string error;
    if (!create_window_surface(s, error)) {
        std::cerr << "[vulkan] " << error << "; using the CPU readback\n";
        return;
    }
    VkBool32 supported = VK_FALSE;
    if (vkGetPhysicalDeviceSurfaceSupportKHR(s.physical, s.queue_family, s.surface, &supported) != VK_SUCCESS ||
        supported != VK_TRUE) {
        std::cerr << "[vulkan] graphics queue cannot present; using the CPU readback\n";
        destroy_surface(s);
        return;
    }
    if (!ensure_swapchain(s, error) || s.swapchain == VK_NULL_HANDLE) {
        std::cerr << "[vulkan] " << (error.empty() ? "swapchain unavailable" : error)
                  << "; using the CPU readback\n";
        destroy_present_device(s);
        destroy_surface(s);
        return;
    }
    // The swapchain replaced this copy.
    if (!s.submit_pending && s.readback != VK_NULL_HANDLE) {
        if (s.readback_mapped != nullptr) vkUnmapMemory(s.device, s.readback_memory);
        vkDestroyBuffer(s.device, s.readback, nullptr);
        if (s.readback_memory != VK_NULL_HANDLE) vkFreeMemory(s.device, s.readback_memory, nullptr);
        s.readback = VK_NULL_HANDLE;
        s.readback_memory = VK_NULL_HANDLE;
        s.readback_mapped = nullptr;
        s.pending_readback = false;
        s.pending_readback_bytes = 0u;
    }
}

void ge_gpu_backend_set_display_framebuffer(std::uint32_t address, std::uint32_t logical_width,
                                            std::uint32_t logical_height) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    s.display_framebuffer = address & 0x001FFFF0u;
    s.display_logical_width = logical_width != 0u ? logical_width : kReferenceWidth;
    s.display_logical_height = logical_height != 0u ? logical_height : kReferenceHeight;
    if (!s.enabled) return;
    std::string error;
    if (!ensure_target(s, s.display_framebuffer, error) && !error.empty())
        runtime_log_error("vulkan display framebuffer", error);
    note_logical_size(s, s.display_framebuffer, s.display_logical_width, s.display_logical_height);
}

void ge_gpu_backend_display_logical_size(std::uint32_t &width, std::uint32_t &height) noexcept {
    const VulkanState &s = state();
    width = s.display_logical_width;
    height = s.display_logical_height;
}

bool ge_gpu_backend_finish_color_frame(std::uint64_t vblank) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    const bool publish = ge_finish_shows_this_frame();
    bool copied_previous = false;
    const auto shown = [&]() {
        const bool show = copied_previous || s.readback_latched;
        if (publish) s.readback_latched = false;
        return show;
    };
    if (s.enabled && !complete_pending_submit(s, copied_previous)) {
        s.vertices.clear();
        s.indices.clear();
        s.batches.clear();
        ++s.frame_epoch;
        return false;
    }
    if (!s.enabled || s.batches.empty()) {
        s.vertices.clear();
        s.indices.clear();
        s.batches.clear();
        ++s.frame_epoch;
        return shown();
    }
    std::string error;
    const std::size_t vertex_bytes = s.vertices.size() * sizeof(UploadVertex);
    const std::size_t index_bytes = s.indices.size() * sizeof(std::uint32_t);
    if (vertex_bytes + index_bytes > kGeometryUploadCapacity) {
        log_frame_failure(s, "geometry upload overflow", VK_ERROR_OUT_OF_DEVICE_MEMORY);
        ++s.report.game_vertex_overflows;
        s.vertices.clear();
        s.indices.clear();
        s.batches.clear();
        ++s.frame_epoch;
        return shown();
    }
    if (s.geometry_mapped != nullptr) {
        if (!s.vertices.empty())
            std::memcpy(s.geometry_mapped, s.vertices.data(), vertex_bytes);
        if (!s.indices.empty())
            std::memcpy(static_cast<std::byte *>(s.geometry_mapped) + vertex_bytes, s.indices.data(), index_bytes);
    }
    VkCommandBufferBeginInfo begin{};
    begin.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    const VkResult reset = vkResetCommandBuffer(s.command, 0);
    if (reset != VK_SUCCESS) log_frame_failure(s, "vkResetCommandBuffer", reset);
    const VkResult begun = reset == VK_SUCCESS ? vkBeginCommandBuffer(s.command, &begin) : reset;
    if (begun != VK_SUCCESS) {
        log_frame_failure(s, "vkBeginCommandBuffer", begun);
        s.vertices.clear();
        s.indices.clear();
        s.batches.clear();
        return shown();
    }
    VkMemoryBarrier host{};
    host.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    host.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
    host.dstAccessMask = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT | VK_ACCESS_INDEX_READ_BIT |
                         VK_ACCESS_UNIFORM_READ_BIT | VK_ACCESS_TRANSFER_READ_BIT;
    vkCmdPipelineBarrier(s.command, VK_PIPELINE_STAGE_HOST_BIT,
                         VK_PIPELINE_STAGE_VERTEX_INPUT_BIT | VK_PIPELINE_STAGE_VERTEX_SHADER_BIT |
                             VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT | VK_PIPELINE_STAGE_TRANSFER_BIT,
                         0, 1u, &host, 0, nullptr, 0, nullptr);
    for (auto &entry : s.textures) {
        if (!upload_texture(s, entry.second, error) && !error.empty())
            runtime_log_error("vulkan texture upload", error);
    }

    bool touched_display = false;
    std::uint32_t executed = 0u;
    std::uint32_t uniform_slot = 0u;
    for (const Batch &batch : s.batches) {
        if (uniform_slot >= kMaxDraws) break;
        Target *target = find_target(s, batch.draw.framebuffer_address);
        if (target == nullptr) {
            if (!ensure_target(s, batch.draw.framebuffer_address, error)) continue;
            target = find_target(s, batch.draw.framebuffer_address);
        }
        if (target == nullptr || !begin_target(s, *target)) continue;
        if (target->address == s.display_framebuffer) touched_display = true;
        const bool strip = batch.hardware_transform && batch.transform.primitive == 4u;
        const bool cull = batch.hardware_transform && batch.transform.cull_enabled;
        const bool ccw = cull && batch.transform.accept_counter_clockwise;
        VkPipeline pipeline = pipeline_for(s, batch.draw, strip, cull, ccw, error);
        if (pipeline == VK_NULL_HANDLE) continue;
        vkCmdBindPipeline(s.command, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
        VkDeviceSize offset = 0u;
        vkCmdBindVertexBuffers(s.command, 0u, 1u, &s.geometry, &offset);
        if (batch.indexed) {
            vkCmdBindIndexBuffer(s.command, s.geometry, vertex_bytes, VK_INDEX_TYPE_UINT32);
        }
        const auto scale = [&](std::int32_t value, std::uint32_t logical, std::uint32_t target_size) {
            return static_cast<std::int32_t>(std::clamp<std::int64_t>(
                static_cast<std::int64_t>(value) * target_size / std::max<std::uint32_t>(1u, logical),
                0, target_size));
        };
        VkRect2D scissor{};
        scissor.offset.x = scale(batch.draw.scissor_x0, target->logical_width, s.target_width);
        scissor.offset.y = scale(batch.draw.scissor_y0, target->logical_height, s.target_height);
        const std::int32_t right = scale(batch.draw.scissor_x1 + 1, target->logical_width, s.target_width);
        const std::int32_t bottom = scale(batch.draw.scissor_y1 + 1, target->logical_height, s.target_height);
        if (right <= scissor.offset.x || bottom <= scissor.offset.y) continue;
        scissor.extent.width = static_cast<std::uint32_t>(right - scissor.offset.x);
        scissor.extent.height = static_cast<std::uint32_t>(bottom - scissor.offset.y);
        vkCmdSetScissor(s.command, 0u, 1u, &scissor);
        float blend_constants[4]{};
        if (blend_variant(batch.draw) == 4u) {
            const std::uint32_t fix = batch.draw.blend_fix_source & 0x00FFFFFFu;
            blend_constants[0] = static_cast<float>(fix & 0xFFu) / 255.0f;
            blend_constants[1] = static_cast<float>((fix >> 8u) & 0xFFu) / 255.0f;
            blend_constants[2] = static_cast<float>((fix >> 16u) & 0xFFu) / 255.0f;
            blend_constants[3] = 1.0f;
        }
        vkCmdSetBlendConstants(s.command, blend_constants);
        VkDescriptorSet sampled_set = s.white.gpu.set;
        bool textured = false;
        if (batch.draw.texture_enabled) {
            if (batch.framebuffer_feedback && batch.feedback_address == target->address) {
                if (snapshot_target(s, *target, error)) {
                    const VkDescriptorSet feedback_set =
                        descriptor_for_draw(s, target->snapshot, batch.draw, error);
                    if (feedback_set != VK_NULL_HANDLE) {
                        sampled_set = feedback_set;
                        textured = true;
                        ++s.report.vram_feedback_refreshes;
                        ++s.report.gpu_feedback_draws;
                        ++s.report.self_feedback_snapshots;
                    }
                }
                if (!textured && !error.empty()) runtime_log_error("vulkan self-feedback", error);
            } else if (batch.framebuffer_feedback) {
                if (Target *feedback = find_target(s, batch.feedback_address);
                    feedback != nullptr && feedback->color.view != VK_NULL_HANDLE) {
                    const VkDescriptorSet feedback_set =
                        descriptor_for_draw(s, feedback->color, batch.draw, error);
                    if (feedback_set != VK_NULL_HANDLE) {
                        sampled_set = feedback_set;
                        textured = true;
                        ++s.report.vram_feedback_refreshes;
                        ++s.report.gpu_feedback_draws;
                    }
                }
            } else {
                if (const auto found = s.textures.find(texture_key(batch.draw));
                    found != s.textures.end() && found->second.gpu.set != VK_NULL_HANDLE && !found->second.dirty) {
                    sampled_set = found->second.gpu.set;
                    textured = true;
                }
            }
        }
        DrawUniforms uniforms = make_uniforms(batch, target->logical_width, target->logical_height, textured);
        std::memcpy(static_cast<std::byte *>(s.uniform_mapped) +
                        static_cast<std::size_t>(uniform_slot) * s.uniform_align,
                    &uniforms, sizeof(uniforms));
        const std::uint32_t dynamic_offset = uniform_slot * s.uniform_align;
        vkCmdBindDescriptorSets(s.command, VK_PIPELINE_BIND_POINT_GRAPHICS, s.pipeline_layout, 0u, 1u,
                                &sampled_set, 1u, &dynamic_offset);
        ++uniform_slot;
        if (batch.indexed)
            vkCmdDrawIndexed(s.command, batch.index_count, 1u, batch.first_index, static_cast<std::int32_t>(batch.first_vertex), 0u);
        else
            vkCmdDraw(s.command, batch.vertex_count, 1u, batch.first_vertex, 0u);
        ++executed;
        if (batch.draw.depth_test_enabled) s.report.depth_tested_game_draw_calls += batch.logical_draw_count;
        if (batch.draw.depth_write_enabled) s.report.depth_writing_game_draw_calls += batch.logical_draw_count;
        if (batch.draw.alpha_test_enabled) {
            s.report.alpha_tested_game_draw_calls += batch.logical_draw_count;
            s.report.alpha_test_shader_active = true;
        }
        const std::size_t blend = blend_variant(batch.draw);
        switch (blend) {
        case 1u:
            s.report.standard_alpha_blended_game_draw_calls += batch.logical_draw_count;
            s.report.standard_alpha_blend_pipeline_active = true;
            break;
        case 2u:
            s.report.fixed_replace_blended_game_draw_calls += batch.logical_draw_count;
            break;
        case 3u:
            s.report.additive_blended_game_draw_calls += batch.logical_draw_count;
            break;
        default:
            break;
        }
        if (blend != 0u) s.report.observed_blend_modes_pipeline_active = true;
        if (batch.draw.fog_enabled) {
            s.report.fogged_game_draw_calls += batch.logical_draw_count;
            s.report.fog_shader_active = true;
        }
        if (textured) {
            switch (batch.draw.texture_function & 7u) {
            case 0u:
                s.report.modulate_texture_game_draw_calls += batch.logical_draw_count;
                s.report.observed_texture_function_shader_active = true;
                break;
            case 1u:
                s.report.decal_texture_game_draw_calls += batch.logical_draw_count;
                s.report.observed_texture_function_shader_active = true;
                break;
            case 2u:
                s.report.blend_texture_game_draw_calls += batch.logical_draw_count;
                s.report.observed_texture_function_shader_active = true;
                break;
            case 3u:
                s.report.replace_texture_game_draw_calls += batch.logical_draw_count;
                s.report.observed_texture_function_shader_active = true;
                break;
            case 4u:
                s.report.add_texture_game_draw_calls += batch.logical_draw_count;
                s.report.observed_texture_function_shader_active = true;
                break;
            default:
                ++s.report.unsupported_texture_function_game_draw_calls;
                break;
            }
        }
    }
    end_pass(s);
    Target *display = find_target(s, s.display_framebuffer);
    const bool display_ready = touched_display && display != nullptr && display->color.image != VK_NULL_HANDLE;
    bool present_this_frame = false;
    if (publish && display_ready && s.swapchain_extension && !s.present_lost) {
        if (display->color.layout != VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
            transition_image(s.command, display->color.image, display->color.layout,
                             VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
        }
        std::string present_error;
        if (record_swapchain_present(s, display->color.view, s.target_width, s.target_height, present_error))
            present_this_frame = true;
        else if (!present_error.empty())
            log_frame_failure(s, present_error.c_str(), VK_ERROR_SURFACE_LOST_KHR);
    }
    if (publish && display_ready && !present_this_frame && s.readback != VK_NULL_HANDLE) {
        transition_image(s.command, display->color.image, display->color.layout,
                         VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
        VkBufferImageCopy copy{};
        copy.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        copy.imageSubresource.layerCount = 1u;
        copy.imageExtent = {s.target_width, s.target_height, 1u};
        vkCmdCopyImageToBuffer(s.command, display->color.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               s.readback, 1u, &copy);
        transition_image(s.command, display->color.image, display->color.layout,
                         VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL, VK_IMAGE_ASPECT_COLOR_BIT, 1u);
    }
    const VkResult ended = vkEndCommandBuffer(s.command);
    if (ended != VK_SUCCESS) log_frame_failure(s, "vkEndCommandBuffer", ended);
    bool submitted = false;
    bool presented_now = false;
    if (ended == VK_SUCCESS) {
        VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
        VkSemaphore acquire_wait = s.acquire_semaphore;
        VkSemaphore present_signal = VK_NULL_HANDLE;
        if (present_this_frame && s.present_image_index < s.present_semaphores.size())
            present_signal = s.present_semaphores[s.present_image_index];
        VkSubmitInfo submit{};
        submit.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        submit.commandBufferCount = 1u;
        submit.pCommandBuffers = &s.command;
        if (present_this_frame && present_signal == VK_NULL_HANDLE) {
            log_frame_failure(s, "Vulkan present semaphore is missing", VK_ERROR_OUT_OF_DATE_KHR);
        } else {
            if (present_this_frame) {
                submit.waitSemaphoreCount = 1u;
                submit.pWaitSemaphores = &acquire_wait;
                submit.pWaitDstStageMask = &wait_stage;
                submit.signalSemaphoreCount = 1u;
                submit.pSignalSemaphores = &present_signal;
            }
            const VkResult queued = vkQueueSubmit(s.queue, 1u, &submit, VK_NULL_HANDLE);
            if (queued != VK_SUCCESS) {
                log_frame_failure(s, "vkQueueSubmit", queued);
            } else {
                // The next finish waits, so this GPU work overlaps the next list.
                submitted = true;
                s.submit_pending = true;
                if (present_this_frame) {
                    const VkResult presented = queue_present(s);
                    if (presented == VK_SUCCESS || presented == VK_SUBOPTIMAL_KHR) {
                        presented_now = true;
                        s.direct_present_ok = true;
                    } else if (presented == VK_ERROR_OUT_OF_DATE_KHR) {
                        s.swapchain_dirty = true;
                    } else if (presented == VK_ERROR_DEVICE_LOST) {
                        s.present_lost = true;
                        log_frame_failure(s, "vkQueuePresentKHR", presented);
                    } else {
                        log_frame_failure(s, "vkQueuePresentKHR", presented);
                    }
                    s.pending_readback = false;
                    s.pending_readback_bytes = 0u;
                } else {
                    s.pending_readback = publish && display_ready && s.readback_mapped != nullptr;
                    s.pending_readback_bytes = s.pending_readback
                        ? static_cast<std::size_t>(s.target_width) * s.target_height * 4u : 0u;
                    if (publish && !display_ready)
                        log_frame_failure(s, "display target was not drawn", VK_SUCCESS);
                    else if (publish && display_ready && s.swapchain == VK_NULL_HANDLE &&
                             s.readback_mapped == nullptr)
                        log_frame_failure(s, "readback memory is not mapped", VK_ERROR_MEMORY_MAP_FAILED);
                }
            }
        }
    }
    if (!submitted) {
        const VkResult reset = vkResetCommandBuffer(s.command, 0);
        if (reset != VK_SUCCESS) log_frame_failure(s, "vkResetCommandBuffer", reset);
        release_staging(s);
        // The reset above released the acquired image.
        if (present_this_frame) retire_acquired_present(s);
    }
    if (!display_ready) ++s.report.frames_without_displayed_target;
    ++s.report.game_frames;
    s.report.game_frame_vblank = vblank;
    s.report.offscreen_width = s.target_width;
    s.report.offscreen_height = s.target_height;
    const bool show = shown();
    s.report.game_frame_readback_bytes = show && !presented_now ? s.frame_rgba.size() : 0u;
    s.report.presented_framebuffer_target = display_ready ? s.display_framebuffer : 0u;
    s.report.gpu_frame_presented_to_window = presented_now;
    s.report.swapchain_active = s.swapchain != VK_NULL_HANDLE;
    s.vertices.clear();
    s.indices.clear();
    s.batches.clear();
    s.current_target = nullptr;
    ++s.frame_epoch;
    return presented_now || show;
}

bool ge_gpu_backend_copy_game_frame_rgba(std::span<std::byte> destination) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (s.frame_rgba.empty() || destination.size() < s.frame_rgba.size()) return false;
    std::memcpy(destination.data(), s.frame_rgba.data(), s.frame_rgba.size());
    return true;
}
bool ge_gpu_backend_presents_directly() noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return s.enabled && s.swapchain != VK_NULL_HANDLE && s.direct_present_ok;
}

static bool vulkan_guest_present_available() noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return s.enabled && s.swapchain != VK_NULL_HANDLE;
}

static bool vulkan_present_guest_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                      std::uint32_t height) noexcept {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    if (!s.enabled) return false;
    std::string error;
    const bool presented = present_guest_image(s, rgba, width, height, error);
    if (!presented && !error.empty()) {
        static std::uint64_t failures = 0u;
        ++failures;
        if (failures <= 5u || (failures % 300u) == 0u)
            std::cerr << "[vulkan] " << error << " failures=" << failures << '\n';
    }
    return presented;
}

namespace {
struct RegisterVulkanGuestPresent {
    RegisterVulkanGuestPresent() noexcept {
        ge_guest_present().available = vulkan_guest_present_available;
        ge_guest_present().present = vulkan_present_guest_rgba;
    }
};
const RegisterVulkanGuestPresent register_vulkan_guest_present{};
}  // namespace

std::uint32_t ge_gpu_backend_owned_framebuffer() noexcept {
    const VulkanState &s = state();
    return s.enabled ? s.display_framebuffer : 0u;
}
std::uint32_t ge_gpu_backend_display_framebuffer() noexcept { return state().display_framebuffer; }
std::span<const std::byte> ge_gpu_backend_game_frame_rgba() noexcept {
    const VulkanState &s = state();
    return s.frame_rgba.empty() ? std::span<const std::byte>{}
                                : std::span<const std::byte>(s.frame_rgba.data(), s.frame_rgba.size());
}
bool ge_gpu_backend_copy_offscreen_rgba(std::span<std::byte> destination) noexcept {
    return ge_gpu_backend_copy_game_frame_rgba(destination);
}
void ge_gpu_backend_mark_window_presented() noexcept {
    state().report.gpu_frame_presented_to_window = true;
}
GeGpuBackendReport ge_gpu_backend_report() {
    VulkanState &s = state();
    std::lock_guard<std::recursive_mutex> guard(s.mutex);
    return s.report;
}

}  // namespace lcs

#endif

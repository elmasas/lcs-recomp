// Access to guest (PSP) memory and guest functions from hand-written game code.
//
// Decompiled game classes are plain C++ structs laid over the guest RAM the
// rest of the recompiled game still uses, so both sides see the same data.
#pragma once

#include "psprecomp/allegrex_context.hpp"
#include "psprecomp/runtime.hpp"

#include <cmath>
#include <cstddef>
#include <cstdint>
#include <initializer_list>
#include <limits>

namespace lcs::decomp {

using Runtime = psprecomp::Runtime;
using Context = psprecomp::AllegrexContext;

using int8 = std::int8_t;
using uint8 = std::uint8_t;
using int16 = std::int16_t;
using uint16 = std::uint16_t;
using int32 = std::int32_t;
using uint32 = std::uint32_t;
using bool8 = std::uint8_t;

void bind_runtime(Runtime &runtime);
[[nodiscard]] Runtime &runtime() noexcept;

// Host pointer for a guest address, or nullptr when the address is not RAM.
[[nodiscard]] std::uint8_t *guest_bytes(uint32 address, std::size_t length) noexcept;
// Guest address of a host pointer previously obtained from guest_bytes().
[[nodiscard]] uint32 guest_address(const void *pointer) noexcept;

template <typename T>
[[nodiscard]] T *guest_ptr(uint32 address) noexcept {
    return address == 0u ? nullptr : reinterpret_cast<T *>(guest_bytes(address, sizeof(T)));
}

// Zeroed scratch that stands in for unmapped guest memory, so a read through
// a null guest pointer yields 0 instead of faulting the host.
[[nodiscard]] std::uint8_t *guest_unmapped_scratch() noexcept;

template <typename T>
[[nodiscard]] T &guest_ref(uint32 address) noexcept {
    std::uint8_t *bytes = guest_bytes(address, sizeof(T));
    if (bytes == nullptr) bytes = guest_unmapped_scratch();
    return *reinterpret_cast<T *>(bytes);
}

// A pointer field stored inside a guest structure.
template <typename T>
struct GuestPtr {
    uint32 address;
    [[nodiscard]] T *get() const noexcept { return guest_ptr<T>(address); }
    [[nodiscard]] T *operator->() const noexcept { return get(); }
    [[nodiscard]] explicit operator bool() const noexcept { return address != 0u; }
};

// Reserves a frame on the guest stack for the lifetime of the object, the
// way a compiled function would, so guest callees and system calls get
// scratch memory that does not overlap the caller's frame.
class GuestFrame {
public:
    GuestFrame(Context &ctx, uint32 size) noexcept : ctx_(ctx), saved_sp_(ctx.gpr[29]) {
        ctx_.gpr[29] = saved_sp_ - size;
    }
    ~GuestFrame() { ctx_.gpr[29] = saved_sp_; }
    GuestFrame(const GuestFrame &) = delete;
    GuestFrame &operator=(const GuestFrame &) = delete;
    [[nodiscard]] uint32 sp() const noexcept { return ctx_.gpr[29]; }

private:
    Context &ctx_;
    uint32 saved_sp_;
};

// Runs a guest function that is still recompiled code to completion and
// returns v0. Only for callees that cannot block the calling PSP thread.
uint32 guest_call(Context &ctx, uint32 address, std::initializer_list<uint32> arguments = {});
// Calls a non-blocking PSP system import and returns v0.
uint32 guest_import(Context &ctx, const char *library, uint32 nid,
                    std::initializer_list<uint32> arguments = {});

// MIPS FPU semantics the recompiler uses, so results match bit for bit.
[[nodiscard]] inline int32 fpu_trunc(float value) noexcept {
    if (!std::isfinite(value)) {
        return std::isinf(value) && std::signbit(value) ? std::numeric_limits<int32>::min()
                                                        : std::numeric_limits<int32>::max();
    }
    const double input = static_cast<double>(value);
    if (input <= static_cast<double>(std::numeric_limits<int32>::min())) return std::numeric_limits<int32>::min();
    if (input >= static_cast<double>(std::numeric_limits<int32>::max())) return std::numeric_limits<int32>::max();
    return static_cast<int32>(input);
}

[[nodiscard]] inline float fpu_mul(float a, float b) noexcept {
    if ((std::isinf(a) && b == 0.0f) || (std::isinf(b) && a == 0.0f))
        return std::numeric_limits<float>::quiet_NaN();
    return a * b;
}

}  // namespace lcs::decomp

#pragma once
// A small binary writer and reader for save states. A state file is a header and a list of sections: a four-character
// tag, a length, and the payload. Reads are bounds-checked, and a short or damaged file makes the reader fail (ok() turns
// false and every later read returns zeros) instead of reading past the end.

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <string>
#include <type_traits>
#include <vector>

namespace lcs::state {

class Writer {
public:
    void u8(std::uint8_t value) { data_.push_back(value); }
    void boolean(bool value) { u8(value ? 1u : 0u); }
    void u32(std::uint32_t value) { put(&value, sizeof value); }
    void i32(std::int32_t value) { put(&value, sizeof value); }
    void u64(std::uint64_t value) { put(&value, sizeof value); }
    void f64(double value) { put(&value, sizeof value); }
    void str(const std::string &value) {
        u32(static_cast<std::uint32_t>(value.size()));
        put(value.data(), value.size());
    }
    void bytes(const void *source, std::size_t size) { put(source, size); }
    // Plain data only (the CPU context, for one): copied byte for byte.
    template <class T>
    void pod(const T &value) {
        static_assert(std::is_trivially_copyable_v<T>, "pod() needs plain data");
        put(&value, sizeof value);
    }

    // A section: tag, then its length (patched in end()), then what the caller writes.
    void begin(const char (&tag)[5]) {
        put(tag, 4u);
        open_.push_back(data_.size());
        u64(0u);
    }
    void end() {
        if (open_.empty()) return;
        const std::size_t at = open_.back();
        open_.pop_back();
        const std::uint64_t length = data_.size() - at - sizeof(std::uint64_t);
        std::memcpy(data_.data() + at, &length, sizeof length);
    }

    [[nodiscard]] const std::vector<std::uint8_t> &data() const noexcept { return data_; }
    // The bytes, moved out (for writing the file on another thread).
    [[nodiscard]] std::vector<std::uint8_t> take() noexcept { return std::move(data_); }
    [[nodiscard]] std::size_t size() const noexcept { return data_.size(); }

private:
    void put(const void *source, std::size_t size) {
        const auto *bytes = static_cast<const std::uint8_t *>(source);
        data_.insert(data_.end(), bytes, bytes + size);
    }
    std::vector<std::uint8_t> data_;
    std::vector<std::size_t> open_;
};

class Reader {
public:
    Reader() = default;
    Reader(const std::uint8_t *data, std::size_t size) : data_(data), size_(size) {}

    [[nodiscard]] bool ok() const noexcept { return ok_; }
    [[nodiscard]] bool at_end() const noexcept { return position_ >= size_; }
    [[nodiscard]] std::size_t remaining() const noexcept { return size_ - position_; }

    std::uint8_t u8() { std::uint8_t value = 0u; take(&value, sizeof value); return value; }
    bool boolean() { return u8() != 0u; }
    std::uint32_t u32() { std::uint32_t value = 0u; take(&value, sizeof value); return value; }
    std::int32_t i32() { std::int32_t value = 0; take(&value, sizeof value); return value; }
    std::uint64_t u64() { std::uint64_t value = 0u; take(&value, sizeof value); return value; }
    double f64() { double value = 0.0; take(&value, sizeof value); return value; }
    std::string str() {
        const std::uint32_t length = u32();
        if (length > remaining()) { ok_ = false; return {}; }
        std::string value(reinterpret_cast<const char *>(data_ + position_), length);
        position_ += length;
        return value;
    }
    bool bytes(void *destination, std::size_t size) { return take(destination, size); }
    template <class T>
    T pod() {
        static_assert(std::is_trivially_copyable_v<T>, "pod() needs plain data");
        T value{};
        take(&value, sizeof value);
        return value;
    }

    // The next section's tag and a reader over its payload; false at the end or when the file is cut short.
    bool next_section(char (&tag)[5], Reader &section) {
        if (remaining() < 4u + sizeof(std::uint64_t)) return false;
        std::memcpy(tag, data_ + position_, 4u);
        tag[4] = '\0';
        position_ += 4u;
        const std::uint64_t length = u64();
        if (!ok_ || length > remaining()) { ok_ = false; return false; }
        section = Reader(data_ + position_, static_cast<std::size_t>(length));
        position_ += static_cast<std::size_t>(length);
        return true;
    }

private:
    bool take(void *destination, std::size_t size) {
        if (!ok_ || size > remaining()) {
            ok_ = false;
            std::memset(destination, 0, size);
            return false;
        }
        std::memcpy(destination, data_ + position_, size);
        position_ += size;
        return true;
    }
    const std::uint8_t *data_{};
    std::size_t size_{};
    std::size_t position_{};
    bool ok_{true};
};

}  // namespace lcs::state

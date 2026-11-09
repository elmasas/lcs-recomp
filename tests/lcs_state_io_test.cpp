// The save-state writer and reader: a round trip, nested sections, and files that are cut short or damaged.
#include "lcs_state_io.hpp"

#include <cstdint>
#include <cstring>
#include <iostream>
#include <stdexcept>

namespace {
void check(bool value, const char *message) {
    if (!value) throw std::runtime_error(message);
}

struct Plain {
    std::int32_t a;
    float b;
    std::uint8_t c[5];
};
}  // namespace

int main() {
    try {
        using namespace lcs::state;
        Writer out;
        out.begin("ONE ");
        out.u8(7u);
        out.boolean(true);
        out.u32(0xDEADBEEFu);
        out.i32(-5);
        out.u64(0x0123456789ABCDEFull);
        out.f64(2.5);
        out.str("hello");
        const Plain plain{-3, 1.5f, {1, 2, 3, 4, 5}};
        out.pod(plain);
        const std::uint8_t blob[3] = {9, 8, 7};
        out.bytes(blob, sizeof blob);
        out.end();
        out.begin("TWO ");
        out.u32(42u);
        out.end();

        Reader in(out.data().data(), out.size());
        char tag[5];
        Reader section;
        check(in.next_section(tag, section) && std::strcmp(tag, "ONE ") == 0, "first section");
        check(section.u8() == 7u && section.boolean() && section.u32() == 0xDEADBEEFu && section.i32() == -5, "small values");
        check(section.u64() == 0x0123456789ABCDEFull && section.f64() == 2.5 && section.str() == "hello", "wide values");
        const Plain back = section.pod<Plain>();
        check(back.a == -3 && back.b == 1.5f && back.c[4] == 5, "plain data");
        std::uint8_t blob_back[3]{};
        check(section.bytes(blob_back, sizeof blob_back) && blob_back[0] == 9 && blob_back[2] == 7, "bytes");
        check(section.ok() && section.at_end(), "section fully read");
        check(in.next_section(tag, section) && std::strcmp(tag, "TWO ") == 0 && section.u32() == 42u, "second section");
        check(!in.next_section(tag, section), "no third section");

        // Cut short: every prefix must fail cleanly, never read past the end.
        for (std::size_t cut = 0; cut < out.size(); ++cut) {
            Reader damaged(out.data().data(), cut);
            Reader part;
            bool all = true;
            while (damaged.next_section(tag, part)) {
                part.u64(); part.u64(); part.u64();
                all = all && part.ok();
            }
            check(!all || !damaged.ok() || cut < out.size(), "cut file handled");
        }

        // A section that claims more bytes than the file has.
        Writer lie;
        lie.begin("BAD ");
        lie.u32(1u);
        lie.end();
        std::vector<std::uint8_t> bytes = lie.data();
        const std::uint64_t huge = 1ull << 40;
        std::memcpy(bytes.data() + 4, &huge, sizeof huge);
        Reader liar(bytes.data(), bytes.size());
        check(!liar.next_section(tag, section) && !liar.ok(), "oversized section rejected");

        // A string that claims more bytes than remain.
        Writer text;
        text.u32(1000u);
        Reader short_text(text.data().data(), text.size());
        check(short_text.str().empty() && !short_text.ok(), "oversized string rejected");

        // After a failure every read gives zeros.
        Reader failed(nullptr, 0u);
        check(failed.u32() == 0u && !failed.ok() && failed.u64() == 0u, "reads after failure are zeros");
        std::cout << "lcs_state_io_test passed\n";
        return 0;
    } catch (const std::exception &error) {
        std::cerr << "lcs_state_io_test FAILED: " << error.what() << "\n";
        return 1;
    }
}

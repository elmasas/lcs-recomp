#include "lcs_stress_test.hpp"
#include "lcs_profile.hpp"
#include "lcs_controls.hpp"

#include <chrono>
#include <fstream>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <string>

namespace {
void check(bool condition, const char *message) {
    if (!condition) throw std::runtime_error(message);
}
struct Fixture {
    std::filesystem::path root = std::filesystem::temp_directory_path() /
        ("lcs-stress-safety-" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    Fixture() { check(std::filesystem::create_directory(root), "cannot create test fixture"); }
    ~Fixture() {
        lcs::stress_test_init(false, false, {});
        std::error_code error;
        std::filesystem::remove_all(root, error);
    }
};
std::string read_file(const std::filesystem::path &path) {
    std::ifstream file(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(file), {}};
}
void put_string(psprecomp::GuestMemory &memory, std::uint32_t address, const std::string &text) {
    for (std::size_t i = 0; i <= text.size(); ++i)
        memory.store8(address + static_cast<std::uint32_t>(i), i == text.size() ? 0u : static_cast<unsigned char>(text[i]));
}
}
int main() {
    try {
        Fixture fixture;
        lcs::lcs_set_host_drive_inputs(false, false, 70, 12);
        check(lcs::lcs_host_accelerate() == 70 && lcs::lcs_host_brake() == 12,
              "partial drive pressures were converted to digital buttons");
        lcs::lcs_set_host_drive_inputs(true, true, 70, 12);
        check(lcs::lcs_host_accelerate() == 255 && lcs::lcs_host_brake() == 255,
              "held drive buttons must still provide full pressure");
        lcs::lcs_set_host_drive_inputs(false, false);
        check(lcs::lcs_host_accelerate() == 0 && lcs::lcs_host_brake() == 0,
              "releasing drive controls must clear partial pressures");
        const auto save = fixture.root / "PSP/SAVEDATA/TESTS0/DATA.BIN";
        std::filesystem::create_directories(save.parent_path());
        const std::string original = "original-save";
        { std::ofstream file(save, std::ios::binary); file << original; }
        psprecomp::Runtime runtime;
        runtime.set_game_root(fixture.root);
        lcs::install_profile(runtime, 0x08C00000u);
        lcs::stress_test_init(true, false, fixture.root / "report");
        auto &memory = runtime.memory();
        psprecomp::AllegrexContext ctx;
        constexpr std::uint32_t path = 0x08801000u, parameter = 0x08802000u, data = 0x08803000u;
        put_string(memory, path, "ms0:/PSP/SAVEDATA/TESTS0/DATA.BIN");
        put_string(memory, data, "overwrite");
        for (unsigned flags : {2u, 3u, 0x101u, 0x201u, 0x401u}) {
            ctx.gpr[4] = path; ctx.gpr[5] = flags;
            runtime.invoke_import("IoFileMgrForUser", 0x109F50BCu, ctx);
            check(ctx.gpr[2] == 0x8001000Du, "write-capable file open was allowed");
            check(read_file(save) == original, "open changed save contents");
        }
        ctx.gpr[4] = path; ctx.gpr[5] = 1u;
        runtime.invoke_import("IoFileMgrForUser", 0x109F50BCu, ctx);
        const auto fd = ctx.gpr[2];
        check(static_cast<std::int32_t>(fd) > 0, "read-only save open was denied");
        ctx.gpr[4] = fd; ctx.gpr[5] = data; ctx.gpr[6] = 9;
        runtime.invoke_import("IoFileMgrForUser", 0x42EC03ACu, ctx);
        check(ctx.gpr[2] == 0x8001000Du, "direct file write was allowed");
        ctx.gpr[4] = fd; ctx.gpr[5] = data; ctx.gpr[6] = static_cast<std::uint32_t>(original.size());
        runtime.invoke_import("IoFileMgrForUser", 0x6A638D83u, ctx);
        check(ctx.gpr[2] == original.size() && memory.read_c_string(data) == original,
              "read-only save read was denied or damaged");
        ctx.gpr[4] = fd;
        runtime.invoke_import("IoFileMgrForUser", 0x810C4BC3u, ctx);
        // Getstat's second argument is a pointer, not open flags.
        ctx.gpr[4] = path; ctx.gpr[5] = 0x08801700u;
        runtime.invoke_import("IoFileMgrForUser", 0xACE946E8u, ctx);
        check(ctx.gpr[2] == 0, "read-only save metadata was blocked");
        memory.zero(parameter, 0x600u);
        memory.store32(parameter, 0x600u);
        put_string(memory, parameter + 0x3Cu, "TEST");
        put_string(memory, parameter + 0x4Cu, "S0");
        put_string(memory, parameter + 0x64u, "DATA.BIN");
        memory.store32(parameter + 0x74u, data);
        memory.store32(parameter + 0x78u, 128u);
        memory.store32(parameter + 0x7Cu, 9u);
        for (unsigned mode : {1u, 3u, 5u, 6u, 7u, 9u, 10u, 13u, 14u, 17u, 18u, 19u, 20u, 21u, 0u}) {
            memory.store32(parameter + 0x30u, mode);
            ctx.gpr[4] = parameter;
            runtime.invoke_import("sceUtility", 0x50C4CD57u, ctx);
            check(ctx.gpr[2] == 0, "savedata initialization failed");
            runtime.invoke_import("sceUtility", 0xD4B95FFBu, ctx);
            runtime.invoke_import("sceUtility", 0xD4B95FFBu, ctx);
            check((memory.load32(parameter + 0x1Cu) == 0u) == (mode == 0u),
                  "savedata mutation was allowed or load was denied");
            check(read_file(save) == original, "savedata utility changed or removed the save");
            if (mode == 0u) check(memory.read_c_string(data) == original, "savedata load returned wrong contents");
            runtime.invoke_import("sceUtility", 0x9790B33Cu, ctx);
            runtime.invoke_import("sceUtility", 0x8874DBE0u, ctx);
        }
        lcs::stress_test_init(false, false, {});
        ctx.gpr[4] = path; ctx.gpr[5] = 3u;
        runtime.invoke_import("IoFileMgrForUser", 0x109F50BCu, ctx);
        const auto normal_fd = ctx.gpr[2];
        check(static_cast<std::int32_t>(normal_fd) > 0, "normal play remained write-protected");
        put_string(memory, data, "updated");
        ctx.gpr[4] = normal_fd; ctx.gpr[5] = data; ctx.gpr[6] = 7;
        runtime.invoke_import("IoFileMgrForUser", 0x42EC03ACu, ctx);
        check(ctx.gpr[2] == 7, "normal write was denied");
        ctx.gpr[4] = normal_fd;
        runtime.invoke_import("IoFileMgrForUser", 0x810C4BC3u, ctx);
        check(read_file(save).rfind("updated", 0) == 0, "normal write did not reach the fixture");
        std::cout << "Save protection integration tests passed\n";
        return 0;
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}

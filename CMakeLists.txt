cmake_minimum_required(VERSION 3.20)
project(PSPRecomp VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(PSPRECOMP_BUILD_TESTS "Build tests" ON)
option(PSPRECOMP_LTO "Enable link-time optimization" OFF)
option(PSPRECOMP_NATIVE_AVX2 "Use AVX2 on MSVC" OFF)
option(PSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH "Skip write-watch checks in AOT memory" OFF)
option(PSPRECOMP_AOT_PRODUCTION_FASTPATHS "Strip AOT diagnostics" OFF)
set(PSPRECOMP_MSVC_MP_JOBS "0" CACHE STRING "Max cl.exe processes (0 = all cores, 1 = off)")

# Unbounded /MP with MSBuild /m runs out of memory; /MP1 can fail with D8040
if(PSPRECOMP_MSVC_MP_JOBS EQUAL 0)
    set(PSPRECOMP_MSVC_MP_FLAG /MP)
elseif(PSPRECOMP_MSVC_MP_JOBS GREATER 1)
    set(PSPRECOMP_MSVC_MP_FLAG /MP${PSPRECOMP_MSVC_MP_JOBS})
endif()

foreach(def PSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH PSPRECOMP_AOT_PRODUCTION_FASTPATHS)
    if(${def})
        add_compile_definitions(${def}=1)
    endif()
endforeach()

if(MSVC AND PSPRECOMP_NATIVE_AVX2)
    add_compile_options($<$<CONFIG:Release,RelWithDebInfo>:/arch:AVX2>)
    # AVX2 brings FMA. Fusing a*b+c rounds differently from the PSP's separate steps, so keep guest floats exact.
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        add_compile_options(/clang:-ffp-contract=off)
    endif()
endif()

if(PSPRECOMP_LTO)
    include(CheckIPOSupported)
    check_ipo_supported(RESULT lto_ok OUTPUT lto_error)
    if(lto_ok)
        set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELEASE ON)
        set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_RELWITHDEBINFO ON)
        set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_MINSIZEREL ON)
    else()
        message(WARNING "LTO unavailable: ${lto_error}")
    endif()
endif()

add_library(psprecomp_core STATIC
    src/decoder.cpp
    src/deflate.cpp
    src/elf32.cpp
    src/guest_memory.cpp
    src/nid_registry.cpp
    src/program_analysis.cpp
    src/runtime.cpp
    src/sha256.cpp
)
target_include_directories(psprecomp_core PUBLIC include)
if(MSVC)
    target_compile_definitions(psprecomp_core PRIVATE _CRT_SECURE_NO_WARNINGS)
    target_compile_options(psprecomp_core PRIVATE /W4 /permissive- /EHsc ${PSPRECOMP_MSVC_MP_FLAG}
        $<$<CONFIG:Release,RelWithDebInfo>:/Ob3>)
else()
    target_compile_options(psprecomp_core PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wshadow)
endif()

add_executable(psp_analyze tools/analyzer_main.cpp)
add_executable(psp_recomp tools/codegen_main.cpp)
add_executable(dump_function tools/dump_function.cpp)
foreach(tool psp_analyze psp_recomp dump_function)
    target_link_libraries(${tool} PRIVATE psprecomp_core)
endforeach()

if(PSPRECOMP_BUILD_TESTS)
    enable_testing()
    add_executable(psprecomp_tests tests/test_main.cpp)
    target_link_libraries(psprecomp_tests PRIVATE psprecomp_core)
    target_compile_definitions(psprecomp_tests PRIVATE PSPRECOMP_CODEGEN_PATH="$<TARGET_FILE:psp_recomp>")
    add_dependencies(psprecomp_tests psp_recomp)
    add_test(NAME psprecomp_tests COMMAND psprecomp_tests)
endif()

add_subdirectory(lcs)

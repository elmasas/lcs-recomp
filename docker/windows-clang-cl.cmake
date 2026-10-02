# Cross build that matches lcs/scripts/build_clang.bat: clang-cl, lld-link, llvm-rc.
# /opt/xwin is the CRT and Windows SDK that vcvars64.bat would put on INCLUDE and LIB.
set(CMAKE_SYSTEM_NAME Windows)
set(CMAKE_SYSTEM_PROCESSOR AMD64)

# xwin omits the debug CRT, and CMake's ABI probe defaults to Debug.
set(CMAKE_TRY_COMPILE_CONFIGURATION Release)

set(CMAKE_C_COMPILER clang-cl)
set(CMAKE_CXX_COMPILER clang-cl)
set(CMAKE_LINKER lld-link)
set(CMAKE_AR llvm-lib)
set(CMAKE_RC_COMPILER llvm-rc)

set(CMAKE_C_COMPILER_TARGET x86_64-pc-windows-msvc)
set(CMAKE_CXX_COMPILER_TARGET x86_64-pc-windows-msvc)

set(XWIN_DIR "/opt/xwin" CACHE PATH "xwin splat of the MSVC CRT and Windows SDK")

set(_xwin_compile
	"-Wno-unused-command-line-argument"
	"-fuse-ld=lld-link"
	"/vctoolsdir" "${XWIN_DIR}/crt"
	"/winsdkdir" "${XWIN_DIR}/sdk")
list(JOIN _xwin_compile " " _xwin_compile)
set(CMAKE_C_FLAGS_INIT "${_xwin_compile}")
set(CMAKE_CXX_FLAGS_INIT "${_xwin_compile}")

set(_xwin_link
	"/LIBPATH:${XWIN_DIR}/crt/lib/x86_64"
	"/LIBPATH:${XWIN_DIR}/sdk/lib/ucrt/x86_64"
	"/LIBPATH:${XWIN_DIR}/sdk/lib/um/x86_64")
list(JOIN _xwin_link " " _xwin_link)
set(CMAKE_EXE_LINKER_FLAGS_INIT "${_xwin_link}")
set(CMAKE_SHARED_LINKER_FLAGS_INIT "${_xwin_link}")
set(CMAKE_MODULE_LINKER_FLAGS_INIT "${_xwin_link}")

set(CMAKE_FIND_ROOT_PATH "${XWIN_DIR}")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

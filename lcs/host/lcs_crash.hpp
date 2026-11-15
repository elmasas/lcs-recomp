// Crash reports on stderr: std::terminate, abort(), and hardware faults print the reason and the call stack. Every
// line starts with "[lcs-crash]". Windows names frames with DbgHelp when a PDB is present. Linux and the BSDs name
// them from the executable's symbol table. File and line are added from DWARF when libdw is available and the report
// is not running inside a signal handler.
// LCS_CRASH_FIRST_CHANCE=1 reports the first few hardware faults as they are raised on Windows. Together with
// LCS_TRACE_THROWS=1 it also reports C++ throws on every platform, then lets the throw continue. A fatal signal
// on Linux or a BSD still ends the process; it cannot be resumed.
#pragma once

namespace lcs {

// Call once, early in main.
void install_crash_handlers();

}  // namespace lcs

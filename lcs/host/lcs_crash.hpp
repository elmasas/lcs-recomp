// Crash reports on stderr: std::terminate, abort(), unhandled Windows exceptions and CRT invalid parameters print the
// reason and the call stack. Every line starts with the tag "[lcs-crash]". LCS_CRASH_FIRST_CHANCE=1 also reports the
// first few hardware faults as they are raised, and LCS_TRACE_THROWS=1 adds C++ throws to that.
#pragma once

namespace lcs {

// Call once, early in main.
void install_crash_handlers();

}  // namespace lcs

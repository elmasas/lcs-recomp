#include "lcs_crash.hpp"

#include <cerrno>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>
#include <sys/wait.h>
#include <unistd.h>

namespace {

__attribute__((noinline)) void crash_at_known_line() {
    volatile int *pointer = nullptr;
    *pointer = 1;
}

__attribute__((noinline)) void throw_uncaught() { throw std::runtime_error("crash-test-uncaught"); }

__attribute__((noinline)) void throw_caught() {
    try {
        throw std::runtime_error("crash-test-traced");
    } catch (const std::runtime_error &) {}
}

std::string child_output(void (*body)()) {
    int pipe_fds[2];
    if (pipe(pipe_fds) != 0) {
        std::cerr << "pipe failed\n";
        std::exit(1);
    }
    const pid_t child = fork();
    if (child < 0) {
        std::cerr << "fork failed\n";
        std::exit(1);
    }
    if (child == 0) {
        dup2(pipe_fds[1], STDERR_FILENO);
        close(pipe_fds[0]);
        close(pipe_fds[1]);
        body();
        _exit(99);
    }
    close(pipe_fds[1]);
    std::string text;
    char buffer[512];
    while (true) {
        const ssize_t got = read(pipe_fds[0], buffer, sizeof buffer);
        if (got < 0 && errno == EINTR) continue;
        if (got <= 0) break;
        text.append(buffer, static_cast<std::size_t>(got));
    }
    close(pipe_fds[0]);
    int status = 0;
    waitpid(child, &status, 0);
    text += "\nexit=";
    if (WIFEXITED(status)) text += std::to_string(WEXITSTATUS(status));
    else if (WIFSIGNALED(status)) text += "signal " + std::to_string(WTERMSIG(status));
    else text += "unknown";
    return text;
}

void require_contains(const std::string &text, const char *needle) {
    if (text.find(needle) == std::string::npos) {
        std::cerr << "missing \"" << needle << "\" in:\n" << text << "\n";
        std::exit(1);
    }
}

void segfault_child() {
    lcs::install_crash_handlers();
    crash_at_known_line();
}

void uncaught_child() {
    lcs::install_crash_handlers();
    throw_uncaught();
}

void traced_child() {
    setenv("LCS_CRASH_FIRST_CHANCE", "1", 1);
    setenv("LCS_TRACE_THROWS", "1", 1);
    lcs::install_crash_handlers();
    throw_caught();
    _exit(0);
}

}  // namespace

int main() {
    const std::string fault = child_output(segfault_child);
    require_contains(fault, "[lcs-crash]");
    require_contains(fault, "segmentation fault");
    require_contains(fault, "faulting address 0x0");
    require_contains(fault, "crash_at_known_line");
    require_contains(fault, "exit=3");
    if (fault.find("\n[lcs-crash] stack:\n") != fault.rfind("\n[lcs-crash] stack:\n")) {
        std::cerr << "signal report printed more than one stack:\n" << fault << "\n";
        std::exit(1);
    }
    if (fault.find("while a crash report was being written") != std::string::npos) {
        std::cerr << "signal report faulted again:\n" << fault << "\n";
        std::exit(1);
    }

    const std::string uncaught = child_output(uncaught_child);
    require_contains(uncaught, "uncaught");
    require_contains(uncaught, "crash-test-uncaught");
    require_contains(uncaught, "throw_uncaught");
    require_contains(uncaught, "exit=3");
    if (uncaught.find("while a crash report was being written") != std::string::npos) {
        std::cerr << "terminate report faulted again:\n" << uncaught << "\n";
        std::exit(1);
    }
#if defined(LCS_HAVE_LIBDW)
    require_contains(uncaught, "lcs_crash_test.cpp");
#endif

    const std::string traced = child_output(traced_child);
    require_contains(traced, "throw");
    require_contains(traced, "crash-test-traced");
    require_contains(traced, "throw_caught");
    require_contains(traced, "exit=0");
#if defined(LCS_HAVE_LIBDW)
    require_contains(traced, "lcs_crash_test.cpp");
#endif

    std::cout << "Crash reporter tests passed\n";
    return 0;
}

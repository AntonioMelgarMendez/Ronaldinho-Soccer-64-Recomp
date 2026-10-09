#include "windows_diagnostics.hpp"
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <cstdio>
#include <fstream>
#include <iterator>
#include <string>

int main() {
    iss64_start_windows_diagnostics();
    std::fprintf(stdout, "stdout probe\n");
    std::fprintf(stderr, "stderr probe\n");
    // Call the installed filter with a synthetic exception record. No actual
    // crash, debugger, or Windows error-reporting dialog is triggered.
    auto filter = SetUnhandledExceptionFilter(nullptr);
    if (!filter) return 1;
    EXCEPTION_RECORD record{};
    record.ExceptionCode = EXCEPTION_ACCESS_VIOLATION;
    record.ExceptionAddress = reinterpret_cast<void*>(&main);
    record.NumberParameters = 2;
    record.ExceptionInformation[0] = 0;
    record.ExceptionInformation[1] = 0x1234;
    CONTEXT context{};
    EXCEPTION_POINTERS pointers{&record, &context};
    if (filter(&pointers) != EXCEPTION_CONTINUE_SEARCH) return 2;
    std::ifstream input("crash.txt");
    std::string crash{std::istreambuf_iterator<char>(input), {}};
    if (crash.find("0xC0000005") == std::string::npos ||
        crash.find("Module offset:") == std::string::npos ||
        crash.find("Target: 0x1234") == std::string::npos) return 3;
    std::ifstream log_input("diagnostico.log");
    std::string log{std::istreambuf_iterator<char>(log_input), {}};
    if (log.find("CPU:") == std::string::npos ||
        log.find("stdout probe") == std::string::npos ||
        log.find("stderr probe") == std::string::npos) return 4;
    std::fprintf(stderr, "Windows diagnostics tests passed\n");
    return 0;
}

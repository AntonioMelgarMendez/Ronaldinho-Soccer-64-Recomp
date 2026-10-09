#pragma once

#ifdef _WIN32
void iss64_start_windows_diagnostics();
#else
inline void iss64_start_windows_diagnostics() {}
#endif

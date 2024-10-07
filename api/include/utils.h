#ifndef _SANDBOX_UTILS_H_
#define _SANDBOX_UTILS_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

namespace Utils {
    EXPORT void sleep(int milliseconds);
}

#endif
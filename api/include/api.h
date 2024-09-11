#ifndef _SANDBOX_API_H_
#define _SANDBOX_API_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include "output.h"

namespace API {
    EXPORT void init();
    EXPORT void loop();
};

#endif

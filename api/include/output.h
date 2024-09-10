#ifndef _SANDBOX_OUTPUT_H_
#define _SANDBOX_OUTPUT_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>

namespace Output {
    EXPORT void initConsole();
    EXPORT void messageBox( const std::string& title, const std::string& msg );
    EXPORT void print( std::string msg );
}

#endif
#ifndef _SANDBOX_INILOADER_H_
#define _SANDBOX_INILOADER_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string.h>

namespace IniLoader {
    /**
        @brief Loads the .ini file.
        @param The URL of the .ini file to be loaded.
    */
    EXPORT void loadINIFile( char* fileUrlParam );

    /**
        @brief Get the value of some variable in .ini file and write to an specified variable.
        @param the section in .ini file. Ex: "default".
        @param the name of the variable to be readed.
        @param the variable witch will receive the value. You need to declare the variable with the same type of the value you expect to be returned. Ex: if destinationVar was declared as int, the value written on it will be an int as well.
    */
    EXPORT void getValue( const char* section, const char* variableName, auto& destinationVar );

    /**
        @brief Get the value of some variable in .ini file and returns it.
        @param the section in .ini file. Ex: "default".
        @param the name of the variable to be readed.
    */
    EXPORT template <typename T> T getValue( const char* section, const char* variableName );
}

#endif
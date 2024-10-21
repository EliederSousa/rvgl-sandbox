#ifndef _SANDBOX_INILOADER_H_
#define _SANDBOX_INILOADER_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>

namespace IniLoader {
        /**
         * @brief Loads an INI file into memory.
         * @param fileUrlParam The name of ini file to be loaded.
         * @return void
         * @example IniLoader::loadINIFile("myfile.ini");
         */
        EXPORT void loadINIFile(const char* fileUrl);

        /**
            @brief Get the value of some variable in .ini file and write to a specified variable.
            @param the section in .ini file. Ex: "default".
            @param the name of the variable to be read.
            @param the variable which will receive the value. You need to declare the variable with the same type of the value you expect to be returned.
        */

        EXPORT int getIntValue(const char* section, const char* variableName);        

        EXPORT float getFloatValue(const char* section, const char* variableName);

        EXPORT bool getBoolValue(const char* section, const char* variableName);

        EXPORT std::string getStringValue(const char* section, const char* variableName);

        /**
            @brief Get the value of some variable in .ini file and returns it.
            @param section the section in .ini file. Ex: "default".
            @param variableName the name of the variable to be read.
        */
        //template <typename T>
        //T getValue(const char* section, const char* variableName);
    
};

#endif

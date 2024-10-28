/**
 * @file iniloader.h
 * @author Elieder Sousa (eliedersousa@gmail.com)
 * @brief This file has methods that allows you to load an .ini file.
 * @version 0.1.0
 * @date 21/10/24
 * 
 * @copyright Copyright (c) 2024
 * Distributed under the MIT license.
 * See <license.txt> file for details.
 * 
 */
#ifndef _SANDBOX_INILOADER_H_
#define _SANDBOX_INILOADER_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>

/**
 * @brief This namespace allows you to load an ini file.
 */
namespace IniLoader {

    /**
     * @brief Loads an INI file into memory. The .ini must be in the same folder of your .asi file.
     * 
     * @param fileUrl The name of ini file to be loaded.
     * @return void
     * @example IniLoader::loadINIFile("myfile.ini");
     */
    EXPORT void loadINIFile(const char* fileUrl);

    /**
     * @brief Get the value of some variable in .ini file and write to a specified variable.
     *
     * @param section The section in .ini file. Ex: "default".
     * @param variableName The name of the variable to be readed.
     * @return int
     * @example IniLoader::getIntValue("default", "initialPosition");
    */
    EXPORT int getIntValue(const char* section, const char* variableName);  


    /**
     * @brief Get the value of some variable in .ini file and write to a specified variable.
     *
     * @param section The section in .ini file. Ex: "default".
     * @param variableName The name of the variable to be readed.
     * @return float
     * @example IniLoader::getIntValue("default", "gravityForce");
    */
    EXPORT float getFloatValue(const char* section, const char* variableName);

    /**
     * @brief Get the value of some variable in .ini file and write to a specified variable.
     *
     * @param section The section in .ini file. Ex: "default".
     * @param variableName The name of the variable to be readed.
     * @return bool
     * @example IniLoader::getIntValue("default", "isEnabled");
    */
    EXPORT bool getBoolValue(const char* section, const char* variableName);

    /**
     * @brief Get the value of some variable in .ini file and write to a specified variable.
     *
     * @param section The section in .ini file. Ex: "default".
     * @param variableName The name of the variable to be readed.
     * @return std::string
     * @example IniLoader::getIntValue("default", "carName");
    */
    EXPORT std::string getStringValue(const char* section, const char* variableName);    
};

#endif

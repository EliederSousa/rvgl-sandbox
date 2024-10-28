#ifndef _SANDBOX_OUTPUT_H_
#define _SANDBOX_OUTPUT_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>

/**
 * @brief This namespace has methods to show information from a message box or console.
 */
namespace Output {

    /**
     * @brief Initializes the console for code debugging. Warning: closing the console will close the game itself!
     * @return void
     */
    EXPORT void initConsole();

    /**
     * @brief Shows a Windows like message box, with OK button.
     * 
     * @param title The title of message box.
     * @param msg   The main message of message box.
     * @return void
     */
    EXPORT void messageBox( const std::string& title, const std::string& msg );

    /**
     * @brief Print a string to console. You need to use Output::initConsole() in order to use this function.
     * 
     * @param msg The string to be printed.
     * @return void
     */
    EXPORT void print( std::string msg );

    /**
     * @brief Print a string to console and breaks a line. You need to use Output::initConsole() in order to use this function.
     * 
     * @param msg The string to be printed.
     * @return void 
     */
    EXPORT void println( std::string msg );
}

#endif

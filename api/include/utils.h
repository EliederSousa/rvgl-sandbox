/**
 * @file utils.h
 * @author Elieder Sousa (eliedersousa@gmail.com)
 * @brief This file provide time and mathematical functions.
 * @version 0.0.1
 * @date 21/10/24
 * 
 * @copyright Copyright (c) 2024
 * Distributed under the MIT license.
 * See <license.txt> file for details.
 * 
 */
#ifndef _SANDBOX_UTILS_H_
#define _SANDBOX_UTILS_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

/**
 * @brief This namespace provides time and mathematical functions.
 */
namespace Utils {

    /**
     * @brief Make the script delay an amount of milliseconds.
     * 
     * @param milliseconds The number of milliseconds to be delayed. Remember that 1 second = 1000 milliseconds.
     * @return void 
     */
    EXPORT void sleep(int milliseconds);

    /**
     * @brief Returns a integer from 0 to maxNumber (exclusive).
     * 
     * @param maxNumber 
     * @return int
     * @example Utils::randomInt(10); // can return the numbers {0,1,2,3,4,5,6,7,8,9}
     */
    EXPORT int randomInt( int maxNumber );

    /**
     * @brief Returns a integer from min (inclusive) and max (exclusive).
     * 
     * @param minNumber
     * @param maxNumber 
     * @return int 
     * @example Utils::randomIntBetween(4, 8); // can return the numbers {4,5,6,7}
     */
    EXPORT int randomIntBetween( int minNumber, int maxNumber );

    /**
     * @brief Returns a float from 0 to 1 (exclusive).
     * 
     * @return float
     */
    EXPORT float randomFloat();
}

#endif
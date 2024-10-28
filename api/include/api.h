/**
 * @file api.h
 * @author EliederSousa (eliedersousa@gmail.com)
 * @brief  This file provides all imports needed to access functions from other modules.
 * @version 0.0.1
 * @date 21/10/24
 * 
 * @copyright Copyright (c) 2024
 * Distributed under the MIT license. 
 * See <license.txt> file for details.
 */

#ifndef _SANDBOX_API_H_
#define _SANDBOX_API_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include "output.h"
#include "iniloader.h"
#include "utils.h"
#include "race.h"
#include "pickup.h"
#include "player.h"
#include "display.h"
#include "input.h"

/**
 * @brief This namespace provides all imports needed to access functions from other modules.
 */
namespace API {
    /**
     * @brief This method must be called once to initialize some internal processes.
     * 
     * @return void 
     */
    EXPORT void init();

    /**
     * @brief Use this method to update internal properties. You need to call it in the top of your loop function.
     * 
     * @return void 
     */
    EXPORT void loop();
};

#endif
#ifndef _SANDBOX_API_H_
#define _SANDBOX_API_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

/* Let's include all here */
#include "output.h"
#include "iniloader.h"
#include "utils.h"
#include "race.h"
#include "pickup.h"
#include "player.h"
#include "display.h"

namespace API {
    EXPORT void init();
    EXPORT void loop();
};

#endif
#ifndef _SANDBOX_RACE_H_
#define _SANDBOX_RACE_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>

namespace Race {

    namespace Timing {
        EXPORT int getTotalRaceTime();

        EXPORT int getLevelStartedTime();

        EXPORT int getCountDownTime();
    };

    EXPORT bool isStarted();

    EXPORT int getGameState();

    EXPORT bool isPaused();

    EXPORT std::string getTrackNameInternal();

    EXPORT std::string getTrackName();

    EXPORT int getRacersNum();

    EXPORT void addRacer();

    EXPORT int getLapsNum();
}

#endif
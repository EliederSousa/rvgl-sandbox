#ifndef _SANDBOX_PICKUP_H_
#define _SANDBOX_PICKUP_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

namespace Pickup {

    enum Types {
        ENERGY_BALL     = 0,
        FIREWORKS       = 1,
        FIREWORKS_PACK  = 2,
        BOMB            = 3,
        WATERBALLON     = 4,
        SHOCK           = 5,
        OIL             = 6,
        BALL            = 7,
        BATTERY         = 8,
        FAKE_PICKUP     = 9,
        STAR            = 10
    };

    namespace Fireworks {
        EXPORT void setMaxTime( float num );
        EXPORT void setMaxTargetDistance( float num );
        EXPORT void setFireworkForce( float num );
        EXPORT void numToGiveWhenPack( unsigned char num );
    }

    EXPORT void numToGiveWhenSingle( int num );
}

#endif

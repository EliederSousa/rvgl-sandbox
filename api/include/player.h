#ifndef _SANDBOX_PLAYER_H_
#define _SANDBOX_PLAYER_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>

// TODO: Make doxygen comments
namespace Player {
    
    // Misc
    EXPORT void init();
    EXPORT void update ( int player );
    EXPORT int getMaxPlayers();
    EXPORT void setMaxPlayers( int maxPlayers );
    EXPORT void sortPlayers();
    
    // Information
    EXPORT std::string getPlayerName ( int player );
    EXPORT bool isHuman( int player );

    // Position and angle
    EXPORT float getX ( int player );
    EXPORT float getY ( int player );
    EXPORT float getZ ( int player );
    EXPORT void setPosition( int player, float x, float y, float z );
    EXPORT void setAngle( int player, float x, float y, float z );
    EXPORT bool isJumping ( int player );
    EXPORT void setJumping( int player, bool state );
    EXPORT bool isCarInGround ( int player );

    // Physics: velocity, acceleration, mass
    EXPORT int getVelocity( int player, bool mph );
    EXPORT float getTachometer ( int player );
    EXPORT float getXAcceleration ( int player );
    EXPORT float getYAcceleration ( int player );
    EXPORT float getZAcceleration ( int player );
    EXPORT void setXAcceleration( int player, float x );
    EXPORT void setYAcceleration( int player, float y );
    EXPORT void setZAcceleration( int player, float z );
    EXPORT void setMass( int player, float mass );
    EXPORT void setSuspension( int player, float mass );
    EXPORT void setBounce( int player, float mass );

    // Pickups
    EXPORT int getPickupType ( int player );
    EXPORT int getPickupNum ( int player );
    EXPORT int getIsBomb ( int player );
    EXPORT void setPickupType( int player, int w );
    EXPORT void setPickupNum( int player, int w );
    //EXPORT void setPlayerTargeting ( int player ); // TODO: Fix

    // Race statistics
    EXPORT int getRacePosition ( int player );
    EXPORT int getLap ( int player );
    EXPORT int getLapTime ( int player );
    EXPORT int getLastLap ( int player );
    EXPORT int getBestLap ( int player );
    EXPORT int getPlayerTotalTime ( int player );
    EXPORT void setPlayerTotalTime( int player, int totalLapTime ); 
}

#endif
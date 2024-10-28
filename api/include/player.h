#ifndef _SANDBOX_PLAYER_H_
#define _SANDBOX_PLAYER_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <string>


namespace Player {
    
    //----------------------------------------------------------------//
    // Misc
    //----------------------------------------------------------------//
    EXPORT void init();
    EXPORT void update ( int player );
    EXPORT int getMaxPlayers();
    EXPORT void setMaxPlayers( int maxPlayers );
    EXPORT void sortPlayers();
    
    //----------------------------------------------------------------//
    // Information
    //----------------------------------------------------------------//

    /**
     * @brief Get the name of player.
     * 
     * @param player The slot number of the player you want to know.
     * @return std::string 
     */
    EXPORT std::string getPlayerName ( int player );

    /**
     * @brief Returns true if the slot you passed in argument represents that you are controlling.
     * 
     * @param player The slot number of the player you want to know.
     * @return bool
     */
    EXPORT bool isHuman( int player );

    //----------------------------------------------------------------//
    // Position and angle
    //----------------------------------------------------------------//

    /**
     * @brief Get the X coordinate of the player in the world.
     * 
     * @param player The player number you want to retrieve the coordinate.
     * @return float 
     */
    EXPORT float getX ( int player );

    /**
     * @brief Get the Y coordinate (up/down) of the player in the world.
     * 
     * @param player The player number you want to retrieve the coordinate.
     * @return float 
     */
    EXPORT float getY ( int player );

    /**
     * @brief Get the Z coordinate of the player in the world.
     * 
     * @param player The player number you want to retrieve the coordinate.
     * @return float 
     */
    EXPORT float getZ ( int player );

    /**
     * @brief Set the position (coordinate in the world) of a player.
     * 
     * @param player The player number you want to set the coordinates.
     * @param x The X coordinate to set.
     * @param y The Y coordinate (vertical) to set.
     * @param z The Z coordinate to set.
     * @return void 
     */
    EXPORT void setPosition( int player, float x, float y, float z );

    /**
     * @brief Set the angle of player car is pointing.
     * 
     * @param player The player number you want to set the angle.
     * @param x The angle for set in x axis.
     * @param y The angle for set in y axis.
     * @param z The angle for set in z axis.
     * @return void 
     */
    EXPORT void setAngle( int player, float x, float y, float z );

    /**
     * @brief Returns true if the player is jumping. This is a unfinished method, is not working yet.
     * 
     * @param player The player number you want to check if it is jumping or not.
     * @return bool 
     */
    EXPORT bool isJumping ( int player );

    /**
     * @brief Make the car jumps. This is a unfinished method, is not working yet.
     * 
     * @param player The player you wants to jump.
     * @param state 
     * @return void 
     */
    EXPORT void setJumping( int player, bool state );

    /**
     * @brief Returns true if the player's car has the 4 wheels on the floor.
     * 
     * @param player The player you wants to check.
     * @return bool
     */
    EXPORT bool isCarInGround ( int player );

    //----------------------------------------------------------------//
    // Physics: velocity, acceleration, mass
    //----------------------------------------------------------------//

    /**
     * @brief Get the velocity of the player, based on the internal variable that stores that value.
     * 
     * @param player The player you want to retrive it's velocity.
     * @param mph If true, the value will be returned as meters per hour. When false, will be returned as kilometers per hour.
     * @return int 
     */
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

    //----------------------------------------------------------------//
    // Pickups
    //----------------------------------------------------------------//
    EXPORT int getPickupType ( int player );
    EXPORT int getPickupNum ( int player );
    EXPORT int getIsBomb ( int player );
    EXPORT void setPickupType( int player, int w );
    EXPORT void setPickupNum( int player, int w );
    //EXPORT void setPlayerTargeting ( int player ); // TODO: Fix

    //----------------------------------------------------------------//
    // Race statistics
    //----------------------------------------------------------------//
    EXPORT int getRacePosition ( int player );
    EXPORT int getLap ( int player );
    EXPORT int getLapTime ( int player );
    EXPORT int getLastLap ( int player );
    EXPORT int getBestLap ( int player );
    EXPORT int getPlayerTotalTime ( int player );
    EXPORT void setPlayerTotalTime( int player, int totalLapTime ); 
}

#endif
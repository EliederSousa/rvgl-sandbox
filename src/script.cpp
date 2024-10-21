#include "../api/include/api.h"
#include <string.h>
#include <random>
#include <time.h>
#include <windows.h>

int lastPosition = 1;
int humanPlayer = 0;
int first = 0;

void printString( int value ) {
    Output::print(std::to_string( value ) + ", ");
}

void init() {
    Output::initConsole();
    srand(time(NULL));
    Output::println("Script initialized!");
}

void loop() {
    /*if( Race::isStarted() ) {
        //if (GetAsyncKeyState(VK_UP) & 0x8000) {
            for( int w=1;w<16; w++) {
                Player::setYAcceleration(w, -1800);
                Player::setAngle(w, rand()%100, rand()%100, rand()%100);
            }
        //}
    }*/
    Output::println("Loop initialized!");
    Utils::sleep(10);
}
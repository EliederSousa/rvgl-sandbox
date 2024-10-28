#include "../api/include/api.h"
#include <string.h>

void init() {
    Output::initConsole();
    Output::println("Script initialized!");
}

void loop() {
    if( Race::isStarted() ) {
        if (Player::isCarInGround(0)) {
            if( Input::isKeyDown(Input::Key::NUMPAD0) ) {
                Player::setYAcceleration(0, -1200);
            }
        }
    }
    //Utils::sleep(10);
}
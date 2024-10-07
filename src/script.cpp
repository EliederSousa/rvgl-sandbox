#include "../api/include/api.h"
#include <string.h>

void init() {
    Output::initConsole();
    Output::print("Mod criado com sucesso. ");
}

void loop() {
    Utils::sleep(500);
}
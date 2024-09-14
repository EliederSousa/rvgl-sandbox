#include <Windows.h>
#include "../api/include/api.h"
#include "../api/include/output.h"

void init() {
    // Insert here your initialization code.
    Output::initConsole();
    Output::print("Console iniciado com sucesso. ");
}

void loop() {
    // Put here the code to be called in loop.
    while(true) {
        Output::print("Loop");
        Sleep(1000);
    }
}
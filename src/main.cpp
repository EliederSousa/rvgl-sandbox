#include <Windows.h>
#include "../api/include/api.h"
#include "script.h"

// What about to test if we can put this code (with MainThread and DLLMain) into api.cpp, and **hide** it from user?
// So, it will be only one file (main.cpp), with init() and loop().
void sandboxInit() {
    API::init();
    init();
}

void sandboxLoop() {
    API::loop();
    loop();
}

DWORD WINAPI MainThread( LPVOID param ) {
    Utils::sleep(1000);
    sandboxInit();
    while ( true ) {
        sandboxLoop();
    }
    return 0;
}

bool APIENTRY DllMain( HMODULE hModule, DWORD dwReason, LPVOID lpReserved ) {
    if ( dwReason == DLL_PROCESS_ATTACH ) {
        CreateThread( 0, 0, MainThread, hModule, 0, 0 );
    }
    return true;
}

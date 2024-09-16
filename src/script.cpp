#include <Windows.h>
#include <iostream>
#include <random>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

#include "../api/include/api.h"
#include "../api/include/output.h"
#include "../api/include/iniloader.h"

void init() {
    // Insert here your initialization code.
    Output::initConsole();
    Output::print("Console iniciado com sucesso novamente. ");
    IniLoader::loadINIFile("mod.ini");    
    std::cout << IniLoader::getValue("default", "teste") << std::endl;
}

void loop() {
    Sleep(100);
}
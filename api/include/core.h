#ifndef _SANDBOX_CORE_H_
#define _SANDBOX_CORE_H_

#include "../../private/CasualLibrary/Address.hpp"
#include "../../private/CasualLibrary/Memory/Internal.hpp"
#include "../../private/obfuscator.h"

// #define RELEASE

namespace Core {

    /**
     * @brief The base address of the module.
     */
    extern Address rvglBaseAddress;
    extern bool isModEnabled;
    extern bool quit;
    extern bool modMainKey;
    extern int delayTime;
    extern const char* str_modeEnabled[2];
    extern bool glewInitied;

    // Colocar as chamadas para o Inipp que carreguem os endereços de memória failsafe aqui.
    // Ex: pegar o endereço base do player. Ai na classe player, usar o endereço carregado aqui.

    /**
     * @brief Check if Cheat Engine is running in the system. It's not reliable; use other techniques together.
     * 
     * @return bool
     */
    bool IsCheatEngineRunning();

    /**
     * @brief Checks if the value passed as a parameter is equal to the value in the memory address. 
     * 
     * @tparam T Example: checkMemoryValue<unsigned char>( 0x0012345, 0x90 )
     * @param address An valid address in the memory (exclude the base address of the module).
     * @param valueToCompare The value to be compared.
     * @return bool
     */
    template <typename T>
    bool checkMemoryValue( Address address, T valueToCompare );

    /**
     * @brief Loads an address in little endian format. Ex: an address in memory "03 9A 70 1A" will become 0x1A709A03. Remember to pass the offset of memory (don't add the base address).
     * 
     * @param baseStart The memory address offset of first byte to be read.
     * @return Address The address reversed.
     */
    Address loadLittleEndianAddress( Address baseStart );

    /**
     * @brief Loads an address inside an assembly instruction that uses immediate/effective addresses. This can come from a mov, lea, call, jmp, etc. The address is in little endian format, so this method reverses it and returns in big endian format.
     * 
     * @param addressInstruction The first byte of the assembly instruction in memory.
     * @param ignoreBytes How many bytes must be ignored in the instruction to reach the immediate address.
     * @param offsetOfInstruction The number of bytes the instruction uses for internal process.
     * @example Consider this instruction: 
     *      0x546DF0    lea     rax, qword_AE8EA00  -> 48 8D 05 09 7C 94 0A
     *      This instruction has 3 bytes before the address to be ignored: 48 8D 05. The address is the next 4 bytes: 09 7C 94 0A. After reversing (0A947C09), it will be summed up with module base address and added the offset of the current instruction call (call instruction needs 6 bytes for example). So, for this example, you need to call the function as loadAddressFromInstruction( 0x0546DF0, 3, 6 );
     * @return Address 
     */
    Address loadAddressFromInstruction( Address addressInstruction, int ignoreBytes, int offsetOfInstruction );

    /**
     * @brief Get an address by searching for an AOB (array of bytes). 
     * 
     * @param baseStart The start address to init the search.
     * @param baseEnd The last address to search.
     * @param sig The AOB (array of bytes) to be used in the search.
     * @param jumps Defines de nth result to be cased. Ex: if passed 2, the second occurrence of the search will be returned.
     * @return The address in the first byte of the result. 
     */
    Address getAddressBySig(Address baseStart, Address baseEnd, char* sig, int jumps );

    /**
     * @brief Disable multiplayer menu by changing calls to nop instructions in assembly code.
     * @return void
     */
    void disableMultiplayer();

    /**
     * @brief Enable multiplayer menu by rewriting assembly code to function call instruction in assembly code.
     * @return void
     */
    void restoreMultiplayer();

    /**
     * @brief 
     * 
     * Lembre-se de todos os endereços aqui são offsets que tem como base o endereço do programa carregado. Ou seja: se um endereço aqui for A8EEA00, some 400000 e dará ACEEA00 (que é o endereço real da posição de memória)
     * 
     */
    extern Address ADD_multiplayerMenu1;
    
    extern Address ADD_multiplayerMenu2; // main
    
    extern Address ADD_multiplayerMenu3;

    extern Address ADD_numberOfRacers;

    extern Address ADD_gameState;

    extern Address ADD_trackNameInternal;

    extern Address ADD_trackName;

    extern Address ADD_numberOfRacersReal;

    extern Address ADD_player;

    extern Address ADD_displayHeight;

    extern Address ADD_displayWidth;

    extern Address ADD_lapsMaxNumber;

    /**
     * @brief Print the memory offsets in hexadecimal format. The addresses are offsets: you need to add the process base address to get the real memory location in runtime.
     * @return void
     */
    void printOffsets();
}
#endif
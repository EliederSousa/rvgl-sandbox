#ifndef _SANDBOX_API_H_
#define _SANDBOX_API_H_

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

/**
 * Estes includes facilitam a importação das bibliotecas no projeto público. Lá só é necessário importar este arquivo (api.h), para
 * que todos os outros includes sejam adicionados automaticamente.
 */
#include "output.h"
#include "iniloader.h"
#include "utils.h"

namespace API {
    EXPORT void init();
    EXPORT void loop();
};

#endif
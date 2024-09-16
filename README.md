# RVGL Sandbox
A reverse enginnering project that allows devs to make mods for the Re-Volt RVGL game.

Este é um template que pode ser usado para criar mods para o jogo. Clone este projeto, e certifique-se de incluir os cabeçalhos que contém as definições dos métodos disponíveis.

Para compilar o projeto, use o Makefile.

### Estrutura de arquivos do projeto:

RVGLSandbox  
├─ api
│   ├─ include              # Todos os includes que são fornecidos com a biblioteca ficam aqui.
│   │   ├─ api.h 
│   │   ├─ iniloader.h
│   │   └─ output.h
│   ├─ lastbuild.timestamp  # Um arquivo que informa a data da última compilação.
│   ├─ sandbox.dll          # Biblioteca que carrega o que é necessário para todos os mods funcionarem.
│   ├─ version.dll          # Ultimate ASI Loader, copie-o para sua pasta.
├─ build                    # Quando você fizer build, o mod estará aqui. 
├─ src                      # Pasta que guarda seus códigos.
│   ├─ include              # Coloque aqui todos os seus includes.
│   │   └─ ...
│   ├─ main.cpp             # O entrypoint do mod, não mexa neste arquivo.
│   ├─ script.cpp           # Tudo que quiser fazer, use este arquivo.
│   └─ script.h             
├─ Makefile                 # Use este Makefile para compilar seu projeto!
└─ readme.md
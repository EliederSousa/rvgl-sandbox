COMPILER 	= g++

SOURCES_PATH	= ./src
SOURCES_NAME	= *.cpp

INCLUDE_PATHS	= -I./api/include
LIBRARY_PATHS	= -L./api

COMPILER_FLAGS	= -shared -w -Os -g0 -Wl,-subsystem,windows -Wl,--exclude-libs,ALL -Wl,--gc-sections
LINKER_FLAGS	= -lsandbox

OUTPUT_PATH	= ./build
OUTPUT_NAME	= mod.asi

all: $(SOURCES_PATH)/$(SOURCES_NAME)
	cls && $(COMPILER) $(SOURCES_PATH)/$(SOURCES_NAME) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OUTPUT_PATH)/$(OUTPUT_NAME)

COMPILER 	= g++

SOURCES_PATH	= ./src
SOURCES_NAME	= *.cpp

INCLUDE_PATHS	= -I./api/include
LIBRARY_PATHS	= -L./api

COMPILER_FLAGS	= -shared -w -Os -g0 -Wl,-subsystem,windows -Wl,--exclude-libs,ALL -Wl,--gc-sections
LINKER_FLAGS	= -lsandbox

OUTPUT_PATH	= ./build
OUTPUT_NAME	= mod.asi

# File to record the timestamp of last compilation
TIMESTAMP_FILE 	= lastbuild.timestamp

# The folder to copy the resulting file.
RVGL_FOLDER 	= "C:\Users\Elieder\Documents\RVGL"


all: $(SOURCES_PATH)/$(SOURCES_NAME) $(TIMESTAMP_FILE)
	cls && $(COMPILER) $(SOURCES_PATH)/$(SOURCES_NAME) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OUTPUT_PATH)/$(OUTPUT_NAME)

$(TIMESTAMP_FILE): $(SOURCES_PATH)/$(SOURCES_NAME)
	@powershell -command "Get-Date -Format 'dd/MM/yyyy,HH:mm:ss'" > $(OUTPUT_PATH)/$(TIMESTAMP_FILE)

clear:
	@cls && echo Cleaning previous builds...
	@if exist "$(OUTPUT_PATH)" del /Q "$(OUTPUT_PATH)\$(OUTPUT_NAME)" "$(OUTPUT_PATH)\$(TIMESTAMP_FILE)"

copy:
	@cls 
	@if exist "$(OUTPUT_PATH)/$(OUTPUT_NAME)" xcopy /F /I /Y "$(OUTPUT_PATH)/$(OUTPUT_NAME)" "$(RVGL_FOLDER)\$(OUTPUT_NAME)"
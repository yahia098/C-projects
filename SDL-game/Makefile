C = gcc
CFLAGS = -Wall
TARGET := SpaceJam
SRC = .\src\main.c
# Detect OS and set RM command
ifeq ($(OS),Windows_NT)
    SHELL := C:/Windows/System32/cmd.exe
    RM := del /f /q
    EXE := .exe
	INCLUDES := -I .\include 
	LIBS := -L .\lib -lSDL3
else
    RM := rm -f
    EXE :=
	INCLUDES :=
	LIBS := -lSDL3
endif
CFLAGS += $(INCLUDES)
CFLAGS += $(LIBS)
all: 
	$(C) $(SRC) $(CFLAGS) -o ./bin/$(TARGET)

run : 
	./bin/$(TARGET)

clean:
ifeq ($(OS),Windows_NT)
	$(RM) bin\SpaceJam.exe
else
	$(RM) bin/SpaceJam
endif



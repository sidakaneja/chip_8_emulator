INCLUDES = -I /opt/homebrew/include -I ./include
LINK = -L /opt/homebrew/lib -lSDL2
FLAGS = -g
OBJECTS = ./src/chip8_memory.c ./src/chip8_stack.c ./src/chip8_keyboard.c

all: 
	gcc ${FLAGS} ${INCLUDES} ${LINK} ${OBJECTS} ./src/main.c -o ./bin/main
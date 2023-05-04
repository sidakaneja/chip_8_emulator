#ifndef CHIP8_STACK_H
#define CHIP8_STACK_H

#include "config.h"
#include <stdint.h>

struct chip8;

struct chip8_stack
{
    uint8_t stack[CHIP8_STACK_CAPACITY];
};

void chip8_stack_push(struct chip8* chip8, uint8_t val);
uint8_t chip8_stack_pop(struct chip8* chip8);
#endif

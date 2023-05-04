#ifndef CHIP8_REGISTERS_H
#define CHIP8_REGISTERS_H

#include <stdint.h>
#include "config.h"

struct chip8_registers
{
    uint8_t V[CHIP8_TOTAL_DATA_REGISTERS];
    uint16_t I;
    uint16_t PC;
    uint8_t SP;
    uint8_t delay_timer;
    uint8_t sound_timer;
};

#endif

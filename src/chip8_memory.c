#include "chip8_memory.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

static void chip8_memory_bound_check(int index)
{
    assert(index >= 0 && index < CHIP8_MEMORY_SIZE);
}
void chip8_memory_set(struct chip8_memory *memory, int index, uint8_t value)
{
    if (!memory)
    {
        printf("null memory provided to chip8_memory_set\n");
        exit(EXIT_FAILURE);
    }
    chip8_memory_bound_check(index);
    memory->memory[index] = value;
}
uint8_t chip8_memory_get(struct chip8_memory *memory, int index)
{
    if (!memory)
    {
        printf("NULL memory provided to chip8_memory_get\n");
        exit(EXIT_FAILURE);
    }
    chip8_memory_bound_check(index);
    return memory->memory[index];
}
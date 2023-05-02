# Chip-8 Emulator (In progress)

A multiplatform Chip-8 emulator written in C; currently available for: Windows, OS X, Linux based OSes that support the SDL2 library.

Note:
This emulation is meant for educational purposes only.

## Installation

```bash
make
```

## Dependency 
SDL2 library.

## Internals

#### Memory and Stack
- 4096 bytes of memory between 0x000-0xFFF.
- 16 16-bit size stack separate from main memory (upto 16 nested subroutines).

#### Registers
- 16 8-bit general registers.
- 16-bit PC register and I register (stores memory addresses). 
- 8-bit Stack Pointer register.
- 8-bit sound and delay timer registers.
- 36 instructions 2 bytes in size.

#### Display
- Monochrome 64X32 Pixel display.
- Uses sprites rather than pixels. Sprites overflow wrap around the screen.
    - Each sprite can have upto 15 "rows" of 8-bits each. Each bit represents an on pixel.
    - Sprites get XOR'ed onto the display.

#### Keyboard
- 16 key keyboard from 0-F. Key meaning varies between games.

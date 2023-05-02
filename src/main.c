#include <stdio.h>
#include "SDL2/SDL.h"
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        printf("error initializing SDL: %s\n", SDL_GetError());
        return 1;
    }

    // Test window, h and w scaled by 10 so each pixel of chip-8 = 100 pixels displayed
    SDL_Window *window = SDL_CreateWindow(
        "Chip-8 Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 320, 0);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);
    SDL_Rect r;
    r.x = 0;
    r.y = 0;
    r.w = 40;
    r.h = 40;
    SDL_RenderDrawRect(renderer, &r);
    SDL_RenderPresent(renderer);

    // Need to poll events in loop, otherwise the window doesn't render
    SDL_Event e;
    bool quit = false;
    while (!quit)
    {
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
            if (e.type == SDL_KEYDOWN)
            {
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN)
            {
                quit = true;
            }
        }
    }

    SDL_DestroyWindow(window);
    return 0;
}
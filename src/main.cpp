#include <cstdlib>
#include <iostream>

#define SDL_MAIN_HANDLED
#include "SDL2/SDL.h"

int main()
{
    SDL_SetMainReady();
    SDL_Init(SDL_INIT_VIDEO);
    std::atexit(SDL_Quit);

    auto version = SDL_version{};
    SDL_GetVersion(&version);
    std::cout << static_cast<int>(version.major) << "." << static_cast<int>(version.minor) << "." << static_cast<int>(version.patch);
}

#include <SDL2/SDL.h>

#define SDL_SetRenderDraw_SDL_Color(renderer, color) \
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a)

static const SDL_Color BLACK = {0, 0, 0, 255};
static const SDL_Color WHITE = {255, 255, 255, 255};
static const SDL_Color RED = {255, 0, 0, 255};
static const SDL_Color GREEN = {0, 255, 0, 255};
static const SDL_Color BLUE = {0, 0, 255, 255};
static const SDL_Color CYAN = {0, 255, 25, 255};
static const SDL_Color MAGENTA = {255, 0, 25, 255}; 
static const SDL_Color BROWN = {165, 42, 42, 255}; 
static const SDL_Color ORANGE = {255, 165, 0, 255}; 
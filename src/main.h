#ifndef MAIN_H_
#define MAIN_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>

#include "application/application.h"
#include "utils/current_time.h"
#include "color.h"
#include "input/keyboard.h"
#include "render/image.h"
#include "render/label.h"
#include "render/sprite.h"
#include "render/sprite_enum.h"

int main();

void render();

void update();

void handle_events();

#endif
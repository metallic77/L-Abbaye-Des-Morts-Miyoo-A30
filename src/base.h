/* base.h */

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>

#define uint unsigned int

#ifdef __SWITCH__
#  include <switch.h>
#endif

// SDL2 renderer. Needs to be declared here because several different units access to it
// directly to draw on it because there's no discrete graphics unit, but it works, so no complains :D
extern SDL_Renderer *renderer;

// Default layout to PSX gamepad with USB adapter
#define JUMP_JOYBUTTON 2
#define SELECT_JOYBUTTON 5
#define START_JOYBUTTON 6
#define X_JOYAXIS 0
#define Y_JOYAXIS 1

#define SCREEN_W 256
#define SCREEN_H 256

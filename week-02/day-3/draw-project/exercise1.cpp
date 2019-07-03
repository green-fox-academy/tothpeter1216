//
// Created by Peti on 2019. 07. 03..
//

#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 240, 640, 240);

    SDL_SetRenderDrawColor(gRenderer,0, 255, 0, 0);
    SDL_RenderDrawLine(gRenderer, 320, 0, 320, 480);


}
#include "draw.h"

void diagonals(SDL_Renderer *gRenderer);
void draw2(SDL_Renderer *gRenderer);

void draw(SDL_Renderer* gRenderer) {

    //diagonals(gRenderer);
    draw2(gRenderer);

}

void diagonals(SDL_Renderer *gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 240, 640, 240);

    SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    SDL_RenderDrawLine(gRenderer, 0, 240, 640, 240);
}

void draw2(SDL_Renderer *gRenderer)
{

}
// Draw the canvas' diagonals.
// If it starts from the upper-left corner it should be green, otherwise it should be red.
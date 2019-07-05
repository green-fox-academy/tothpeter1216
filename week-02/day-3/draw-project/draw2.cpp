#include "draw.h"

// -----------------------------------To the center---------------------------------------------------

//void lineDrawer (SDL_Renderer* gRenderer, int x, int y){
//
//    for (int i = 0; i < 3; ++i) {
//
//        SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//        SDL_RenderDrawLine(gRenderer, x +i*10, y + i*10, 320, 240);
//    }
//}
//
//void draw(SDL_Renderer* gRenderer) {
//
//    int x = 200;
//    int y = 300;
//    lineDrawer(gRenderer, x,y);

//}
//
// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a line from that point to the center of the canvas.
// Draw at least 3 lines with that function using a loop.

//--------------------------------------------Horizontal---------------------------------------------------------

//void horizontalLine (SDL_Renderer* gRenderer, int x, int y);
//
//void draw(SDL_Renderer* gRenderer) {
//    int x = 100;
//    int y = 200;
//    horizontalLine(gRenderer, x, y);
//
//}
//
//void horizontalLine (SDL_Renderer* gRenderer, int x, int y){
//
//    for (int i = 0; i < 3; ++i) {
//        SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//        SDL_RenderDrawLine(gRenderer, x + i*10, y + i *10, (x+ i *10) + 50, (y+ i * 10));
//    }
//}
//
// Create a function that draws a single line and takes 2 parameters:
// The x and y coordinates of the line's starting point
// and draws a 50 long horizontal line from that point.
// Draw at least 3 lines with that function using a loop.


//-------------------------------------centered_square-----------------------------------------------

//void draw(SDL_Renderer* gRenderer) {
//
//    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
//    SDL_RenderDrawLine(gRenderer, 270, 190, 270, 290);
//    SDL_RenderDrawLine(gRenderer, 270, 290, 370, 290);
//    SDL_RenderDrawLine(gRenderer, 370, 290, 370, 190);
//    SDL_RenderDrawLine(gRenderer, 370, 190, 270, 190);
//
//}
//
//
// Draw a green 100x100 square to the canvas' center.

//--------------------------------------four_rectangles-------------------------------------------


//void draw(SDL_Renderer* gRenderer) {
//    for (int i = 0; i < 4; ++i) {
//        SDL_SetRenderDrawColor(gRenderer, 0+ i*50, 0+ i*20, 0+ i*20, 0);
//        SDL_Rect fillRect = { 0 + (200 * i), 100, 20, 50+ (100 + i)};
//        SDL_RenderFillRect( gRenderer, &fillRect );
//
//    }
//
//
//}
//
// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.


//------------------------------------------position_square---------------------------------------


//void squareDrawer(SDL_Renderer* gRenderer, int x, int y);
//
//void draw(SDL_Renderer* gRenderer) {
//
//    int xPosition = 100, yPosition = 100;
//
//    squareDrawer(gRenderer, xPosition, yPosition);
//
//    //SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
//    //    SDL_Rect fillRect = { 100, 100, 20, 50};
//    //    SDL_RenderFillRect( gRenderer, &fillRect );
//
//
//}
//
//void squareDrawer(SDL_Renderer* gRenderer, int x, int y){
//
//    for (int i = 0; i < 3; ++i) {
//
//        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
//        SDL_Rect fillRect = { 100*i, 100*i, 50, 50};
//        SDL_RenderFillRect( gRenderer, &fillRect );
//    }
//}
// create a function that draws one square and takes 2 parameters:
// the x and y coordinates of the square's top left corner
// and draws a 50x50 square from that point.
// draw at least 3 squares with that function.
// avoid code duplication.
//
//------------------------------------------center_box_function----------------------

//void squareDrawer (SDL_Renderer* gRenderer, int size){
//    int heightCentered = 640/2;
//    int weightCentered = 480/2;
//
//    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF);
//        SDL_Rect fillRect = { heightCentered, weightCentered, size, size};
//        SDL_RenderDrawRect( gRenderer, &fillRect );
//}
//
//void draw(SDL_Renderer* gRenderer) {
//    int squareSide = 100;
//
//    for (int i = 0; i < 3; ++i) {
//        squareDrawer(gRenderer, squareSide+i*10);
//    }
//
//
//}
//
// create a function that draws one square and takes 1 parameters:
// the square size
// and draws a square of that size to the center of the canvas.
// draw at least 3 squares with that function.
// the squares should not be filled otherwise they will hide each other
// avoid code duplication.


//----------------------------------------rainbow_box_function--------------------------------


//void squareDrawer (SDL_Renderer* gRenderer, int size, int color)
//{
//    int centerHeight = 640 / 2;
//    int centerweight = 480 / 2;
//    SDL_SetRenderDrawColor(gRenderer, color, color, color, 0);
//    SDL_Rect fillRect = {centerHeight-size/2, centerweight-size/2, size, size};
//    SDL_RenderDrawRect(gRenderer, &fillRect);
//}
//
//void draw(SDL_Renderer* gRenderer) {
//    int size = 50;
//    int color = 0;
//    int maxSize = 480;
//    for (int i = 0; size + i*50 < maxSize; ++i) {
//        squareDrawer(gRenderer, size+i*50, color+i*30);
//    }
//
//}
//
// Create a square drawing function that takes 2 parameters:
// The square size, and the fill color,
// and draws a square of that size and color to the center of the canvas.
// Create a loop that fills the canvas with a rainbow of colored squares.


//-------------------------------------- purple_steps_3d ----------------------------------------------------

//void draw(SDL_Renderer* gRenderer) {
//
//
//    for (int i = 0; i < 19; ++i) {
//        SDL_SetRenderDrawColor(gRenderer, 182, 102, 210, 0);
//        SDL_Rect fillRect = { 20 + i*20, 20 + i*20, 20, 20};
//        SDL_RenderFillRect( gRenderer, &fillRect );
//
//        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0);
//        SDL_Rect fillRect2 = { 20 + i*20, 20 + i*20, 20, 20};
//        SDL_RenderDrawRect( gRenderer, &fillRect2 );
//    }
//
//}
//
// Reproduce this:
// [https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/drawing/assets/r4.png]
// Pay attention for the outlines as well


//------------------------------------------Purple steps 3d---------------------------------------------


//void draw(SDL_Renderer* gRenderer)
//{
//
//
//    for (int i = 1; i < 7; ++i) {
//
//        int sizeIncrementer = 10;
//        sizeIncrementer = sizeIncrementer *2*i;
//        int positionIncrementer = 1;  //+i*20;
//        positionIncrementer = positionIncrementer + sizeIncrementer*(i-1)/2;
//        SDL_SetRenderDrawColor(gRenderer, 182, 102, 210, 0);
//        SDL_Rect fillRect = {positionIncrementer, positionIncrementer, sizeIncrementer, sizeIncrementer};
//        SDL_RenderFillRect(gRenderer, &fillRect);
//
//        SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0);
//        SDL_Rect fillRect2 = {positionIncrementer, positionIncrementer, sizeIncrementer, sizeIncrementer};
//        SDL_RenderDrawRect(gRenderer, &fillRect2);
//    }
//}





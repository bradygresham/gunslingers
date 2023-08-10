#include "graphical_functions.h"

void init_game_graphics(){
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Gunslingers", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,0);
    
    SDL_Rect leftCowboyRect = {PLAYER1_X, PLAYER1_Y, int(PLAYER1_H), PLAYER1_W};
    
    SDL_Rect rightCowboyRect = {PLAYER2_X, PLAYER2_Y, int(PLAYER2_H), PLAYER2_W};

    
    SDL_Texture *texture = IMG_LoadTexture(renderer, BACKGROUND_IMG);
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    texture = IMG_LoadTexture(renderer, PLAYER1_SPRITE);
    SDL_RenderCopy(renderer, texture, NULL, &leftCowboyRect);
    texture = IMG_LoadTexture(renderer, PLAYER2_SPRITE);
    SDL_RenderCopy(renderer, texture, NULL, &rightCowboyRect);
    SDL_RenderPresent(renderer);


	SDL_Delay(5000);

   
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
    SDL_Quit();

}
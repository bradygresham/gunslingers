#pragma once
#include <SDL2/SDL.h>
#include "Player.h"
class Sprite{
    public:
    Sprite();
    Sprite(Player player);
    ~Sprite();

    int getX();
    int getY();
    int getW();
    int getH();

    SDL_Rect getSource();
    SDL_Rect getDestination();
    SDL_RendererFlip getFlip();
    SDL_Texture* getTexture();


    private:
    int _xCoord;
    int _yCoord;
    int _width;
    int _height;
    // initialize these with the above integers
    SDL_Rect sourceRect;
    SDL_Rect destinationRect;
    //

    SDL_RendererFlip _flip;
    SDL_Texture* _texture;

};
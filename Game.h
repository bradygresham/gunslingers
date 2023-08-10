#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <GL/gl.h>
#include <string>
#include <iostream>

#include "Player.h"

enum class gameState{PLAY, EXIT};
void error(std::string error_message);

class Game{
    public:
    Game();
    ~Game();

    void run();
    
    
    private:
    void init_systems();
    void process_input();
    void game_loop();
    void copyTexturetoRenderer(SDL_Texture* Texture);
    
    //delete this later
    //void shootAnimation(Player &player); 

    
    

    SDL_Window *_window;
    SDL_Renderer * _renderer;
    SDL_Texture * _texture; //delete this later
    int _windowHeight;
    int _windowWidth;
    const char* _pathToBackgroundImage; //delete this later
    gameState _gameState;


    
};
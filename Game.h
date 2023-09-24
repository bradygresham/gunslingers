#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <GL/gl.h>
#include <string>
#include <iostream>
#include "../Easy2d/R2R_Vulkan/R2R_Vulkan_Engine.h"


enum class gameState{PLAY, EXIT}; //possibly put in engine
void error(std::string error_message);

class Game{
    public:
    Game();
    ~Game();

    void run();
    
    private:
    void init_systems();
    //manual initialization
    void process_input();
    void game_loop();
    void drawGame();

    R2R::R2R_Vulkan_Engine _engine;
    gameState _gameState;
};
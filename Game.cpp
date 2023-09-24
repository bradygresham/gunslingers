#include "Game.h"
#include <SDL2/SDL.h>
#include <vulkan/vulkan.h>
#include "../Easy2d/R2R_Vulkan/R2R_Vulkan_Device.h"
#include "../Easy2d/R2R_Vulkan/R2R_Layer_Utils.h"
#include "../Easy2d/R2R_Vulkan/R2R_Extension_Utils.h"
#include "../Easy2d/Error.h"
Game::Game()
{
    _gameState = gameState::PLAY;
}
Game::~Game()
{
    SDL_Quit();
}

void Game::run()
{
    init_systems();
    drawGame();
    game_loop();
}

void Game::init_systems()
{
    _engine.init_systems();
}

void Game::drawGame() //update
{
    
}

void Game::process_input()
{
    SDL_Event e;
    while(SDL_PollEvent(&e)){
        switch (e.type){
            case SDL_QUIT: 
            _gameState = gameState::EXIT; 
            break;
            case SDL_MOUSEMOTION:
            break;
            
        }
    }
}

void Game::game_loop()
{
    while (_gameState == gameState::PLAY){
        process_input();
        drawGame();
    }
}



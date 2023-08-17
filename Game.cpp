#include "Game.h"
#include <SDL2/SDL.h>

Game::Game()
{
    _gameState = gameState::PLAY;
    _pathToBackgroundImage = "/home/laptop/Desktop/cpp/gunslingers/sprite_images/desert_pngs/bg_desert.png";    
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
    SDL_Init(SDL_INIT_EVERYTHING);
    _window.init_window();
    _renderer.init_renderer(_window.getWindow(), 0);
}

void Game::init_systems(const char* title, int x, int y, int w, int h, Uint32 window_flags, Uint32 rendererFlags)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    _window.init_window(title, x, y, w, h, window_flags);
    _renderer.init_renderer(_window.getWindow(), rendererFlags);
}

void Game::drawGame()
{
    _texture.setTexture(_pathToBackgroundImage);
    _renderer.copyTexturetoRenderer(_texture.getTexture());
    SDL_RenderPresent(_renderer.getRenderer());
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

    }
}



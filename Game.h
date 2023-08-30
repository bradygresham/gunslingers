#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <GL/gl.h>
#include <string>
#include <iostream>
#include "../Easy2d/Renderer.h"
#include "../Easy2d/Window.h"
#include "../Easy2d/Texture.h"
#include "../Easy2d/Camera.h"


enum class gameState{PLAY, EXIT};
void error(std::string error_message);

class Game{
    public:
    Game();
    ~Game();

    void run();
    
    private:
    void init_systems();
    //manual initialization
    void init_systems(const char* title, int x, int y, int w, int h, Uint32 window_flags, Uint32 rendererFlags);
    
    void process_input();
    void game_loop();
    void drawGame();

    Window _window;
    Renderer _renderer;
    Texture _texture; 
    Camera _camera;
    gameState _gameState;
};
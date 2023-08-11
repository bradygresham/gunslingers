
#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include "/home/brady/Desktop/code/cpp/Easy2d/include.h"

enum enumSpriteStates{
    IDLE_NO_GUN,
    IDLE_WITH_GUN,
    SHOOT1,
    SHOOT2,
    SHOOT3,
    SHOOT4
}; 

class Player{
    public:
    Player();
    Player(int new_player_id); //player1 player2 
    ~Player();
    
    void setHealth(int new_health);
    int getHealth();
    void decrementHealth();

    void setAmmo(int new_ammo);
    int getAmmo();
    void decrementAmmo();

    bool setAction(char new_action);
    char getAction();

    void init_sprite();
    


    int get_player_id();

    void setTextureID(int new_texture);
    int getTextureID();

    const char * getFilePath();
    SDL_RendererFlip getFlip();


    private:
    
    Sprite _playerSprite;
    SDL_RendererFlip _flip;
    int _health;
    int _ammo;

    char _action; //'d' for dodge, 'r' for reload, 'f' for fire
    int _playerID; //player1, player 2

    

    //use above enumSpriteStates to access images


};



#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include "../Easy2d/Sprite.h"

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


    private:
    
    Sprite _playerSprite; //from easy2d
    int _health;
    int _ammo;

    char _action; //'d' for dodge, 'r' for reload, 'f' for fire
    int _playerID; //player1, player 2

 


};


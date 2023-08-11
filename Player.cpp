#include "Player.h"
#include "config.h"
#include <SDL2/SDL.h>

Player::Player()
{
    _health = MAX_HEALTH;
    _ammo = MAX_AMMO;
    _playerID = -1;
    _action = '\0';
}


void Player::init_sprite()
{

}


Player::Player(int new_player_id)
{
    _health = MAX_HEALTH;
    _ammo = MAX_AMMO;
    _action = '\0';
    _playerID = new_player_id;
}

Player::~Player()
{

}

void Player::setHealth(int new_health)
{
    _health = new_health;
}

void Player::setAmmo(int new_ammo)
{
    _ammo = new_ammo;
}

bool Player::setAction(char new_action)
{
    switch (new_action){
        case 'd': break;
        case 'r': break;
        case 'f': break;
        default: return false; break;
    }
    _action = new_action;
    return true;
}

void Player::decrementAmmo()
{
    _ammo -= 1;
}

void Player::decrementHealth()
{
    _health -= 1;
}

int Player::getHealth()
{
    return _health;
}

int Player::getAmmo()
{
    return _ammo;
}

char Player::getAction()
{
    return _action;
}


int Player::get_player_id()
{
    return _playerID;
}


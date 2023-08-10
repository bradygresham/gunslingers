#include "gameRound.h"
#include "config.h"

#include <iostream>

Round::Round()
{
    round_number = 1;
}

Round::~Round()
{

}

int Round::getRoundNumber()
{
    return round_number;
}

void Round::incrementRound()
{
    round_number += 1;
}

void Round::evalRound(Player &player1, Player &player2){
    char player1_copy_action = player1.getAction();
    char player2_copy_action = player2.getAction();

    //ff, fd, fr, df, dd, dr, rf, rd, rr

    if (player1_copy_action == 'f' && player2_copy_action == 'f')
    {
        player1.decrementAmmo();
        player1.decrementHealth();

        player2.decrementAmmo();
        player2.decrementHealth();
    }
    else if (player1_copy_action == 'f' && player2_copy_action == 'd')
    {
        player1.decrementAmmo();

        player2.decrementHealth();
    }
    else if (player1_copy_action == 'f' && player2_copy_action == 'r')
    {
        player1.decrementAmmo();

        player2.setAmmo(MAX_AMMO);
        player2.decrementHealth();
    }
    else if (player1_copy_action == 'd' && player2_copy_action == 'f')
    {
        player1.decrementHealth();

        player2.decrementAmmo();
    }
    else if (player1_copy_action == 'd' && player2_copy_action == 'd')
    {

    }
    else if (player1_copy_action == 'd' && player2_copy_action == 'r')
    {
        player2.setAmmo(MAX_AMMO);
    }
    else if (player1_copy_action == 'r' && player2_copy_action == 'f')
    {
        player1.setAmmo(MAX_AMMO);
        player1.decrementHealth();

        player2.decrementAmmo();

    }
    else if (player1_copy_action == 'r' && player2_copy_action == 'd')
    {
        player1.setAmmo(MAX_AMMO);
    }
    else if (player1_copy_action == 'r' && player2_copy_action == 'r')
    {
        player1.setAmmo(MAX_AMMO);
        player2.setAmmo(MAX_AMMO);
    }
    else {std::cout << "Error, invalid actions: Player 1 - " << player1_copy_action << "Player 2 - " <<  player2_copy_action << std::endl;}
    player1.setAction('\0');
    player2.setAction('\0');
    incrementRound();
    
    
}

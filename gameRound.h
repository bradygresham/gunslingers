#pragma once

#include "Player.h"

class Round{
    public:
    Round();
    ~Round();

   
    int getRoundNumber();
    void incrementRound();
    void evalRound(Player &player1, Player &player2);

    private:
    int round_number;
    
};
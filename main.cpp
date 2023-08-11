#include <iostream>

#include "/home/brady/Desktop/code/cpp/Easy2d/include.h" //library file

#include "Player.h"
//#include "gameRound.h"
#include "config.h"

int main(int argc, char* argv[]){
    
    Player player1(1);
    Player player2(2);
    //Round r;
    Game g;
//initializing sdl objects
    
    g.run();
    
	return EXIT_SUCCESS;
    
}
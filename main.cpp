#include <iostream>
#include "../Easy2d/textureManager.h"
#include"Game.h"
//#include "gameRound.h"

int main(int argc, char* argv[]){
    

    Game g;
	g.run();
	textureManager::destroyCache();
	return EXIT_SUCCESS;
    
}
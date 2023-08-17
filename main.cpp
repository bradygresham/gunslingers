#include <iostream>
#include "../Easy2d/ResourceManager.h"
#include"Game.h"
//#include "gameRound.h"

int main(int argc, char* argv[]){
    

    Game g;
	g.run();
	ResourceManager::destroyCache();
	return EXIT_SUCCESS;
    
}
#include <iostream>
#include "../Easy2d/ResourceManager.h"
#include"Game.h"
//#include "gameRound.h"

int main(int argc, char* argv[]){
    

    Game g;
	g.run();
	//ResourceManager::destroyCache(); its possible this is not the way to do this
	return EXIT_SUCCESS;
    
}
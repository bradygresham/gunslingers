#include <iostream>
#include"Game.h"
#include <SDL2/SDL.h>
#include <vulkan/vulkan.h>


//#include "../Easy2d/R2R_Vulkan/R2R_Vulkan_Instance.h"


int main(int argc, char* argv[]){
    
	Game g;
	g.run();
	return EXIT_SUCCESS;
}
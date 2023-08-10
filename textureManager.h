#pragma once

#include <SDL2/SDL.h>
#include <map>
#include <string>

class textureManager{

    static std::map<std::string, const char*> textureMap;

    static SDL_Texture textureCache(std::string filePath);


};
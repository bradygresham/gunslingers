#!/bin/bash
#maybe try: *.cpp ../Easy2d/*.cpp
#cpp_files = "*.cpp ../Easy2d/*.cpp"
cpp_files="main.cpp Player.cpp Game.cpp gameRound.cpp 
../Easy2d/ResourceManager.cpp ../Easy2d/Sprite.cpp 
../Easy2d/Error.cpp ../Easy2d/Renderer.cpp 
../Easy2d/Texture.cpp ../Easy2d/textureManager.cpp ../Easy2d/Window.cpp ../Easy2d/Camera.cpp"
g++ -o gunslinger $cpp_files -lSDL2 -lSDL2_image



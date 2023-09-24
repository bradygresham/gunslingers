#!/bin/bash

CPP_FILES="*.cpp ../Easy2d/*.cpp ../Easy2d/R2R_Vulkan/*.cpp"
g++ -g -Og -o gunslinger $CPP_FILES -lSDL2 -lSDL2_image -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi 



cmake_minimum_required(VERSION 3.22.1)
project(gunslingers)

set(SOURCES
    main.cpp
    Game.cpp
)

add_executable(gunslingers ${SOURCES})

# Use find_library to locate the library
find_library(Easy2dLib Easy2d HINTS "${CMAKE_CURRENT_SOURCE_DIR}/../Easy2d/build")

# Link the library using target_link_libraries
target_link_libraries(gunslingers ${Easy2dLib})




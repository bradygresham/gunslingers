#pragma once

//player definitions
#define MAX_AMMO 5
#define MAX_HEALTH 3
#define PLAYER1_SPRITE "cowboy_sprite.png"
#define PLAYER2_SPRITE "flipped_cowboy_sprite.png"

//window and image/sprite definitions

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

#define BACKGROUND_IMG "desert.jpg"

#define HEART_SPRITE "pixel_heart.png"

#define AMMO_SPRITE "ammo_indicator.png"

//coordinates

#define PLAYER1_X 110
#define PLAYER1_Y 440

#define PLAYER2_X 550
#define PLAYER2_Y 440

#define HEALTH_BAR_Y 30
#define PLAYER1_HEALTH_BAR_X 30
#define PLAYER2_HEALTH_BAR_X 610

#define AMMO_BAR_Y 80
#define PLAYER1_AMMO_BAR_X 30
#define PLAYER2_AMMO_BAR_X 610

//widths and heights

#define PLAYER_W 100
#define PLAYER_H PLAYER_W * 1.4375 //original image is 460 height and 320 width: height is 1.4375 times the width

#define HEART_W 40
#define HEART_H 40

#define AMMO_W 30
#define AMMO_H 30

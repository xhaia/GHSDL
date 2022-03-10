#pragma once
struct Vector2D
{
	float x;
	float y;
	Vector2D()
	{
		x = 0;
		y = 0;
	}
	Vector2D(float initial_x, float initial_y)
	{
		x = initial_x;
		y = initial_y;
	}

};

enum SCREENS
{
	SCREEN_INTRO,
	SCREEN_MENU,
	SCREEN_LEVEL1,
	SCREEN_LEVEL2,
	SCREEN_GAMEOVER,
	SCREEN_HIGHSCORES,
};


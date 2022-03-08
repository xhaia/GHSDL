#pragma once
#include "Commons.h"
#include "GameScreen.h"
#include <SDL.h>
class Texture2D;

class GameScreenLevel1 : GameScreen
{
	Texture2D* m_background_texture;

	GameScreenLevel1(SDL_Renderer* renderer);
	~GameScreenLevel1();

	void Render() override;
	void Update(float deltaTime, SDL_Event e) override;

	bool SetUpLevel();
};


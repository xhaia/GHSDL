#pragma once
#include <SDL.h>
#include <string>

class GameScreen
{
	SDL_Renderer* m_renderer;

	GameScreen(SDL_Renderer* renderer);
	~GameScreen();
	
	virtual void Render();
	virtual void Update(float deltaTime, SDL_Event e);
};

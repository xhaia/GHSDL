#include "GameScreen.h"
#include <SDL.h>
#undef main
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "Constants.h"
#include <iostream>
#include "Texture2D.h"
#include "Commons.h"
using namespace std;

GameScreen::GameScreen(SDL_Renderer* renderer) {
	m_renderer = renderer;
}

GameScreen::~GameScreen()
{
	m_renderer = nullptr;
}

void GameScreen::Render()
{

}

void GameScreen::Update(float deltaTime, SDL_Event e)
{

}

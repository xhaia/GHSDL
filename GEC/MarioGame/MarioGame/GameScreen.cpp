#include "GameScreen.h"
#include <SDL.h>
#include "Texture2D.h"
#include <SDL_image.h>
#include <SDL_mixer.h>
#include "Commons.h"
#include <iostream>
using namespace std;

GameScreen::GameScreen(SDL_Renderer* renderer)
{
	m_renderer = renderer;
}
GameScreen::~GameScreen()
{
	m_renderer = nullptr;
}

void GameScreen::Render() {}

void GameScreen::Update(float deltaTime, SDL_Event e) {}



#include "GameScreenLevel1.h"
#include "Texture2D.h"
#include "Collisions.h"
#include <iostream>
using namespace std;

GameScreenLevel1::GameScreenLevel1(SDL_Renderer* renderer) : GameScreen(renderer)
{
	SetUpLevel();
}

GameScreenLevel1::~GameScreenLevel1()
{
	delete m_background_texture;
	m_background_texture = nullptr;

	delete Mario;
	Mario = nullptr;

	delete Luigi;
	Luigi = nullptr;
}

void GameScreenLevel1::Render()
{
	//draw the background
	m_background_texture->Render(Vector2D(), SDL_FLIP_NONE);

	Mario->Render();
	Luigi->Render();
}

void GameScreenLevel1::Update(float deltaTime, SDL_Event e)
{
	//Update character
	Mario->Update(deltaTime, e);
	Luigi->Update(deltaTime, e);


	if (Collisions::Instance()->Circle(Mario, Luigi))
	{
		cout << "Circle hit!" << endl;
	}
}

bool GameScreenLevel1::SetUpLevel()
{
	//draw the background
	m_background_texture = new Texture2D(m_renderer);
	if (!m_background_texture->LoadFromFile("Images/test.bmp"))
	{
		cout << "Failed to load background texture!" << endl;
		return false;
	}

	//set up player character
	Mario = new CharacterMario(m_renderer, "Images/Mario.png", Vector2D(64, 330));
	Luigi = new CharacterLuigi(m_renderer, "Images/Luigi.png", Vector2D(64, 330));
}

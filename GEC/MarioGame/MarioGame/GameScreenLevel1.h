#pragma once
#include "GameScreen.h"
#include "Commons.h"
#include "Character.h"
#ifndef _GameScreenLevel1_H
#define _GameScreenLevel1_H

class Texture2D;
class Character;

class GameScreenLevel1 : GameScreen
{
private:
	Texture2D* m_background_texture;
	bool SetUpLevel();
	Character* my_character;

public:
	GameScreenLevel1(SDL_Renderer* renderer);
	~GameScreenLevel1();

	void Render() override;
	void Update(float deltaTime, SDL_Event e) override;
};

#endif _GameScreenLevel1_H
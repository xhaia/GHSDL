#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <iostream>
#include "Commons.h"
#include <string>
#include "LevelMap.h"
using namespace std;
#ifndef _CHARACTER_H
#define _CHARACTER_H

class Texture2D;

class Character
{
protected:
	SDL_Renderer* m_renderer;
	Vector2D m_position;
	Texture2D* m_texture;
	FACING m_facing_direction;
	bool m_moving_left;
	bool m_moving_right;

	virtual void MoveLeft(float deltaTime);
	virtual void MoveRight(float deltaTime);
	virtual void Jump();
	virtual void AddGravity(float deltaTime);

	bool m_jumping;
	bool m_can_jump;
	float m_jump_force;

	float m_collision_radius;

private:
	LevelMap* m_current_level_map;

public:
	Character(SDL_Renderer* renderer, string imagePath, Vector2D start_position, LevelMap* map);
	~Character();

	virtual void Render();
	virtual void Update(float deltaTime, SDL_Event e);
	void SetPosition(Vector2D new_position);
	Vector2D GetPosition();

	float GetCollisionRadius();
};

#endif _CHARACTER_H


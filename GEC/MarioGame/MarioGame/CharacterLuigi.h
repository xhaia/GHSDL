#pragma once
#include "Character.h"
#include <SDL.h>
using namespace std;
#ifndef _CHARACTERLUIGI_H
#define _CHARACTERLUIGI_H

class Texture2D;

class CharacterLuigi : public Character
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

public:
	CharacterLuigi(SDL_Renderer* renderer, string imagePath, Vector2D start_position);
	~CharacterLuigi();

	virtual void Render();
	virtual void Update(float deltaTime, SDL_Event e);
	void SetPosition(Vector2D new_position);
	Vector2D GetPosition();

	float GetCollisionRadius();
};


#endif _CHARACTERLUIGI_H






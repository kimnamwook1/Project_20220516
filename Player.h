#pragma once
#include "Vector2D.h"
#include "Actor.h"

class Player: public AActor
{
public:
	Player();
	virtual ~Player();


	void Move(int KeyCode);
};


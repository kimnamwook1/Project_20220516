#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();
	~AActor(); //¼Ò¸êÀÚ

	char Shape;
	Vector2D Location;
	bool bCollide;

	void Draw();
};


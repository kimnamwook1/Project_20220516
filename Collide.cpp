#include "Collide.h"
#include "Vector2D.h"
#include "Map.h"
#include "Player.h"

Collide::Collide()
{
	bool IsCollide(const Vector2D& PredictPlayerPosition, Vector2D& OutPlayerPosition)
	{
		if (Map[PredictPlayerPosition.Y][PredictPlayerPosition.X] == '#')
		{
			return false;
		}
		else
		{
			OutPlayerPosition = PredictPlayerPosition;
			return true;
		}
	}
}

Collide::~Collide()
{
}


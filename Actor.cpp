#include "Actor.h"

AActor::AActor()
{
	Shape = ' ';
	Location.X = 0;
	Location.Y = 0;
	bCollide = false;
}

AActor::~AActor()
{
}

void AActor::Draw()
{
}

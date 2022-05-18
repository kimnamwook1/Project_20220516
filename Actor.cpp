#include "Actor.h"
#include "Vector2D.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Map.h"

using namespace std;

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

void DrawBG(Vector2D StartPosition)
{
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			Vector2D Temp;
			Temp.X = X + StartPosition.X;
			Temp.Y = Y + StartPosition.Y;
			SetLocation(Temp);
			cout << Map[Y][X];
		}
	}

}

void SetLocation(Vector2D NewLocation)
{
	COORD Cur;
	Cur.X = NewLocation.X;
	Cur.Y = NewLocation.Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

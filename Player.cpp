#include "Player.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Vector2D.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Move(int KeyCode)
{
	bool bRunning = true;
	Vector2D PlayerPosition;
	PlayerPosition.X = 1;
	PlayerPosition.Y = 1;

	while (bRunning)
	{
		int KeyCode = _getch();

		Vector2D PredictPlayerPosition = PlayerPosition;

		switch (KeyCode)
		{
		case 'w':
		case 'W':
			PredictPlayerPosition.Y--;
			break;
		case 's':
		case 'S':
			PredictPlayerPosition.Y++;
			break;
		case 'a':
		case 'A':
			PredictPlayerPosition.X--;
			break;
		case 'd':
		case 'D':
			PredictPlayerPosition.X++;
			break;
		case 27:
			bRunning = false;
			break;

		}
	}
}
#include <iostream>
#include "Wall.h"
#include "Player.h"
#include "Floor.h"
#include "Goal.h"
#include "Collide.h"
#include "Vector2D.h"
 
class A
{
public:
	 A() {}
	~ A() {} // UE������ �Ҹ��� �� ����. ������ �˾Ƽ� �޸� ���� ����.
};

int main() 
{
	AActor* MyActor = new AActor();

	delete MyActor;
	MyActor = nullptr;

	return 0;
}
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
	~ A() {} // UE에서는 소멸자 안 만듦. 엔진이 알아서 메모리 관리 해줌.
};

int main() 
{
	AActor* MyActor = new AActor();

	delete MyActor;
	MyActor = nullptr;

	return 0;
}
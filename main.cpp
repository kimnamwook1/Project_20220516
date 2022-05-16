#include "iostream"

class AActor
{

};

class Apple : AActor// : 뒤에는 부모클래스가 나와야함 
{
public:
	int Shape = 0;
	//0 : circle
	//1 : Rectangle
	//2 : Triangle
	int Color = 0;
	int Material = 0;
	int Type = 0;
	int Smell = 0;
	int Taste = 0;
	float Weight = 0;
	float Size = 0; 

};

int main() 
{
	Apple 남욱이사과; // 남욱이 사과 -> Weight = 10; : 남욱이 사과의 메모리 중 Weight에 10을 넣을 거에요

	return 0;
}
#include "iostream"

class AActor
{

};

class Apple : AActor// : �ڿ��� �θ�Ŭ������ ���;��� 
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
	Apple �����̻��; // ������ ��� -> Weight = 10; : ������ ����� �޸� �� Weight�� 10�� ���� �ſ���

	return 0;
}
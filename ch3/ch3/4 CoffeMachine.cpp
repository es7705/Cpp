#if 0
#include <iostream>
#include "4 CoffeMachine.h"
using namespace std;

CoffeMachine::CoffeMachine(int coffe, int water, int suger)
{
	this->coffe = coffe;
	this->water = water;
	this->suger = suger;
}

void CoffeMachine::drinkEspresso()
{
	coffe -= 1;
	water -= 1;
}

void CoffeMachine::drinkAmericano()
{
	coffe -= 1;
	water -= 2;
}

void CoffeMachine::drinkSugarCoffe()
{
	coffe -= 1;
	water -= 2;
	suger -= 1;
}

void CoffeMachine::show()
{
	cout << "커피 머신 상태," << " 커피:" << coffe << " 물:"
		<< water << " 설탕:" << suger << endl;;
}

void CoffeMachine::fill()
{
	coffe = 10;
	water = 10;
	suger = 10;
}
#endif
#if 0
#ifndef COFFEMACHINE_H
#define COFFEMACHINE_H

class CoffeMachine
{
	int coffe, water, suger;
public:
	CoffeMachine(int coffe, int water, int suger);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffe();
	void show();
	void fill();
};
#endif // !COFFEMACHINE_H
#endif
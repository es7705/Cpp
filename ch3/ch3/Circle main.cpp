#if 0
#include <iostream>
using namespace std;

#include "Circle.h"

int main(void)
{
	Circle donut;
	Circle pizza(30);
	double area;
	area = donut.getArea();
	cout << "donut�� ������ : ";
	cout << area << endl;

	area = pizza.getArea();
	cout << "pizza�� ������ : ";
	cout << area << endl;
	return 0;
}
#endif
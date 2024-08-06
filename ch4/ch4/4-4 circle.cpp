#if  0
#include <iostream>
#include "4-4 circle.h"
using namespace std;

Circle::Circle() : Circle(1) {}
Circle::Circle(int r)
{
	radius = r;
}
void Circle::setRadius(int r)
{
	radius = r;
}
void Circle::input()
{
	int r;
	cin >> r;
	setRadius(r);
}
void  Circle::print(int i, int j)
{
	cout << "Circle [" << i << "]" << "[" << j << "]의 면적은 : " << getArea() << endl;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
#endif 
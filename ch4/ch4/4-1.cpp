#if 0
// 객체 포인터 선언 및 활용
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int radius);
	double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << endl;

	Circle* p; 
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	return 0;
}
#endif
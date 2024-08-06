#if 0
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int radius);
	void setRadius(int radisu);
	double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int radius)
{
	this->radius = radius;
}
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };
	
	int i;
	for ( i = 0; i < 3; i++)
	{
		cout << "Circle " << i << "의 면적은 : " << circleArray[i].getArea() << endl;
	}

	return 0;
}
#endif
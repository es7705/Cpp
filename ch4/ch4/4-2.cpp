#if 0
// Circle Ŭ������ �迭 ���� �� Ȱ��
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int radius);
	void setRadius(int radius);
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
	Circle circleArray[3];
	int i;

	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for ( i = 0; i < 3; i++)
	{
		cout << "Circle " << i << "�� ������ : " << circleArray[i].getArea() << endl;
	}
	
	Circle* p;
	p = circleArray;
	
	cout << endl << "������" << endl;

	for ( i = 0; i < 3; i++)
	{
		cout << "Circle " << i << "�� ������ : " << p->getArea() << endl;
		p++;
	}

	return 0;
}
#endif
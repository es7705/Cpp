#if 0
// Circle ��ü�� ���� ���� �� ��ȯ
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int radius);
	~Circle();
	void setRadius(int radius);
	double getArea();
};

Circle::Circle() : radius(1)
{
	cout << "�⺻ ������ ���� radius = " << radius << endl;
}
Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "�Ű������� �ִ� ������ ����  radius = " << this->radius << endl;
}
Circle::~Circle()
{
	cout << "�Ҹ��� ���� radius = " << radius << endl;
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
	int radius;
	while (true)
	{
		cout << "���� ������ �Է�(�����̸� ����) : ";
		cin >> radius;
		if (radius < 0) return 0;
		Circle* p = new Circle(radius);
		cout << "���� ������ : " << p->getArea() << endl;
		delete p;
	}

	return 0;
}
#endif
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
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl;
	cout << q->getArea() << endl;
	delete p;
	delete q;

	return 0;
}
#endif
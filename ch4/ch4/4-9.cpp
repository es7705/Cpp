#if 0
// Circle �迭�� ���� ���� �� ��ȯ
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
	Circle* pArray = new Circle[3];		// ��ü �迭�� ���� ����
	int r;
	int i;

	for ( i = 0; i < 3; i++)
	{
		cout << "�������� �Է��ϼ��� : ";
		cin >> r;
		pArray[i].setRadius(r);
	}

	for ( i = 0; i < 3; i++)
	{
		cout << pArray[i].getArea() << endl;
	}

	Circle* p = pArray;
	for ( i = 0; i < 3; i++)
	{
		cout << p->getArea() << endl;
		p++;
	}

	delete[]pArray;

	return 0;
}
#endif
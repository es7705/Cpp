// 5-7 ���� �Ű� ������ ���� �Լ� ����� ����
#if 0
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();						// �⺻ ������
	Circle(int radius);				// �Ű� ������ �ִ� ������
	~Circle();						// �Ҹ���
	void setRadius(int radius);		// ������ ���� �Լ�
	double getArea();				// ���� �Լ�
};

Circle::Circle()					// �⺻ ������
{
	radius = 1;						// �⺻ ������ 1
	cout << "�⺻ ������ ���� radius : " << radius << endl;
}

Circle::Circle(int radius)			// �Ű� ������ �ִ� ������
{
	this->radius = radius;			// �Ű� ������ ������ ����
	cout << "�Ű� ������ �ִ� ������ ���� radius : " << radius << endl;
}

Circle::~Circle()					// �Ҹ���
{
	cout << "�Ҹ��� ���� " << endl;
}

void Circle::setRadius(int radius)	// ������ ���� �Լ�
{
	this->radius = radius;
}

double Circle::getArea()			// ���� �Լ�
{
	return 3.14 * radius * radius;
}

void readRadius(Circle& c)			// Ű����κ��� ������ ���� �о� Circle ��ü�� �������� �����ϴ� �Լ�
{
	int r;
	cout << "���� ������ �������� �Է��ϼ��� : ";
	cin >> r;										// ������ �Է�
	c.setRadius(r);									// ������ ����
}

int main(void)
{
	Circle donut;
	readRadius(donut);								// ������ ���� ȣ��
	cout << "donut�� ���� : " << donut.getArea() << endl;
	return 0;
}
#endif 
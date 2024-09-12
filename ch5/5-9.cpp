// 5-9 Circle Ŭ������ ���� �����ڿ� ��ü ����
#if 0
#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle(const Circle& c);		// ���� ������ ����
	Circle();						// �⺻ ������
	Circle(int radius);				// �Ű� ������ �ִ� ������
	double getArea();				// ������ ���ϴ� ��� �Լ�
};	

Circle::Circle(const Circle& c)		// ���� ������ ����
{
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
}

Circle::Circle()					// �⺻ ������ ����
{
	radius = 1;						// �⺻ ������ 1
}

Circle::Circle(int radius)			// �Ű� ������ �ִ� ������
{
	this->radius = radius;
	cout << "�Ű� ������ �ִ� ������ ���� radius = " << radius << endl;
}

double Circle::getArea()			// ���� ��� �Լ� ����
{
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle src(30);					// src ��ü�� ���� ������ ȣ��
	Circle dest(src);				// dest ��ü�� ���� ������ ȣ��

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
	return 0;
}
#endif
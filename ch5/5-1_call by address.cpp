// '�ּҿ� ���� ȣ��'�� ��ü ����
// 5-1 '�ּҿ� ���� ȣ��'�� �Ű� ������ ������ ������� ������ �ذ�
#if 0
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();		// ������
	Circle(int r);	// �Ű������� �ִ� ������
	~Circle();		// �Ҹ���
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle()
{
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(Circle *p)		// �ּҿ� ���� ȣ��			
{
	int r = p->getRadius();
	p->setRadius(r + 1);
}								// p�� ��ü�� �ƴϹǷ� �����ڳ� �Ҹ��ڿ� ����� ����.

int main(void)
{
	Circle waffle(30);
	increase(&waffle);			// waffle ��ü�� �ּҸ� �����Ѵ�.
	cout << waffle.getRadius() << endl;
	return 0;
}
#endif 
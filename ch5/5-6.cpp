// 5-6 ������ ���� ȣ��� Circle ��ü�� ���� ����
#if 0
#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle();				// ������
	Circle(int r);			// �Ű� ������ �ִ� ������
	~Circle();				// �Ҹ���
	double getArea() { return 3.14 * radius * radius; }		// ���� �Լ�
	int getRadius() { return radius; }						// ������ ��ȯ�ϴ� �Լ�
	void setRadius(int radius) { this->radius = radius; }	// ������ �޴� �Լ�
};

Circle::Circle()											// �⺻ ������
{	
	radius = 1;												// �⺻ ������ 1
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius)									// �Ű������� �������� �޾ƿ��� ������
{	
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle()											// �Ҹ���
{
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(Circle& c)				// c�� ���� �Ű� ����
{
	int r = c.getRadius();				// ������ �޾ƿ�
	c.setRadius(r + 1);					// c�� �����ϴ� ���� ��ü�� ������ 1 ����
}

int main(void)
{
	Circle waffle(30);					// �Ű������� �ִ� ������ ȣ��
	increase(waffle);					// ������ ���� ȣ��
	cout << waffle.getRadius() << endl;	// ������ ������ �Լ� ȣ��
	return 0;
}
#endif
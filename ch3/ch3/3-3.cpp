#if 0
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		// �⺻ ������
	Circle(int r);  // �Ű� ���� �ִ� ������
	double getArea();
};

Circle::Circle() {										// �⺻ ������, �Ű� ������ ���� ������
	radius = 1;											// ������ �� �ʱ�ȭ
	cout << "������ : " << radius << "cm �� ����" << endl;
}

Circle::Circle(int r) {									// �Ű� ������ �ִ� ������
	radius = r;											
	cout << "������ : " << radius << "cm �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle donut;
	double area;	
	area = donut.getArea();								// �Ű� ������ ���� ������ ȣ��
	cout << "donut ������ : " << area << endl;

	cout << endl;

	Circle pizza(30);									// �Ű� ���� �ִ� ������ ȣ��. 30�� r�� ���޵�
	area = pizza.getArea();
	cout << "pizza ������ : " << area << endl;
	return 0;
}
#endif
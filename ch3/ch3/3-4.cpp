#if 0
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		// ���� ������ : ��ü�� �ʱ�ȭ�� �ٸ� �����ڿ� �����Ѵٰ� �ؼ� ���� �����ڶ�� ��
	Circle(int r);  // Ÿ�� ������
	double getArea();
};

Circle::Circle() : Circle(1) {}	// ���� ������					

Circle::Circle(int r) {			// ��ä �ʱ�ȭ�� �����ϴ� Ÿ�� �����ڸŰ� ������ �ִ� ������
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
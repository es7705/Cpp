#if 0
// ���� ��ü�� ���� ��ü�� ���� �� �Ҹ� ����
#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r) : radius(r)
{
	if()
	cout << "������ : " << radius << "cm �� ����" << endl;
}

Circle::~Circle()
{
	cout << "������ : " << radius << "cm �� �Ҹ�" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}


Circle globalDonut(1000);	// ���� ��ü ����
Circle globalPozze(2000);	// ���� ��ü ����

void f()
{
	cout << endl << "f�Լ�" << endl;
	Circle fDonut(100);		// ���� ��ü ����
	Circle fPizza(200);		// ���� ��ü ����
	cout << endl;
}

int main(void)
{
	cout << endl << "main �Լ�" << endl;
	Circle mainDonut;		// ���� ��ü ����
	Circle mainPizza(30);	// ���� ��ü ����
	f();
	return 0;
}
#endif
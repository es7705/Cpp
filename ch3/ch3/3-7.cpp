#if 0
// Circle Ŭ������ �Ҹ��� �ۼ� �� ����
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		 // �⺻ ������
	Circle(int r);   // �Ű� ������ �ִ� ������
	~Circle();		 // �Ҹ��� ����	
	double getArea();
};

Circle::Circle() : Circle(1) {}		// ���� ������
Circle::Circle(int r) : radius(r)	// Ÿ�� ������
{
	cout << "������ : " << radius << "cm �� ����" << endl;
}
Circle::~Circle()
{
	cout << "������ : " << radius << "cm �� �Ҹ�" << endl;		// ��ü�� ������ �ݴ������ �Ҹ�
}

int main(void)
{
	Circle donut;
	Circle pizza(30);
	cout << endl;		// ������ �� �� ��� �Ҹ��� ���

	return 0;			// main() �Լ��� �����ϸ� main() �Լ��� ���ÿ� ������ pizz, donut ��ü�� �Ҹ�ȴ�.
}
#endif
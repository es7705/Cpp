// 5-4 ��ü�� ���� ����
#if 0
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1;}
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main(void)
{
	Circle circle;
	Circle& refc = circle;								// circle ��ü�� ���� ���� ���� refc ����
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();	// �� ȣ���� ���� ��ü�� ���� ȣ��
	return 0;
}
#endif
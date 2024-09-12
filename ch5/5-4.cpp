// 5-4 객체에 대한 참조
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
	Circle& refc = circle;								// circle 객체에 대한 참조 변수 refc 선언
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();	// 두 호출은 동일 객체에 대한 호출
	return 0;
}
#endif
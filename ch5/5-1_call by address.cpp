// '주소에 의한 호출'로 객체 전달
// 5-1 '주소에 의한 호출'시 매개 변수의 생성자 실행되지 않음을 해결
#if 0
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();		// 생성자
	Circle(int r);	// 매개변수가 있는 생성자
	~Circle();		// 소멸자
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle()
{
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle *p)		// 주소에 의한 호출			
{
	int r = p->getRadius();
	p->setRadius(r + 1);
}								// p는 객체가 아니므로 생성자나 소멸자와 상관이 없다.

int main(void)
{
	Circle waffle(30);
	increase(&waffle);			// waffle 객체의 주소를 전달한다.
	cout << waffle.getRadius() << endl;
	return 0;
}
#endif 
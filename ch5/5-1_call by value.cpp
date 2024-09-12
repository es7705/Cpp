// '값에 의한 호출'로 객체 전달
// 5-1 '값에 의한 호출'시 매개 변수의 생성자 실행되지 않음
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

void increase(Circle c)			// 객체 c의 생성자 실행되지 않음 
{
	int r = c.getRadius();
	c.setRadius(r + 1);	
}								// 객체 c의 소멸자 실행됨
	
int main(void)
{
	Circle waffle(30);
	increase(waffle);			// waffle의 내용이 그대로 c에 복사
	cout << waffle.getRadius() << endl;
	return 0;
}
#endif
// 5-6 참조에 의한 호출로 Circle 객체의 참조 전달
#if 0
#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle();				// 생성자
	Circle(int r);			// 매개 변수가 있는 생성자
	~Circle();				// 소멸자
	double getArea() { return 3.14 * radius * radius; }		// 넓이 함수
	int getRadius() { return radius; }						// 반지름 반환하는 함수
	void setRadius(int radius) { this->radius = radius; }	// 반지름 받는 함수
};

Circle::Circle()											// 기본 생성자
{	
	radius = 1;												// 기본 반지름 1
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius)									// 매개변수로 반지름을 받아오는 생성자
{	
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()											// 소멸자
{
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle& c)				// c는 참조 매개 변수
{
	int r = c.getRadius();				// 반지름 받아옴
	c.setRadius(r + 1);					// c가 참조하는 원본 객체의 반지름 1 증가
}

int main(void)
{
	Circle waffle(30);					// 매개변수가 있는 생성자 호출
	increase(waffle);					// 참조에 의한 호출
	cout << waffle.getRadius() << endl;	// 증가된 반지름 함수 호출
	return 0;
}
#endif
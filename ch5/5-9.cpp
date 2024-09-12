// 5-9 Circle 클래스의 복사 생성자와 객체 복사
#if 0
#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle(const Circle& c);		// 복사 생성자 선언
	Circle();						// 기본 생성자
	Circle(int radius);				// 매개 변수가 있는 생성자
	double getArea();				// 면적을 구하는 멤버 함수
};	

Circle::Circle(const Circle& c)		// 복사 생성자 구현
{
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
}

Circle::Circle()					// 기본 생성자 구현
{
	radius = 1;						// 기본 반지름 1
}

Circle::Circle(int radius)			// 매개 변수가 있는 생성자
{
	this->radius = radius;
	cout << "매개 변수가 있는 생성자 실행 radius = " << radius << endl;
}

double Circle::getArea()			// 면적 멤버 함수 구현
{
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle src(30);					// src 객체의 보통 생성자 호출
	Circle dest(src);				// dest 객체의 복사 생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본읠 면적 = " << dest.getArea() << endl;
	return 0;
}
#endif
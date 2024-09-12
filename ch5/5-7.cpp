// 5-7 참조 매개 변수를 가진 함수 만들기 연습
#if 0
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();						// 기본 생성자
	Circle(int radius);				// 매개 변수가 있는 생성자
	~Circle();						// 소멸자
	void setRadius(int radius);		// 반지름 설정 함수
	double getArea();				// 넓이 함수
};

Circle::Circle()					// 기본 생성자
{
	radius = 1;						// 기본 반지름 1
	cout << "기본 생성자 실행 radius : " << radius << endl;
}

Circle::Circle(int radius)			// 매개 변수가 있는 생성자
{
	this->radius = radius;			// 매개 변수로 반지름 설정
	cout << "매개 변수가 있는 생성자 실행 radius : " << radius << endl;
}

Circle::~Circle()					// 소멸자
{
	cout << "소멸자 실행 " << endl;
}

void Circle::setRadius(int radius)	// 반지름 설정 함수
{
	this->radius = radius;
}

double Circle::getArea()			// 넓이 함수
{
	return 3.14 * radius * radius;
}

void readRadius(Circle& c)			// 키보드로부터 반지름 값을 읽어 Circle 객체에 반지름을 설정하는 함수
{
	int r;
	cout << "정수 값으로 반지름을 입력하세요 : ";
	cin >> r;										// 반지름 입력
	c.setRadius(r);									// 반지름 설정
}

int main(void)
{
	Circle donut;
	readRadius(donut);								// 참조에 의한 호출
	cout << "donut의 면적 : " << donut.getArea() << endl;
	return 0;
}
#endif 
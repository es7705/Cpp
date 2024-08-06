#if 0
// Circle 클래스에 소멸자 작성 및 실행
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		 // 기본 생성자
	Circle(int r);   // 매개 변수가 있는 생성자
	~Circle();		 // 소멸자 선언	
	double getArea();
};

Circle::Circle() : Circle(1) {}		// 위임 생성자
Circle::Circle(int r) : radius(r)	// 타겟 생성자
{
	cout << "반지름 : " << radius << "cm 원 생성" << endl;
}
Circle::~Circle()
{
	cout << "반지름 : " << radius << "cm 원 소멸" << endl;		// 객체는 생성의 반대순으로 소멸
}

int main(void)
{
	Circle donut;
	Circle pizza(30);
	cout << endl;		// 생성자 한 줄 띄고 소멸자 출력

	return 0;			// main() 함수가 종료하면 main() 함수의 스택에 생성된 pizz, donut 객체가 소멸된다.
}
#endif
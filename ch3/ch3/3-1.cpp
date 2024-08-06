#if 0
//Circle 클래스의 객체 생성 및 활용
#include <iostream>
using namespace std;
	
class Circle {			// Circle 선언부	
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.15 * radius * radius;
}

int main(void)
{
	Circle donut;
	double area;			// 면적
	donut.radius = 1;		// 도넛 객체의 반지름을 1로 설정
	area = donut.getArea();	// 도넛 객체의 면적 알아내기
	cout << "donut 면적은 : " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 : " << area << endl;
	return 0;
}
#endif
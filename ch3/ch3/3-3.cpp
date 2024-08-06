#if 0
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		// 기본 생성자
	Circle(int r);  // 매개 변수 있는 생성자
	double getArea();
};

Circle::Circle() {										// 기본 생성자, 매개 변수가 없는 생성자
	radius = 1;											// 반지름 값 초기화
	cout << "반지름 : " << radius << "cm 원 생성" << endl;
}

Circle::Circle(int r) {									// 매개 변수가 있는 생성자
	radius = r;											
	cout << "반지름 : " << radius << "cm 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void)
{
	Circle donut;
	double area;	
	area = donut.getArea();								// 매개 변수가 없는 생성자 호출
	cout << "donut 면적은 : " << area << endl;

	cout << endl;

	Circle pizza(30);									// 매개 변수 있는 생성자 호출. 30이 r에 전달됨
	area = pizza.getArea();
	cout << "pizza 면적은 : " << area << endl;
	return 0;
}
#endif
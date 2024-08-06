#if 0
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();		// 위임 생성자 : 객체의 초기화를 다른 생성자에 위임한다고 해서 위임 생성자라고 함
	Circle(int r);  // 타켓 생성자
	double getArea();
};

Circle::Circle() : Circle(1) {}	// 위임 생성자					

Circle::Circle(int r) {			// 갹채 초기화를 전담하는 타켓 생성자매개 변수가 있는 생성자
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
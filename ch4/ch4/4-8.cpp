#if 0
// Circle 객체의 동적 생성 및 반환
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	Circle(int radius);
	~Circle();
	void setRadius(int radius);
	double getArea();
};

Circle::Circle() : radius(1)
{
	cout << "기본 생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "매개변수가 있는 생성자 실행  radius = " << this->radius << endl;
}
Circle::~Circle()
{
	cout << "소멸자 실행 radius = " << radius << endl;
}
void Circle::setRadius(int radius)
{
	this->radius = radius;
}
double Circle::getArea()
{
	return 3.14 * radius * radius;
}
int main(void)
{
	int radius;
	while (true)
	{
		cout << "정수 반지름 입력(음수이면 종료) : ";
		cin >> radius;
		if (radius < 0) return 0;
		Circle* p = new Circle(radius);
		cout << "원의 면적은 : " << p->getArea() << endl;
		delete p;
	}

	return 0;
}
#endif
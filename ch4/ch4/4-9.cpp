#if 0
// Circle 배열의 동적 생성 및 반환
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
	Circle* pArray = new Circle[3];		// 객체 배열의 동적 생성
	int r;
	int i;

	for ( i = 0; i < 3; i++)
	{
		cout << "반지름을 입력하세요 : ";
		cin >> r;
		pArray[i].setRadius(r);
	}

	for ( i = 0; i < 3; i++)
	{
		cout << pArray[i].getArea() << endl;
	}

	Circle* p = pArray;
	for ( i = 0; i < 3; i++)
	{
		cout << p->getArea() << endl;
		p++;
	}

	delete[]pArray;

	return 0;
}
#endif
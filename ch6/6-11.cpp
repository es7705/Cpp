// 6-11 static 멤버를 공유의 목적으로 사용하는 예
#if 0
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;	// 생성된 원의 개수 기억
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }	// 생성된 원의 개수 감소
	double getArea() { return 3.15 * radius * radius; }
	static int getNumOfCircle() { return numOfCircles; }
};

Circle::Circle(int r)
{
	radius = r;
	numOfCircles++;	// 생성된 원의 개수 증가
}

int Circle::numOfCircles = 0;	// 0으로 초기화

int main()
{
	Circle* p = new Circle[10];	// 10개의 생성자 실행, 생성자가 10번 실행되어 numOfCircles = 10이 됨
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircle() << endl;

	delete[] p;		// 10개의 소멸자 실행, numOfCircles = 0
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircle() << endl;

	Circle a;	// 생성자 실행, numOfCircles = 1
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircle() << endl;

	Circle b;	// 생성자 실행, numOfCircles = 2
	cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircle() << endl;

	return 0;
}
#endif
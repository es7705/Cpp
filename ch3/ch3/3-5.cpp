#if 0
#include <iostream>
using namespace std;

class Point {
private :
	int x, y;
	// int x = 0, y = 0;			// 114 페이지 클래스 선언부에서 직접 초기화
public :
	Point();					// 위임 생성자, 매개 변수가 없는 생성자
	Point(int a, int b);		// 타겟 생성자, 매개 변수가 있는 생성자
	void show();
};

void Point::show()
{
	cout << "(" << x << ", " << y << ")" << endl;
}
												
/*
Point::Point() : x(0), y(0) {}				// 114 페이지 생성자 서두에 초깃값으로 초기화
Point::Point(int a, int b) : x(a), y(b) {} 
*/

/*
Point::Point() {}								// 114 페이지 클래스 선언부에서 직접 초기화
Point::Point(int a, int b) {
	x = a;
	y = b; }
*/

Point::Point() : Point(0, 0) {}				// 위임 생성자
Point::Point(int a, int b) : x(a), y(b) { }	// 타겟 생성자

int main(void)
{
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
	return 0;
}
#endif
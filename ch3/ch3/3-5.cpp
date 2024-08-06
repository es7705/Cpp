#if 0
#include <iostream>
using namespace std;

class Point {
private :
	int x, y;
	// int x = 0, y = 0;			// 114 ������ Ŭ���� ����ο��� ���� �ʱ�ȭ
public :
	Point();					// ���� ������, �Ű� ������ ���� ������
	Point(int a, int b);		// Ÿ�� ������, �Ű� ������ �ִ� ������
	void show();
};

void Point::show()
{
	cout << "(" << x << ", " << y << ")" << endl;
}
												
/*
Point::Point() : x(0), y(0) {}				// 114 ������ ������ ���ο� �ʱ갪���� �ʱ�ȭ
Point::Point(int a, int b) : x(a), y(b) {} 
*/

/*
Point::Point() {}								// 114 ������ Ŭ���� ����ο��� ���� �ʱ�ȭ
Point::Point(int a, int b) {
	x = a;
	y = b; }
*/

Point::Point() : Point(0, 0) {}				// ���� ������
Point::Point(int a, int b) : x(a), y(b) { }	// Ÿ�� ������

int main(void)
{
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
	return 0;
}
#endif
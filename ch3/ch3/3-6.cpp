#if 0
#include <iostream>
using namespace std;

class Rectangle {
public :
	int width, height;
	Rectangle();			// 기본 생성자
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

//Rectangle::Rectangle() : Rectangle(1){ }								// 위임 생성자
//Rectangle::Rectangle(int w, int h) : width(w), height(h) { }
//Rectangle::Rectangle(int length) : width(length), height(length) { }	// 타겟 생성자

Rectangle::Rectangle() : width(1), height(1) {}
Rectangle::Rectangle(int w, int h) : width(w), height(h) {}
Rectangle::Rectangle(int length)
{
	width = length;
	height = length;
}


bool Rectangle::isSquare()			// 정사각형이면  true를 리턴하는 멤버 함수
{
	if (width == height)
		return true;
	else
		return false;
}

int main(void)
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare())
		cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare())
		cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare())
		cout << "rect3은 정사각형이다." << endl;

	return 0;
}
#endif
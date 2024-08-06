#if 0
// Rectangle 클래스 만들기
#include <iostream>
using namespace std;

class Rectangle {									// 클래스 선언부
public :
	int width;
	int height;
	double getArea();
};

double Rectangle::getArea() {						// Rectangle 클래서 구현부
	return width * height;
}

int main(void)
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	double area = rect.getArea();
	cout << "사각형의 면적은 : " << area << endl;
	return 0;
}
#endif
#if 0
#include <iostream>
#include <string>
using namespace std;

/*기본 클래스*/
class Point							// 2차원 평면에서 한 점을 표현하는 클래스 Point 선언
{
	int x, y;						// 한 점(x, y) 좌표값
public:
	void set(int x, int y);
	void showPoint();
};

void Point::set(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Point::showPoint()
{
	cout << "(" << x << ", " << y << ")" << endl;
}

/*파생 클래스*/
class ColorPoint : public Point		// 2차원 평면에서 컬러 점을 표현하는 클래스 ColorPoint.	Point를 상속 바등ㅁ
{
	string color;					// 점의 색 표현
public:
	void setColor(string color);
	void showColorPoint();
};

void ColorPoint::setColor(string color)
{
	this->color = color;
}
void ColorPoint::showColorPoint()
{
	cout << color << " : ";
	showPoint();					// Point의 showPoin() 호출
}

int main(void)
{
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer;		// 업 캐스팅

	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	// pBase->showColorPoint();	// 컴파일 오류
	return 0;
}
#endif
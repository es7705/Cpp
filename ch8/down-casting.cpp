#if 0
#include <iostream>
#include <string>
using namespace std;

/*�⺻ Ŭ����*/
class Point							// 2���� ��鿡�� �� ���� ǥ���ϴ� Ŭ���� Point ����
{
	int x, y;						// �� ��(x, y) ��ǥ��
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

/*�Ļ� Ŭ����*/
class ColorPoint : public Point		// 2���� ��鿡�� �÷� ���� ǥ���ϴ� Ŭ���� ColorPoint.	Point�� ��� �ٵ
{
	string color;					// ���� �� ǥ��
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
	showPoint();					// Point�� showPoin() ȣ��
}

int main(void)
{
	ColorPoint cp;
	ColorPoint* pDer;			
	Point* pBase = &cp;			// �� ĳ����

	pBase->set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint*)pBase;	// �ٿ� ĳ����
	pDer->setColor("Red");		// ���� ������
	pDer->showColorPoint();		// ���� ������

	return 0;
}
#endif
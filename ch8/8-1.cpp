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
	Point p;						// �⺻ Ŭ������ ��ü ����
	ColorPoint cp;					// �Ļ� Ŭ������ ��ü ����

	cp.set(3, 4);					// ��ǥ ����, �⺻ Ŭ������ ��� ȣ��
	cp.setColor("Red");				// �� ����, �Ļ� Ŭ������ ��� ȣ��
	cp.showColorPoint();			// ��ǥ�� �� ���, �Ļ� Ŭ������ ��� ȣ��

	return 0;
}
#endif
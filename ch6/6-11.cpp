// 6-11 static ����� ������ �������� ����ϴ� ��
#if 0
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;	// ������ ���� ���� ���
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }	// ������ ���� ���� ����
	double getArea() { return 3.15 * radius * radius; }
	static int getNumOfCircle() { return numOfCircles; }
};

Circle::Circle(int r)
{
	radius = r;
	numOfCircles++;	// ������ ���� ���� ����
}

int Circle::numOfCircles = 0;	// 0���� �ʱ�ȭ

int main()
{
	Circle* p = new Circle[10];	// 10���� ������ ����, �����ڰ� 10�� ����Ǿ� numOfCircles = 10�� ��
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;

	delete[] p;		// 10���� �Ҹ��� ����, numOfCircles = 0
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;

	Circle a;	// ������ ����, numOfCircles = 1
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;

	Circle b;	// ������ ����, numOfCircles = 2
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircle() << endl;

	return 0;
}
#endif
#if 0
// Rectangle Ŭ���� �����
#include <iostream>
using namespace std;

class Rectangle {									// Ŭ���� �����
public :
	int width;
	int height;
	double getArea();
};

double Rectangle::getArea() {						// Rectangle Ŭ���� ������
	return width * height;
}

int main(void)
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	double area = rect.getArea();
	cout << "�簢���� ������ : " << area << endl;
	return 0;
}
#endif
#if 0
// Circle Ŭ������ C++ ����ü�� �̿��Ͽ� ���ۼ�
#include <iostream>
using namespace std;

struct StructCircle
{
private:
	int radius;
public:
	StructCircle(int r)		// ����ü�� ������
	{
		radius = r;
	}
	double getArea();
};

double StructCircle::getArea()
{
	return 3.14 * radius * radius;
}

int main(void)
{
	StructCircle waffle(3);
	cout << "������ : " << waffle.getArea();
	return 0;
}
#endif
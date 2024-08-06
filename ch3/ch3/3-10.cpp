#if 0
// Circle 클래스를 C++ 구조체를 이요하여 재작성
#include <iostream>
using namespace std;

struct StructCircle
{
private:
	int radius;
public:
	StructCircle(int r)		// 구조체의 생성자
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
	cout << "면적은 : " << waffle.getArea();
	return 0;
}
#endif
#if 0
// Circle 배열의 동적 생성 및 반환 응용
#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	void setRadius(int radius);
	double getArea();
};

Circle::Circle() : radius(1) {}

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main(void)
{
	int n, radius;
	int i;

	cout << "생성하고자 하는 원은 갯수를 입력하세요 : ";
	cin >> n;
	if (n <= 0) return 0;

	Circle* pArray = new Circle[n];

	for ( i = 0; i < n; i++)
	{
		cout << "원" << i + 1 << "의 반지름 입력 : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	cout << endl;

	int cnt = 0;
	Circle* p = pArray;

	for ( i = 0; i < n; i++)
	{
		cout << "원" << i + 1 << "의 면적 : ";
		cout << p->getArea() << endl;
		if (p->getArea() >= 100 && p->getArea() <= 200)
		{
			cnt++;
		}
		p++;
	}

	cout << endl << "면적이 100에서 200 사이인 원의 개수는 : " << cnt << endl;
	delete[]pArray;

	return 0;
}
#endif
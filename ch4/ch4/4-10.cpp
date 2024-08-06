#if 0
// Circle �迭�� ���� ���� �� ��ȯ ����
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

	cout << "�����ϰ��� �ϴ� ���� ������ �Է��ϼ��� : ";
	cin >> n;
	if (n <= 0) return 0;

	Circle* pArray = new Circle[n];

	for ( i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "�� ������ �Է� : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	cout << endl;

	int cnt = 0;
	Circle* p = pArray;

	for ( i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "�� ���� : ";
		cout << p->getArea() << endl;
		if (p->getArea() >= 100 && p->getArea() <= 200)
		{
			cnt++;
		}
		p++;
	}

	cout << endl << "������ 100���� 200 ������ ���� ������ : " << cnt << endl;
	delete[]pArray;

	return 0;
}
#endif
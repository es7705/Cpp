// 6-2 sum() �Լ� �ߺ� ����
#if 0
#include <iostream>
using namespace std;

int sum(int a, int b)					// a���� b���� ���ϱ�
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	return sum;
}

int sum(int a)							// 0���� a���� ���ϱ�
{
	int sum = 0;
	for (int i = 0; i <= a; i++)
	{
		sum += i;
	}
	return sum;
}

int main(void)
{
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
	return 0;
}
#endif
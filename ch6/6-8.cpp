// 6-8 ���� �Ű� ������ ���� �Լ� �ߺ��� ��ȣ��
#if 0
#include <iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

int add(int a, int& b)
{
	b = b + a;
	return b;
}

int main(void)
{
	int s = 10, t = 20;
	cout << add(s, t);			// ������ ����. ���� �Ű� ������ ���� �Լ� ȣ���� ��ȣ��
	return 0;
}
#endif
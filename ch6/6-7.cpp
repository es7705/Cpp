// 6-7 �� ��ȯ���� ���� �Լ� �ߺ��� ��ȣ�� ���
#if 0
#include <iostream>
using namespace std;

float square(float a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

int main(void)
{
	cout << square(3.0);	// square(double a); ȣ��
	cout << square(3);		// �ߺ��� �Լ��� ���� ��ȣ�� ȣ��μ�, ������ ����, ������ ��ġ���� cout << square((float)3); ���� �����ϸ� ��
	return 0;
}
#endif
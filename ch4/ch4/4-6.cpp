#if 0
// ������ �迭�� ���� �Ҵ� �� ��ȯ
#include <iostream>
using namespace std;

int main(void)
{
	cout << "�Է��� ������ ������ ? ";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p)
	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	int i;
	for ( i = 0; i < n; i++)
	{
		cout << i + 1 << "��° ���� : ";
		cin >> p[i];
	}

	int sum = 0;
	for ( i = 0; i < n; i++)
	{
		sum += p[i];
	}

	cout << "��� = " << sum / n << endl;

	delete[] p;

	return 0;
}
#endif
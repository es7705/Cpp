// 6-5 ����Ʈ �Ű� ������ �̿��Ͽ� �ߺ� �Լ� ����ȭ ����
#if 0
#include <iostream>
using namespace std;

void fillLine(int n = 25, char c = '*')
{
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl;
}

int main(void)
{
	fillLine();
	fillLine(10, '%');
	return 0;
}
#endif
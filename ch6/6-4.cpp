// 디퐅르 매개 변수를 가진 함수 만들기 연습
#if 0
#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1);

int main(void)
{
	f();
	f('%');
	f('@', 5);

	return 0;
}

void f(char c, int line)
{
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}
#endif
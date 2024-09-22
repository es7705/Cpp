// 6-3 디폴트 매개 변수를 가진 함수 선언 및 호출
#if 0
#include <iostream>	
using namespace std;

void star(int a = 5);							// 디폴트 매개 변수 선언
void msg(int id, string text = "");	// 디폴트 매개 변수 선언

int main()
{
	star();											// star(5);
	star(10);

	msg(10);										// msg(10, "	);
	msg(10, "Hello");

	return 0;
}


void star(int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << '*';
	}
	cout << endl;
}

void msg(int id, string text)
{
	cout << id << ' ' << text << endl;
}
#endif
// 6-3 ����Ʈ �Ű� ������ ���� �Լ� ���� �� ȣ��
#if 0
#include <iostream>	
using namespace std;

void star(int a = 5);							// ����Ʈ �Ű� ���� ����
void msg(int id, string text = "");	// ����Ʈ �Ű� ���� ����

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
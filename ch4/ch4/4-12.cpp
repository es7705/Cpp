#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string name[5];		// string 배열 선언
	int i;
	for ( i = 0; i < 5; i++)
	{
		cout << "이름 : ";
		getline(cin, name[i], '\n');
	}

	string latter = name[0];
	for ( i = 1; i < 5; i++)
	{
		if (latter < name[i])			// name[i]가 latter보다 뒤에 온다면
				latter = name[i];
	}

	cout << "사전에서 가장 뒤에 나오는 문자열은 : " << latter << endl;

	return 0;
}
#endif
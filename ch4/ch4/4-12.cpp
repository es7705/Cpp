#if 0
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string name[5];		// string �迭 ����
	int i;
	for ( i = 0; i < 5; i++)
	{
		cout << "�̸� : ";
		getline(cin, name[i], '\n');
	}

	string latter = name[0];
	for ( i = 1; i < 5; i++)
	{
		if (latter < name[i])			// name[i]�� latter���� �ڿ� �´ٸ�
				latter = name[i];
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ��� : " << latter << endl;

	return 0;
}
#endif
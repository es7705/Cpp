// 6-9 ����Ʈ �Ű� ������ ���� �Լ� �ߺ��� ��ȣ��
#if 0
#include <iostream>
#include <string>
using namespace std;

void msg(int id)
{
	cout << id << endl;
}
��
void msg(int id, string s = "")
{
	cout << id << ":" << s << endl;
}

int main(void)
{
	msg(5, "Good Morning");			// ���� ������, �ι�° msg() ȣ��
	msg(6);							// �Լ� ȣ�� ��ȣ. ������ ����
	return 0;
}
#endif
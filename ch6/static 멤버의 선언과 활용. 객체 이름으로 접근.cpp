// static ����� ����� Ȱ��. ��ü �̸����� ����
#if 0
#include <iostream>	
using namespace std;

class Person
{
public:
	int money;					// ���� ������ ��
	void addMoney(int money) {
		this->money += money;
	}

	static int shareMoney;	// ����
	static void addShared(int n) {
		shareMoney += n;
	}
};

int Person::shareMoney = 10;	// 10���� �ʱ�ȭ

int main()
{
	Person han;
	han.money = 100;	// ham�� ���� �� = 100
	han.shareMoney = 200;	// static ��� ����, ���� = 200
	// Person::shareMoney = 200;	// han.shareMoney = 200;�� ����

	Person lee;
	lee.money = 150;	// lee�� ���� �� = 150
	lee.addMoney(200);	// ledd�� ���� �� = 350
	lee.addShared(200);	// static ��� ���� ���� = 400
	// Person::addShared(200);	// lee.addShared(200);�� ����
	cout << han.money << ' ' << lee.money << endl;
	cout << han.shareMoney << ' ' << lee.shareMoney << endl;
	return 0;
}
#endif
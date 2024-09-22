// Ŭ���� ������ static ����� �����ϴ� ���
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
	Person::addShared(50);				// static ��� ����, ���� = 60
	cout << Person::shareMoney << endl;

	Person han;
	han.money = 100;			
	han.shareMoney = 200;				// static ��� ����, ���� = 200
	Person::shareMoney = 300;			// static ��� ����, ���� = 300
	Person::addShared(100);				// static ��� ����, ���� = 400

	cout << han.money << ' ' << Person::shareMoney << endl;
	return 0;
}
#endif
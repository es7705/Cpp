#if 0
#include <iostream>
using namespace std;

class Account
{
	string name;
	int num;
	int balance;
public:
	Account(string name, int num, int balance);
	string getOwner();		 // ������ ����
	void deposit(int money); // ����
	int withdraw(int money); // ���
	int inquiry();			 // �ܾ�
};

Account::Account(string name, int num, int balance)
{
	this->name = name;
	this->num = num;
	this->balance = balance;
}

string Account::getOwner()
{
	return name;
}

void Account::deposit(int money)
{
	balance += money;
}

int Account::withdraw(int money)
{
	balance -= money;
	return balance;
}

int Account::inquiry()
{
	return balance;
}

int main(void)
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);	// �Ա�
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money;
	money = a.withdraw(20000); // ���
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	return 0;
}
#endif
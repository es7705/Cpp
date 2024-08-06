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
	string getOwner();		 // 계좌의 주인
	void deposit(int money); // 저금
	int withdraw(int money); // 출금
	int inquiry();			 // 잔액
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
	a.deposit(50000);	// 입금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money;
	money = a.withdraw(20000); // 출금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	return 0;
}
#endif
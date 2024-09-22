// static 멤버의 선언과 활용. 객체 이름으로 접근
#if 0
#include <iostream>	
using namespace std;

class Person
{
public:
	int money;					// 개인 소유의 돈
	void addMoney(int money) {
		this->money += money;
	}

	static int shareMoney;	// 공금
	static void addShared(int n) {
		shareMoney += n;
	}
};

int Person::shareMoney = 10;	// 10으로 초기화

int main()
{
	Person han;
	han.money = 100;	// ham의 개인 돈 = 100
	han.shareMoney = 200;	// static 멤버 접근, 공금 = 200
	// Person::shareMoney = 200;	// han.shareMoney = 200;와 동일

	Person lee;
	lee.money = 150;	// lee의 개인 돈 = 150
	lee.addMoney(200);	// ledd의 개인 돈 = 350
	lee.addShared(200);	// static 멤버 접근 공금 = 400
	// Person::addShared(200);	// lee.addShared(200);와 동일
	cout << han.money << ' ' << lee.money << endl;
	cout << han.shareMoney << ' ' << lee.shareMoney << endl;
	return 0;
}
#endif
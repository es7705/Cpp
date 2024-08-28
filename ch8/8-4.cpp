// 8-4 private 상속 사례
#if 0
#include <iostream>
using namespace std;

class Base {
private:
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

// Derived 클래스가 Base 클래스를 'private 상속'함에 따라
// Base 클래스의 setA(), showA() 멤버는 private 속성으로 변경되어 Derived에 상속된다.
class Derived : private Base {
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main(void)
{
	Derived x;
	//x.a = 5;			// a는 Derived 클래스에 상속되지만 private 멤버이므로 접근 불가	
	//x.setA(10);		// setA(), showA()는 private 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived 클래스 외부에서 접근 불가
	//x.showA();		// setA(), showA()는 private 멤버로 변경되어 Derived 클래스에 상속되기 때문에 Derived 클래스 외부에서 접근 불가
	//x.b = 10;			// b는 private 멤버이기 때문에 Derived 클래스 외부에서 접근 불가
	//x.setB(10);		// setB()는 protected 멤버이기 때문에 main()에서 접근 불가
	x.showB();			// public 멤버이기 때문에 누구나 접근 가능
	return 0;
}
#endif
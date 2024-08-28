// 8-6 상속이 중첩될 때 접근 지정 사례
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

class Derived : private Base {				// private 상속
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB()
	{
		setA(5);	// 정상 컴파일, setA()는 Base 클래스의 protected 멤버이기 때문에 파생클래스 Derived에게 접근 허용				
		showA();	// 정상 컴파일, showA()는 Base 클래스의 public 멤버이기 때문에 파생 클래스 Derived에게 접근 허용
		cout << b;
	}
};

class GrandDervied : private Derived {
private:
	int c;
protected:
	void setAB(int x)
	{
		setA(x);	// 컴파일 오류, setA()는 private 속성으로 변경되어 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에 접근 불가
		showA();	// 컴파일 오류, showA()는 private 속성으로 변경되어 Derived 클래스에 상속되기 때문에 GrandDerived 클래스에서 접근 불가
		setB(x);	// 정상 컴파일, setB()는 Derived 클래스의 protected 멤버이기 때문에 파생 클래스 GrandDerived에게 접근 허용
	}
};
#endif
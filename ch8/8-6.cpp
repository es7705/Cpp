// 8-6 ����� ��ø�� �� ���� ���� ���
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

class Derived : private Base {				// private ���
private:
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB()
	{
		setA(5);	// ���� ������, setA()�� Base Ŭ������ protected ����̱� ������ �Ļ�Ŭ���� Derived���� ���� ���				
		showA();	// ���� ������, showA()�� Base Ŭ������ public ����̱� ������ �Ļ� Ŭ���� Derived���� ���� ���
		cout << b;
	}
};

class GrandDervied : private Derived {
private:
	int c;
protected:
	void setAB(int x)
	{
		setA(x);	// ������ ����, setA()�� private �Ӽ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ GrandDerived Ŭ������ ���� �Ұ�
		showA();	// ������ ����, showA()�� private �Ӽ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ GrandDerived Ŭ�������� ���� �Ұ�
		setB(x);	// ���� ������, setB()�� Derived Ŭ������ protected ����̱� ������ �Ļ� Ŭ���� GrandDerived���� ���� ���
	}
};
#endif
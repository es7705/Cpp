// 8-5 protected ��� ���
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

// Derived Ŭ������ Base Ŭ������ 'protected ���'�Կ� ����
// Base Ŭ������ setA(), showA() ����� protected �Ӽ����� ����Ǿ� Derived�� ��ӵȴ�.
class Derived : protected Base {
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
	//x.a = 5;			// a�� Derived Ŭ������ ��ӵ����� private ����̹Ƿ� ���� �Ұ�	
	//x.setA(10);		// setA(), showA()�� protected ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.showA();		// setA(), showA()�� protected ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.b = 10;			// b�� private ����̱� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.setB(10);		// setB()�� protected ����̱� ������ main()���� ���� �Ұ�
	x.showB();			// public ����̱� ������ ������ ���� ����
	return 0;
}
#endif
// 8-4 private ��� ���
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

// Derived Ŭ������ Base Ŭ������ 'private ���'�Կ� ����
// Base Ŭ������ setA(), showA() ����� private �Ӽ����� ����Ǿ� Derived�� ��ӵȴ�.
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
	//x.a = 5;			// a�� Derived Ŭ������ ��ӵ����� private ����̹Ƿ� ���� �Ұ�	
	//x.setA(10);		// setA(), showA()�� private ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.showA();		// setA(), showA()�� private ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.b = 10;			// b�� private ����̱� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.setB(10);		// setB()�� protected ����̱� ������ main()���� ���� �Ұ�
	x.showB();			// public ����̱� ������ ������ ���� ����
	return 0;
}
#endif
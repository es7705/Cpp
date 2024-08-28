// 8.7 다중 상속 
// Adder와 Subtractor를 다중 상속받는 Calculator 클래스 작성
#if 0
#include <iostream>
using namespace std;

class Adder {
protected:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
	int minus(int a, int b) { return a - b; }
};

class Calculator : public Adder, Subtractor {
public:
	int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b)
{
	int res = 0;
	switch (op) {
	case '+': res = add(a, b);
		break;
	case '-': res = minus(a, b);
		break;
	}
	return res;
}

int main(void)
{
	Calculator handCalculatro;
	cout << "2 + 4 = " << handCalculatro.calc('+', 2, 4) << endl;
	cout << "100 - 8 = " << handCalculatro.calc('-', 100, 8) << endl;
	return 0;
}
#endif
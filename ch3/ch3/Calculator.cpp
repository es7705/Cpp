#if 0
// Calculator 클래스 구현부
#include  <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run()
{
	cout << "두 개의 수를 입력하세요 : ";
	int a, b;
	cin >> a >> b;				// 정수 두 개 입력
	Adder adder(a, b);			// 덧셈 생성자 
	cout << adder.process();	// 덧셈 계산
}
#endif
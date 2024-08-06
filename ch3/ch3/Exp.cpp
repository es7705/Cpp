#if 0
#include <iostream>
using namespace std;

#include "Exp.h"	

Exp::Exp() : base(1), jisu(1) {}
Exp::Exp(int a) : Exp(a, 1) {}
Exp::Exp(int a, int b)
{
	base = a;
	jisu = b;
}

int Exp::getValue()					// 지수를 정수로 계산하여 리턴
{	
	int res = 1;
	for (int i = 0; i < jisu; i++)
	{
		res = res * base;
	}
	return res;
}

int Exp::getBase()
{
	return base;
}

int Exp::getExp()
{
	return jisu;
}

bool Exp::equals(Exp b)
{
	if (getValue() == b.getValue())
	{
		return true;
	}
	else
		return false;
}

#endif
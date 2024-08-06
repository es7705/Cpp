#if 0
#ifndef EXP_H
#define EXP_H

class Exp {
private:
	int base, jisu;
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getValue();		// 지수를 정수로 계산하여 리턴
	int getBase();
	int getExp();
	bool equals(Exp b);
};

#endif

#endif
// 가상 상속
// 다중 상속의 모호성을 가상 상속으로 해결
#if 0
#include <iostream>
using namespace std;

class BaseIO {		// 기본 클래스
public:
	int mode;
};

class In : virtual public BaseIO {		// 파생 클래스, 가상 상속
public:
	int readPos;
};
	
class Out : virtual public BaseIO {		// 파생 클래스, 가상 상속
public:
	int writePos;
};
	
class InOut : public In, public Out {	// 파생 클래스, 다중 상속
public:
	bool safe;
	void show();
};

void InOut::show()
{
	cout << "mode : " << mode << endl;
	cout << "readPos : " << readPos << endl;
	cout << "writePos : " << writePos << endl;
	cout << "boolalpha : " << boolalpha << safe << endl;
}

int main(void)
{
	InOut ioObj;

	ioObj.readPos = 10;
	ioObj.writePos = 29;
	ioObj.safe = true;
	ioObj.mode = 5;

	ioObj.show();
	return 0;
}
#endif
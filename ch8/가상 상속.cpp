// ���� ���
// ���� ����� ��ȣ���� ���� ������� �ذ�
#if 0
#include <iostream>
using namespace std;

class BaseIO {		// �⺻ Ŭ����
public:
	int mode;
};

class In : virtual public BaseIO {		// �Ļ� Ŭ����, ���� ���
public:
	int readPos;
};
	
class Out : virtual public BaseIO {		// �Ļ� Ŭ����, ���� ���
public:
	int writePos;
};
	
class InOut : public In, public Out {	// �Ļ� Ŭ����, ���� ���
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
// ��Ӱ� ������, �Ҹ���
// 8-3 TV, WideTV, SmartTV�� ��� ����� ������ �Ű� ���� ����
#if 0
#include <iostream>
using namespace std;

class TV			// �⺻ Ŭ����
{
private:
	int size;		// ��ũ�� ũ��
public:
	TV();			// �⺻ ������
	TV(int size);	// �Ű� ���� ������
	int getSize();
};
TV::TV()			// �⺻ ������
{
	size = 20;
}
TV::TV(int size)	// �Ű� ���� ������
{
	this->size = size;
}
int TV::getSize()
{
	return size;
}

class WideTV : public TV							// TV�� ��ӹ޴� WideTV
{
private:
	bool videoIn;
public:
	WideTV(int size, bool videoIn);					// �Ű� ������ �ִ� ������
	bool getVideoIn();
};
WideTV::WideTV(int size, bool videoIn) : TV(size)	// ������ ����
{
	this->videoIn = videoIn;
}
bool WideTV::getVideoIn()
{
	return videoIn;
}

class SmartTV : public WideTV						// Wide TV�� ��ӹ޴� Smart TV			
{
private:
	string ipAddr;									// ���ͳ� �ּ�
public:
	SmartTV(string ipAddr, int size);				// �Ű� ������ �ִ� ������
	string getIpAddr();
};
SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true)	// ������ ����
{
	this->ipAddr = ipAddr;
}
string SmartTV::getIpAddr()
{
	return ipAddr;
}

int main(void)
{
	// 32��ġ ũ�⿡ "192.0.0.1"�� ���ͳ� �ּҸ� ������ ����Ʈ TV ��ü ����
	SmartTV htv("192,0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;							// ������ ���
	cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;		// videoIn ���
	cout << "IP = " << htv.getIpAddr() << endl;							// ���ͳ� �ּ� ���

	return 0;
}
#endif
// 상속과 생성자, 소멸자
// 8-3 TV, WideTV, SmartTV의 상속 관계와 생성자 매개 변수 전달
#if 0
#include <iostream>
using namespace std;

class TV			// 기본 클래스
{
private:
	int size;		// 스크린 크기
public:
	TV();			// 기본 생성자
	TV(int size);	// 매개 변수 생성자
	int getSize();
};
TV::TV()			// 기본 생성자
{
	size = 20;
}
TV::TV(int size)	// 매개 변수 생성자
{
	this->size = size;
}
int TV::getSize()
{
	return size;
}

class WideTV : public TV							// TV를 상속받는 WideTV
{
private:
	bool videoIn;
public:
	WideTV(int size, bool videoIn);					// 매개 변수가 있는 생성자
	bool getVideoIn();
};
WideTV::WideTV(int size, bool videoIn) : TV(size)	// 생성자 선택
{
	this->videoIn = videoIn;
}
bool WideTV::getVideoIn()
{
	return videoIn;
}

class SmartTV : public WideTV						// Wide TV를 상속받는 Smart TV			
{
private:
	string ipAddr;									// 인터넷 주소
public:
	SmartTV(string ipAddr, int size);				// 매개 변수가 있는 생성자
	string getIpAddr();
};
SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true)	// 생성자 선택
{
	this->ipAddr = ipAddr;
}
string SmartTV::getIpAddr()
{
	return ipAddr;
}

int main(void)
{
	// 32인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
	SmartTV htv("192,0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;							// 사이즈 출력
	cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl;		// videoIn 출력
	cout << "IP = " << htv.getIpAddr() << endl;							// 인터넷 주소 출력

	return 0;
}
#endif
#if 0
// string 클래스를 이용한 문자열 생성 및 출력
#include <iostream>
using namespace std;

int main(void)
{
	string str;		// 빈 문자열을 가진 스트링 객체 생성
	string address("서울시 성북구 삼선동 389");
	string copyAddress(address);

	char text[] = { 'L', 'o', 'v', 'e', '\0'};
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
	return 0;
}
#endif
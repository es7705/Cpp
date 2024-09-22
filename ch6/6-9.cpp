// 6-9 디폴트 매개 변수로 인한 함수 중복의 모호성
#if 0
#include <iostream>
#include <string>
using namespace std;

void msg(int id)
{
	cout << id << endl;
}
ㄴ
void msg(int id, string s = "")
{
	cout << id << ":" << s << endl;
}

int main(void)
{
	msg(5, "Good Morning");			// 정상 컴파일, 두번째 msg() 호출
	msg(6);							// 함수 호출 모호. 컴파일 오류
	return 0;
}
#endif
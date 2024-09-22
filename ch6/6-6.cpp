// 6-6 중복된 생성자들을 디폴트 매개 변수를 이용한 간소화 연습
#if 0
#include <iostream>
using namespace std;

class MyVector
{
	int* p;
	int size;
public:
	MyVector(int n = 100)
	{
		p = new int[n];
		size = n;
	}
	~MyVector()
	{
		delete[] p;
	}
};

int main(void)
{
	MyVector* v1, * v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);

	delete v1;
	delete v2;
	return 0;
}
#endif
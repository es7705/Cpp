#if 0
#include <iostream>
using namespace std;
#include "4-4 circle.h"

int main(void)
{
	Circle circles[2][3];
	
	int i, j;
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "circles[" << i << "]" << "[" << j << "]" << "의 반지름을 입력하세요 : ";
			circles[i][j].input();
		}
	}

	cout << endl;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			circles[i][j].print(i, j);
		}
	}

	return 0;
}
#endif
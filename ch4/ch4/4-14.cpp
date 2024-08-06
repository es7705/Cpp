#if 0
// ¹®ÀÚ¿­ Ã³¸® ÀÀ¿ë - µ¡¼À ¹®ÀÚ¿­À» ÀÔ·Â¹Þ¾Æ µ¡¼À ½ÇÇà
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cout << "7+23+5+100+25¿Í °°ÀÌ µ¡¼À ¹®ÀÚ¿­À» ÀÔ·ÂÇÏ¼¼¿ä." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	while (true)
	{
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1)
		{
			string part = s.substr(startIndex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "¼ýÀÚµéÀÇ ÇÕÀº " << sum;
	return 0;
}
#endif
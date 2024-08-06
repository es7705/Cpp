#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Date
{
	int year, month, day;
public:
	Date(int y, int m, int d);
	Date(const char* str
	);
	void show();
	int getYear() 
	{ 
		return year; 
	};

	int getMonth() 
	{ 
		return month;  
	};

	int getDay() 
	{
		return day; 
	};
};

Date::Date(int y, int m, int d)
{
	year = y; 
	month = m;
	day = d;
}

Date::Date(const char* str) {
	char a[20];
	strncpy(a, str, 19); // strncpy ���
	a[19] = '\0'; // �� ���� ���� �߰�
	year = atoi(strtok(a, "/"));
	month = atoi(strtok(NULL, "/"));
	day = atoi(strtok(NULL, ""));
}

void Date::show()
{
	cout << year << "��" << month << "��" << day << "��" << endl;
}

int main(void) {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
#endif
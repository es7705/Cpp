// 5-12 묵시적 복사 생성에 의해 복사 생성자가 자동 호출되는 경우
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person);
	~Person();
	void changeName(const char* name);
	void show();
};

Person::Person(int id, const char* name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(const Person& person)
{
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person()
{
	if (name)
		delete[] name;
}

void Person::changeName(const char* name)
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

void Person::show()
{
	cout << id << ',' << name << endl;
}

void f(Person person)
{
	person.changeName("dummy");
}

Person g()
{
	Person mather(2, "Jane");
	return mather;
}

int main()
{
	Person father(1, "Kitae");
	Person son = father;		// 복사 생성자 호출
	f(father);					// 복사 생성자 호출
	g();						// 복사 생성자 호출	
	
	return 0;
}
#endif	
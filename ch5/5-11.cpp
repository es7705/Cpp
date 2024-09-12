// 5-11 깊은 복사 생성자를 가진 정상적인 Person 클래스
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
	this->name = new char [len + 1];
	strcpy(this->name, name);
	cout << "보통 생성자 실행 " << this->name << endl;
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
	cout << "소멸자 실행 " << this->name << endl;

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

int main()
{
	Person father(1, "Kitae");
	Person daughter(father);

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace롤 변경한 후----" << endl;
	father.show();
	daughter.show();
	// father의 name과 daughter의 name의 다른 메모리임
	return 0;
}
#endif	
// 5-12 ������ ���� ������ ���� ���� �����ڰ� �ڵ� ȣ��Ǵ� ���
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
	cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
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
	Person son = father;		// ���� ������ ȣ��
	f(father);					// ���� ������ ȣ��
	g();						// ���� ������ ȣ��	
	
	return 0;
}
#endif	
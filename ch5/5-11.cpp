// 5-11 ���� ���� �����ڸ� ���� �������� Person Ŭ����
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
	cout << "���� ������ ���� " << this->name << endl;
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
	cout << "�Ҹ��� ���� " << this->name << endl;

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

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ ��----" << endl;
	father.show();
	daughter.show();
	// father�� name�� daughter�� name�� �ٸ� �޸���
	return 0;
}
#endif	
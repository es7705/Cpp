#if 0
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int start, int end);
};

Random::Random()
{
	srand((unsigned int)time(0));
}

int Random::next() {
	int n = rand();
	return n;
}
int Random::nextInRange(int start, int end) {

	int n;									// 2 ~ 4 rand % 3(== 4 - 2 + 1) + 2
	n = rand() % (end - start + 1) + start;	// begin ~ end : rand() % (end - begin + 1) + start
	return n;
}

int main() {
	Random r;
	int n;
	cout << "-- 0���� " << RAND_MAX << "������ ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		n = r.next();
		if(n % 2 == 0)
		{
			cout << n << ' ';
		}
	}
	cout << endl << endl;

	int start, end;
	cout << "���۰� �� ���� �Է� �ϼ��� : ";
	cin >> start >> end;

	cout << endl << endl << "-- " << start << "���� " << end << "������ ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		n = r.nextInRange(start, end);
		if (n % 2 == 0)
		{
			cout << n << ' ';
		}
	}
	cout << endl;
	return 0;
}
#endif
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
	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		n = r.next();
		if(n % 2 == 0)
		{
			cout << n << ' ';
		}
	}
	cout << endl << endl;

	int start, end;
	cout << "시작과 끝 수를 입력 하세요 : ";
	cin >> start >> end;

	cout << endl << endl << "-- " << start << "에서 " << end << "까지의 랜덤 정수 10개--" << endl;
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
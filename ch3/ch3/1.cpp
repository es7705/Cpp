#if 0
#include <iostream>
using namespace std;

class Tower
{
private:
	int height;
public:
	Tower();
	Tower(int h);
	int getHeight();
};

Tower::Tower():Tower(1) {}
Tower::Tower(int h)
{
	height = h;
}
int Tower::getHeight()
{
	return height;
}

int main(void)
{
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 : " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 : " << seoulTower.getHeight() << "미터" << endl;

	return 0;
}
#endif
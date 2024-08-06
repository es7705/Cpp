#if 0
// 瘤开 按眉客 傈开 按眉狼 积己 棺 家戈 鉴辑
#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r) : radius(r)
{
	if()
	cout << "馆瘤抚 : " << radius << "cm 盔 积己" << endl;
}

Circle::~Circle()
{
	cout << "馆瘤抚 : " << radius << "cm 盔 家戈" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}


Circle globalDonut(1000);	// 傈开 按眉 积己
Circle globalPozze(2000);	// 傈开 按眉 积己

void f()
{
	cout << endl << "f窃荐" << endl;
	Circle fDonut(100);		// 瘤开 按眉 积己
	Circle fPizza(200);		// 瘤开 按眉 积己
	cout << endl;
}

int main(void)
{
	cout << endl << "main 窃荐" << endl;
	Circle mainDonut;		// 瘤开 按眉 积己
	Circle mainPizza(30);	// 瘤开 按眉 积己
	f();
	return 0;
}
#endif
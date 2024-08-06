#if 0
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
	int radius;
public:
	Circle();							// 기본 생성자
	Circle(int r);					// 매개 변수가 있는 생성자
	void setRadius(int r);		// 반지름 
	void input();					// 반지름 입력
	void print(int i, int j);		// 면적 출력
	double getArea();			// 면적 계산
};
#endif
#endif
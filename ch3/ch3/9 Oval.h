#if 0
#ifndef OVAL_H
#define OVAL_H

class Oval
{
	int width, height;
public:
	Oval();
	Oval(int width, int height);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int width, int height);
	void show();
};

#endif // !OVAL_H

#endif
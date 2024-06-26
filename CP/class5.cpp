#include <iostream>

class Shape
{
protected:
	Shape() {}
	virtual void draw() = 0;
};

class Circle : public Shape
{
public:
	Circle() {}
	void draw() override
	{
		std::cout << "원형" << std::endl;
	}
};

class Rect : public Shape
{
public:
	Rect() {}
	void draw() override
	{
		std::cout << "사각형" << std::endl;
	}

};

class Triangle : public Shape
{
public:
	Triangle() {}
	void draw() override
	{
		std::cout << "삼각형" << std::endl;
	}

};

void main()
{
	Circle cir;
	Rect rec;
	Triangle tri;

	cir.draw();
	rec.draw();
	tri.draw();
}
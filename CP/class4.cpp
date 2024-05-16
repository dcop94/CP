#include <iostream>

using namespace std;

class Shape
{
protected:
	int m_baseNum;
	double m_baseLength;

public:
	Shape(int baseNum, double baseLength) : m_baseNum(baseNum), m_baseLength(baseLength) {}

	void printlnfo()
	{
		cout << "º¯ÀÇ °³¼ö : " << m_baseNum << " ¹Øº¯ÀÇ ±æÀÌ : " << m_baseLength << endl;
	}
	
};

class Rectangle : public Shape
{
	double m_verticalLength;

public:
	Rectangle(double baseLength, double verticalLength) : Shape(4, baseLength), m_verticalLength(verticalLength) {}

	double area()
	{
		return m_baseLength * m_verticalLength;
	}
};

class Triangle : public Shape
{
	double m_height;
	
public:
	Triangle(double baseLength, double height) : Shape(3, baseLength), m_height(height) {}

	double area()
	{
		return 0.5 * m_baseLength * m_height;
	}
};

int main()
{
	Rectangle rect(2, 10);
	cout << " »ç°¢ÇüÀÇ ³ÐÀÌ : " << rect.area() << endl;
	rect.printlnfo();

	cout << endl;

	Triangle tri(4, 10);
	cout << " »ï°¢ÇüÀÇ ³ÐÀÌ : " << tri.area() << endl;
	tri.printlnfo();

	return 0;
}
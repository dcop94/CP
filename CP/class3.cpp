#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(float width, float height) : m_width(width), m_height(height) {}
	float area()
	{
		return m_width * m_height;
	}

private:
	float m_width;
	float m_height;

	float getArea()
	{
		return area();
	}

	void setWidth(float m_width)
	{
		this->m_width = m_width;
	}

	void setHeight(float m_height)
	{
		this->m_height = m_height;
	}
};


int main()
{
	float m_width, m_height;


	Rectangle result(1,2);
	cout << " 넓이는 : " << result.getArea() << endl;

	cout << " 사각형의 가로와 세로 길이를 입력해주세요 (띄어쓰기로 구분) ";
	cin >> m_width >> m_height;

	return 0;
}
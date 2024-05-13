#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle (float width, float height) : m_width(width), m_height(height) {}
	float area()
	{
		return m_width * m_height;
	}

private:
	float m_width;
	float m_height;
};


int main()
{
	float m_width, m_height;
	cout << " �簢���� ���ο� ���� ���̸� �Է����ּ��� (����� ����) ";
	cin >> m_width >> m_height;
	
	Rectangle result(m_width, m_height);
	cout << " ���̴� : " << result.area() << endl;

		return 0;
}
#include <iostream>

using namespace std;

struct Rectangle
{
	int width = 0;
	int height = 0;
	float area = 0;
};

int main()
{
	Rectangle rect;
	cout << " ����, ���� ���̸� �Է��ϼ��� : ";
	cin >> rect.width >> rect.height;
	
	rect.area = rect.width * rect.height;
	cout << " ���̴� : " << rect.area;

	return 0;
}
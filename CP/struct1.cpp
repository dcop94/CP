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
	cout << " 가로, 세로 길이를 입력하세요 : ";
	cin >> rect.width >> rect.height;
	
	rect.area = rect.width * rect.height;
	cout << " 넓이는 : " << rect.area;

	return 0;
}
#include <iostream>

int main()
{
	std::string MyName;
	std::cout << "이름을 입력하세요:\n";
	std::cin >> MyName;

	int age;
	std::cout << "나이를 입력하세요\n";
	std::cin >> age;

	std::cout << "안녕하세요!" << MyName << "님" << "(" << age << "세)";



	return 0;

}

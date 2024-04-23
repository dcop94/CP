#include <iostream>

int main()
{
	int a = 0;
	
	std::cout << "숫자를 입력해주세요\n";
	std::cin >> a;

	a % 5 == 0 ? std::cout << "5의 배수입니다" : std::cout << "5의 배수가 아닙니다";

	return 0;

}
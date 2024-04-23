#include <iostream>

int main()
{
	int a;
	int b;
	char num;
	
	std::cout << "첫번째 수를 입력하세요\n";
	std::cin >> a;
	std::cout << "두번째 수를 입력하세요\n";
	std::cin >> b;

	std::cout << "사칙연산을 고르세요\n" << "사칙연산은 +, -, *, / 입니다.";
	std::cin >> num;
	
	switch (num)
	{
	case '+' :
		std::cout << "계산 값은" << a << "+" << b << "=" << a + b << "입니다\n";
		break;

	case '-' :
		std::cout << "계산 값은" << a << "-" << b << "=" << a - b << "입니다\n";
		break;

	case '*':
		std::cout << "계산 값은" << a << "*" << b << "=" << a * b << "입니다\n";
		break;

	case '/':
		std::cout << "계산 값은" << a << "/" << b << "=" << a / b << "입니다\n";
		break;
	}
}
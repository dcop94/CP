#include <iostream>

int main()
{
	int age;
	std::cout << "나이를 입력하세요\n";
	std::cin >> age;

	if (age < 8)
	{
		std::cout << "유아\n";
	}
	else if (age < 14)
	{
		std::cout << "초등학생\n";
	}
	else if (age < 17)
	{
		std::cout << "중학생\n";
	}
	else if (age < 20)
	{
		std::cout << "고등학생\n";
	}
	else if (age <= 199)
	{
		std::cout << "성인\n";
	}
	else if (200 <= age)
	{
		std::cout << "나이가 너무 많습니다..!\n";
	}
	else
	{
		std::cout << "다시 입력하세요\n";
	}

	return 0;
}
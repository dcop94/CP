#include <iostream>

int main()
{
	/* 5단만 출력
	int a = 1;
	int num;

	std::cout << "5단 출력\n";

	while (a < 10)
	{
		num = a * 5;
		std::cout << "5 * " << a << " = " << num << std::endl;
		a++;

	}

	return 0; */

	/* 1~9단

	int a = 1;
	int b = 1;
	int sum = 0;

	std::cout << "1~9단 출력\n";

	while (a < 10)
	{
		std::cout << "----------" << a << "단" << "----------\n";
		b = 1;

		while (b < 10)
		{
			sum = a * b;
			std::cout << a << "*" << b << " = " << sum << std::endl;
			b++;
		}

		a++;

	} */


	/* 1부터 n까지 합
	int a, b = 1;
	int sum = 0;
	
	std::cout << "1부터 a까지의 합 구하기\n";
	std::cout << "숫자(양의 정수)를 입력하세요 : \n";
	std::cin >> a;

	while (b<=a)
	{
		sum = sum + b;
		b++;

}
	std::cout << "1부터 a까지의 합은 : " << sum << std::endl;

	return 0;
	*/

	/* 사용자가 입력한 숫자 더하기
	int a;
	int sum = 0;

	std::cout << "사용자가 입력한 숫자 더하기\n";

	while (1)
	{
		std::cout << "숫자를 입력하세요 (0 : exit) : \n";
		std::cin >> a;

		if (a == 0)
		{
			break;
		}

		sum = sum + a;

	}
	std::cout << "사용자가 입력한 수의 합은 : " << sum << std::endl;
	
	return 0;
	*/


	/* 입력한 숫자만큼 별찍기
	int a, star;
	int b;

	std::cout << "숫자를 입력해주세요 : \n";
	std::cin >> star;

	for (a = 0; a < star; a++)
	{
		for (b = 0; b <= a; b++)
		{
			std::cout << " * ";
		}

		std::cout << std::endl;
	}

	return 0;

	*/

}
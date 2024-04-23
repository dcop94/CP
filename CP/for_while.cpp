#include <iostream>

int main()
{
	int sum = 0;
	int a;
	int b;
	std::cout << "1부터 a까지의 합 구하기\n";
	std::cout << "숫자(양의 정수)를 입력하세요 : ";
	std::cin >> a;



	for (b = 1; b <= a; b++)
	{

		sum = sum + b;

	}

	std::cout << "1부터 a까지의 합은 : " << sum;

	return 0;

}
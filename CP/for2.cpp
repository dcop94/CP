#include <iostream>

int main()
{
	int a;
	int b;
	std::cout << "1~9단 출력\n";
		for (a = 1; a < 10; a++)
		{
			std::cout << "--------------" << a << "단" << "--------------\n";

			for (b = 1; b < 10; b++)
			{
				std::cout << a << " * " << b << " = " << b * a << std::endl;
			}

		}
	return 0;
}
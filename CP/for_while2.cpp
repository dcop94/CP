#include <iostream>

int main()
{
	/* 5�ܸ� ���
	int a = 1;
	int num;

	std::cout << "5�� ���\n";

	while (a < 10)
	{
		num = a * 5;
		std::cout << "5 * " << a << " = " << num << std::endl;
		a++;

	}

	return 0; */

	/* 1~9��

	int a = 1;
	int b = 1;
	int sum = 0;

	std::cout << "1~9�� ���\n";

	while (a < 10)
	{
		std::cout << "----------" << a << "��" << "----------\n";
		b = 1;

		while (b < 10)
		{
			sum = a * b;
			std::cout << a << "*" << b << " = " << sum << std::endl;
			b++;
		}

		a++;

	} */


	/* 1���� n���� ��
	int a, b = 1;
	int sum = 0;
	
	std::cout << "1���� a������ �� ���ϱ�\n";
	std::cout << "����(���� ����)�� �Է��ϼ��� : \n";
	std::cin >> a;

	while (b<=a)
	{
		sum = sum + b;
		b++;

}
	std::cout << "1���� a������ ���� : " << sum << std::endl;

	return 0;
	*/

	/* ����ڰ� �Է��� ���� ���ϱ�
	int a;
	int sum = 0;

	std::cout << "����ڰ� �Է��� ���� ���ϱ�\n";

	while (1)
	{
		std::cout << "���ڸ� �Է��ϼ��� (0 : exit) : \n";
		std::cin >> a;

		if (a == 0)
		{
			break;
		}

		sum = sum + a;

	}
	std::cout << "����ڰ� �Է��� ���� ���� : " << sum << std::endl;
	
	return 0;
	*/


	/* �Է��� ���ڸ�ŭ �����
	int a, star;
	int b;

	std::cout << "���ڸ� �Է����ּ��� : \n";
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
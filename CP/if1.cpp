#include <iostream>

int main()
{
	int age;
	std::cout << "���̸� �Է��ϼ���\n";
	std::cin >> age;

	if (age < 8)
	{
		std::cout << "����\n";
	}
	else if (age < 14)
	{
		std::cout << "�ʵ��л�\n";
	}
	else if (age < 17)
	{
		std::cout << "���л�\n";
	}
	else if (age < 20)
	{
		std::cout << "����л�\n";
	}
	else if (age <= 199)
	{
		std::cout << "����\n";
	}
	else if (200 <= age)
	{
		std::cout << "���̰� �ʹ� �����ϴ�..!\n";
	}
	else
	{
		std::cout << "�ٽ� �Է��ϼ���\n";
	}

	return 0;
}
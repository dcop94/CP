#include <iostream>

int main()
{
	std::string Name;
	std::cout << "�̸��� �Է��ϼ���\n";
	std::cin >> Name;

	if (Name == "ȫ�浿")
	{
		std::cout << "����\n";
	}
	else if (Name == "������")
	{
		std::cout << "����\n";
	}
	else
	{
		std::cout << "�𸣰ھ��\n";
	}

	return 0;
}
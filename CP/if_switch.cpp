#include <iostream>

int main()
{
	float a;
	float b;
	char num;
	
	std::cout << "ù��° ���� �Է��ϼ���\n";
	std::cin >> a;
	std::cout << "�ι�° ���� �Է��ϼ���\n";
	std::cin >> b;

	std::cout << "��Ģ������ ������\n" << "��Ģ������ +, -, *, / �Դϴ�.";
	std::cin >> num;
	
	switch (num)
	{
	case '+' :
		std::cout << "��� ����" << a << "+" << b << "=" << a + b << "�Դϴ�\n";
		break;

	case '-' :
		std::cout << "��� ����" << a << "-" << b << "=" << a - b << "�Դϴ�\n";
		break;

	case '*':
		std::cout << "��� ����" << a << "*" << b << "=" << a * b << "�Դϴ�\n";
		break;

	case '/':
		std::cout << "��� ����" << a << "/" << b << "=" << a / b << "�Դϴ�\n";
		break;
	}

	return 0;
}
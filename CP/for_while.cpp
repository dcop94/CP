#include <iostream>

int main()
{
	int sum = 0;
	int a;
	int b;
	std::cout << "1���� a������ �� ���ϱ�\n";
	std::cout << "����(���� ����)�� �Է��ϼ��� : ";
	std::cin >> a;



	for (b = 1; b <= a; b++)
	{

		sum = sum + b;

	}

	std::cout << "1���� a������ ���� : " << sum;

	return 0;

}
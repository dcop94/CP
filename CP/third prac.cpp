#include <iostream>

int main()
{
	int a = 0;
	
	std::cout << "���ڸ� �Է����ּ���\n";
	std::cin >> a;

	a % 5 == 0 ? std::cout << "5�� ����Դϴ�" : std::cout << "5�� ����� �ƴմϴ�";

	return 0;

}
#include <iostream>

int main()
{
	std::string Name;
	std::cout << "이름을 입력하세요\n";
	std::cin >> Name;

	if (Name == "홍길동")
	{
		std::cout << "남자\n";
	}
	else if (Name == "성춘향")
	{
		std::cout << "여자\n";
	}
	else
	{
		std::cout << "모르겠어요\n";
	}

	return 0;
}
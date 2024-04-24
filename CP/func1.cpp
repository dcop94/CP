#include <iostream>

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

float Divide(int a, int b)
{
	return float(a) / float(b);
	
}


int main()
{
	int a, b;
	std::cout << "정수 입력 : \n";
	std::cin >> a >> b;

	std::cout << "Add 함수 : " << Add(a,b) << std::endl;
	std::cout << "Sub 함수 : " << Sub(a,b) << std::endl;
	std::cout << "Mul 함수 : " << Mul(a,b) << std::endl;
	std::cout << "Divide 함수 : " << Divide(a,b) << std::endl;

	return 0;

}
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
	std::cout << "���� �Է� : \n";
	std::cin >> a >> b;

	std::cout << "Add �Լ� : " << Add(a,b) << std::endl;
	std::cout << "Sub �Լ� : " << Sub(a,b) << std::endl;
	std::cout << "Mul �Լ� : " << Mul(a,b) << std::endl;
	std::cout << "Divide �Լ� : " << Divide(a,b) << std::endl;

	return 0;

}
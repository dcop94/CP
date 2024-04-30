#include <iostream>
#include <string>

using namespace std;

bool Check_String(string input1, string input2);
int Sum_Input(string input1, string input2);

int main()
{
	string input1;
	string input2;
	cout << "문자열 두개를 입력해주세요 : " << " " << endl;
	cin >> input1 >> input2;

	while (!Check_String(input1, input2))
	{
		cout << "숫자가 아닙니다, 다시 입력해주세요 : " << " " << endl;
		cin >> input1 >> input2;
	}

	cout << " 둘다 숫자가 맞습니다. " << endl;

	cout << " 두 문자열을 이어 붙이면 : " << input1 + input2 << " 입니다. " << endl;

	
	
	cout << " 두 문자열의 합은 : " << Sum_Input(input1, input2) << " 입니다. " << endl;
	
	return 0;

}

bool Check_String(string input1, string input2)
{
	bool Ok_String1 = false;
	bool Ok_String2 = false;


	for (int i = 0; i < input1.length(); i++)
	{
		if (!isdigit(input1[i]))
		{
			Ok_String1 = true;
			break;
		}
	}

	for (int i = 0; i < input2.length(); i++)
	{
		if (!isdigit(input2[i]))
		{
				Ok_String2 = true;
				break;
		}
	}


	return !Ok_String1 && !Ok_String2;
} 

int Sum_Input(string input1, string input2)
{
	return  stoi(input1) + stoi(input2);

}
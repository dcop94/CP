#include <iostream>
#include <string>

using namespace std;

bool Check_String(string input1, string input2);
int Sum_Input(string input1, string input2);

int main()
{
	string input1;
	string input2;
	cout << "���ڿ� �ΰ��� �Է����ּ��� : " << " " << endl;
	cin >> input1 >> input2;

	while (!Check_String(input1, input2))
	{
		cout << "���ڰ� �ƴմϴ�, �ٽ� �Է����ּ��� : " << " " << endl;
		cin >> input1 >> input2;
	}

	cout << " �Ѵ� ���ڰ� �½��ϴ�. " << endl;

	cout << " �� ���ڿ��� �̾� ���̸� : " << input1 + input2 << " �Դϴ�. " << endl;

	
	
	cout << " �� ���ڿ��� ���� : " << Sum_Input(input1, input2) << " �Դϴ�. " << endl;
	
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
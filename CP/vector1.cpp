#include <iostream>
#include <vector>


using namespace std;

// Vector�� ����Ͽ� ������ �����ϴ� �� Vector ����
void PrintVector(vector<int> &num)
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}
}

int main()
{
	// ����ڷκ��� 5���� ������ �Է� �޾� ���Ϳ� �߰�
	vector<int> num;
	

	for (int i = 0; i < 5; i++)
	{
		int input;
		cout << i << " �� ������ �Է� ���ּ��� : \n";
		cin >> input;
		num.push_back(input);
	}
	
	// ������ ũ�� ���

	cout << "������ ũ�� : " << num.size() << endl;

	// ������ ��� ���� ���

	for (int i = 0; i < num.size(); i++)
	{
		cout << "������ ��� ���� : " << num[i] << " " << endl;
	}

	// ���� ū ���� ã�� ���
	int max = *max_element(num.begin(), num.end());
	cout << "���� ū �� : " << max << endl;
	

	// ������ ��� ���Ҹ� �ι��

	for (int i = 0; i < num.size(); i++)
	{
		num[i] *= 2;
		cout << "��� ���� �ι� : " << i << endl;
	}

	// �ε����� �Է� �޾� �ش� �ε����� �ִ� ��������

	int indexToRemove;
	cout << " ���� ������ �ε����� �Է����ּ��� : \n";
	cin >> indexToRemove;

	num.erase(num.begin() + indexToRemove);

	PrintVector(num);
	

	// �ε����� �Է� �޾� �ش� �ε����� �ִ� ���ο� ���� ����

	int indexToInsert;
	cout << " ���� �߰��� �ε����� �Է����ּ��� : \n";
	cin >> indexToInsert;
	
	int valueToInsert;
	cout << " ���� �߰��� ���� �Է����ּ��� : \n";
	cin >> valueToInsert;

	num.insert(num.begin() + indexToInsert, valueToInsert);
	
	PrintVector(num);

}
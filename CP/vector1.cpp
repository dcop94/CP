#include <iostream>
#include <vector>


using namespace std;

// Vector를 사용하여 정수를 저장하는 빈 Vector 선언
void PrintVector(vector<int> &num)
{
	for (int i = 0; i < num.size(); i++)
	{
		cout << num[i] << endl;
	}
}

int main()
{
	// 사용자로부터 5개의 정수를 입력 받아 벡터에 추가
	vector<int> num;
	

	for (int i = 0; i < 5; i++)
	{
		int input;
		cout << i << " 번 정수를 입력 해주세요 : \n";
		cin >> input;
		num.push_back(input);
	}
	
	// 벡터의 크기 출력

	cout << "벡터의 크기 : " << num.size() << endl;

	// 벡터의 모든 원소 출력

	for (int i = 0; i < num.size(); i++)
	{
		cout << "벡터의 모든 원소 : " << num[i] << " " << endl;
	}

	// 가장 큰 값을 찾아 출력
	int max = *max_element(num.begin(), num.end());
	cout << "가장 큰 값 : " << max << endl;
	

	// 벡터의 모든 원소를 두배로

	for (int i = 0; i < num.size(); i++)
	{
		num[i] *= 2;
		cout << "모든 원소 두배 : " << i << endl;
	}

	// 인덱스를 입력 받아 해당 인덱스에 있는 원소제거

	int indexToRemove;
	cout << " 원소 제거할 인덱스를 입력해주세요 : \n";
	cin >> indexToRemove;

	num.erase(num.begin() + indexToRemove);

	PrintVector(num);
	

	// 인덱스를 입력 받아 해당 인덱스에 있는 새로운 원소 삽입

	int indexToInsert;
	cout << " 원소 추가할 인덱스를 입력해주세요 : \n";
	cin >> indexToInsert;
	
	int valueToInsert;
	cout << " 원소 추가할 값을 입력해주세요 : \n";
	cin >> valueToInsert;

	num.insert(num.begin() + indexToInsert, valueToInsert);
	
	PrintVector(num);

}
#include <iostream>

using namespace std;

int main()
{
	int student;
	float sum = 0;
	float avg = 0;

	cout << " �л� ���� �Է��ϼ��� : \n";
	cin >> student;

	float* arr_student = new float[student];
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : \n";
		cin >> arr_student[i];
		sum = sum + arr_student[i];
	}

	avg = sum / student;

	delete[] arr_student;

	cout << "���� ��� : " << avg << endl;

	return 0;
}
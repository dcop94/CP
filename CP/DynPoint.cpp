#include <iostream>

using namespace std;

int main()
{
	int student;
	float sum = 0;
	float avg = 0;

	cout << " 학생 수를 입력하세요 : \n";
	cin >> student;

	float* arr_student = new float[student];
	for (int i = 0; i < student; i++)
	{
		cout << i + 1 << "번 학생의 성적을 입력하세요 : \n";
		cin >> arr_student[i];
		sum = sum + arr_student[i];
	}

	avg = sum / student;

	delete[] arr_student;

	cout << "성적 평균 : " << avg << endl;

	return 0;
}
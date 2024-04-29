#include <iostream>
#include <time.h>
#include <vector>

using namespace std;

void TimeVector1(vector<int>& test_vec1);
void TimeVector2(vector<int>& test_vec2);

int main()
{
	vector<int>test_vec1(1);
	vector<int>test_vec2(1);
	// 이름이 test_vec1이고 크기가 1인 정수형 벡터를 생성
	// 이름이 test_vec2이고 크기가 1인 정수형 벡터를 생성

	clock_t start1 = clock();
	TimeVector1(test_vec1);
	clock_t end1 = clock();
	double timeplay1 = double(end1 - start1);

	clock_t start2 = clock();
	TimeVector2(test_vec2);
	clock_t end2 = clock();
	double timeplay2 = double(end2 - start2);

	cout << "test_vec1 소요시간 : " << timeplay1 << "ms" << endl;
	cout << "test_vec2 소요시간 : " << timeplay2 << "ms" << endl;

	return 0;
}

// test_vec1에 push_back()을 1억회 수행하여 1부터 1억까지
// 값을 추가하고, 소요시간을 ms 단위로 측정 후 출력
void TimeVector1(vector<int>& test_vec1)
{
	for (int i = 0; i < 100000000; i++)
	{
		test_vec1.push_back(i);
	}
}

// test_vec2에 push_back()을 1억회 수행하여 1부터 1억까지
// 값을 추가하고, 소요 시간을 ms 단위로 측정 후 출력
// reserve()로 1억개 만큼의 공간을 예약
void TimeVector2(vector<int>& test_vec2)
{
	test_vec2.reserve(100000000);
	for (int i = 0; i < 100000000; i++)
	{
		test_vec2.push_back(i);
	}
}
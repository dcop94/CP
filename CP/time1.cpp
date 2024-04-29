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
	// �̸��� test_vec1�̰� ũ�Ⱑ 1�� ������ ���͸� ����
	// �̸��� test_vec2�̰� ũ�Ⱑ 1�� ������ ���͸� ����

	clock_t start1 = clock();
	TimeVector1(test_vec1);
	clock_t end1 = clock();
	double timeplay1 = double(end1 - start1);

	clock_t start2 = clock();
	TimeVector2(test_vec2);
	clock_t end2 = clock();
	double timeplay2 = double(end2 - start2);

	cout << "test_vec1 �ҿ�ð� : " << timeplay1 << "ms" << endl;
	cout << "test_vec2 �ҿ�ð� : " << timeplay2 << "ms" << endl;

	return 0;
}

// test_vec1�� push_back()�� 1��ȸ �����Ͽ� 1���� 1�����
// ���� �߰��ϰ�, �ҿ�ð��� ms ������ ���� �� ���
void TimeVector1(vector<int>& test_vec1)
{
	for (int i = 0; i < 100000000; i++)
	{
		test_vec1.push_back(i);
	}
}

// test_vec2�� push_back()�� 1��ȸ �����Ͽ� 1���� 1�����
// ���� �߰��ϰ�, �ҿ� �ð��� ms ������ ���� �� ���
// reserve()�� 1�ﰳ ��ŭ�� ������ ����
void TimeVector2(vector<int>& test_vec2)
{
	test_vec2.reserve(100000000);
	for (int i = 0; i < 100000000; i++)
	{
		test_vec2.push_back(i);
	}
}
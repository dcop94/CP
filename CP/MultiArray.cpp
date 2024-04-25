#include <iostream>

using namespace std;

int main()
{
	// 0. 사용자 정보 로우데이터
	string Pinfo[5][4] =
	{
		{"이름", "나이", "국어", "수학"}, {"방지턱", "19", "66", "68"},
		{"정직한", "20", "73", "94"}, {"김가루", "19", "58", "37"}, {"조나단", "20", "82", "29"}

	};

	

	// 1. 입력
	string age;
	cout << "수학점수를 보고 싶은 나이를 입력해주세요 : \n";
	cin >> age;

	// 2. 입력 된 나이에 해당하는 모든 이름과 수학점수를 출력
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (Pinfo[i][1] == age)
			{
				cout << "이름 : " << Pinfo[i][0] << "\t" << "수학점수 : " << Pinfo[i][3] << endl;
				break;
			}
		}
	}

	return 0;
}
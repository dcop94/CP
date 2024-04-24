#include <iostream>
using namespace std;
void main()
{
	string city[] = { "Korea", "Japan", "China", "USA", "Canada" };
	string nation;
	int citySize = sizeof(city) / sizeof(city[0]);
	cout << " 나라이름을 입력하세요 (EN) (list를 입력 시 나라목록이 나옵니다) : \n";
	cin >> nation;


	
		if (nation == "list")
		{
			for (string nation : city)
			{
				cout << nation << endl;
			}

		} // list를 입력 했을 시
		else
		{
			bool input = false; // 입력 값이 거짓이라면 for문 실행 안함 아래 if 문 실행
			for (int i = 0; i < citySize; i++)
			{
				if (nation == city[i])
				{
					cout << "index : " << i << endl << "city : " << city[i] << endl;
					input = true;
					break;
				}

			}

			if (!input) // 입력 값이 거짓 일 때 실행
			{
				cout << "다시 입력해주세요 : \n";
				cin >> nation; // 나라이름 다시 입력 받음

				for (int i = 0; i < citySize; i++)
				{
					if (nation == city[i])
					{
						cout << "index : " << i << endl << "city : " << city[i] << endl;
						input = true;
						break;
					}
				}

				if (!input) // 입력 값이 거짓 일때 실행
				{
					cout << "입력한 나라는 목록에 없습니다\n";
				}
			}
		}

}
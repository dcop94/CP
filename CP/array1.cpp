#include <iostream>
using namespace std;
void main()
{
	string city[] = { "Korea", "Japan", "China", "USA", "Canada" };
	string nation;
	int citySize = sizeof(city) / sizeof(city[0]);
	cout << " �����̸��� �Է��ϼ��� (EN) (list�� �Է� �� �������� ���ɴϴ�) : \n";
	cin >> nation;


	
		if (nation == "list")
		{
			for (string nation : city)
			{
				cout << nation << endl;
			}

		} // list�� �Է� ���� ��
		else
		{
			bool input = false; // �Է� ���� �����̶�� for�� ���� ���� �Ʒ� if �� ����
			for (int i = 0; i < citySize; i++)
			{
				if (nation == city[i])
				{
					cout << "index : " << i << endl << "city : " << city[i] << endl;
					input = true;
					break;
				}

			}

			if (!input) // �Է� ���� ���� �� �� ����
			{
				cout << "�ٽ� �Է����ּ��� : \n";
				cin >> nation; // �����̸� �ٽ� �Է� ����

				for (int i = 0; i < citySize; i++)
				{
					if (nation == city[i])
					{
						cout << "index : " << i << endl << "city : " << city[i] << endl;
						input = true;
						break;
					}
				}

				if (!input) // �Է� ���� ���� �϶� ����
				{
					cout << "�Է��� ����� ��Ͽ� �����ϴ�\n";
				}
			}
		}

}
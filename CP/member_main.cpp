#include "member.h"
#include <iostream>
#include <fstream>

using namespace std;

void show_menu()
{
	cout << "---------------------------" << endl;
	cout << "     1. ȸ������ �Է�      " << endl;
	cout << "     2. ȸ������ ���      " << endl;
	cout << "     3. ��   ��    ��      " << endl;
	cout << "     4. ȸ������ ����      " << endl;
	cout << "     5. ���α׷� ����      " << endl;
	cout << "---------------------------" << endl;
}

int main()
{
	vector<Member> members;
	vector<Member> tel_members;

	while (true)
	{
		show_menu();
		cout << "�޴��� �����ϼ��� : ";
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			members = Member_info();
			Write_member_file(members);
			break;

		case 2:
			Read_member_file();
			break;

		case 3:
		{
			string name, password;
			cout << " �̸� : ";
			cin >> name;
			cout << " ��й�ȣ : ";
			cin >> password;

			if (login_member(name, password, members))
			{
				bool existing_member = false;
				for (auto& tel_member : tel_members)
				{
					if (tel_member.name == name)
					{
						existing_member = true;
						break;
					}
				}
				string tel;
				cout << " ��ȭ��ȣ : ";
				cin >> tel;

				if (!existing_member)
				{
					tel_members.push_back({ name, "", tel });
				}
				else
				{
					for (auto& tel_member : tel_members)
					{
						if (tel_member.name == name)
						{
							tel_member.tel = tel;
							break;
						}
					}
				}
				Write_member_tel_file(name, tel);
				cout << " ��ȭ��ȣ�� ���� �Ǿ����ϴ� " << endl;
				cout << " �̸� : " << name << " ��ȭ��ȣ : " << tel << endl;

			}
		}
		break;
		case 4:
		{
			string name, password;
			cout << " �̸� : ";
			cin >> name;
			cout << " ��й�ȣ : ";
			cin >> password;

			if (login_member(name, password, members))
			{
				string new_name, new_password, new_tel;
				cout << " ���� �� �̸� : ";
				cin >> new_name;
				cout << " ���� �� ��й�ȣ : ";
				cin >> new_password;
				cout << " ���� �� ��ȭ��ȣ : ";
				cin >> new_tel;

				for (auto& member : members)
				{
					if (member.name == name)
					{
						member.name = new_name;
						member.password = new_password;
						break;
					}
				}


				Write_member_file(members);
				Write_member_tel_file(new_name, new_tel);
				cout << " ȸ�������� �����Ǿ����ϴ�. " << endl;
				cout << " �̸� : " << new_name << " ��й�ȣ : " << new_password << " ��ȭ��ȣ : " << new_tel << endl;
			}
		}
		break;

		case 5:
			cout << " ���α׷��� ���� �մϴ� " << endl;
			return 0;

		}
	}

	return 0;
}

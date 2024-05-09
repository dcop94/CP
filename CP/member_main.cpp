#include "member.h"
#include <iostream>
#include <fstream>

using namespace std;

void show_menu()
{
	cout << "---------------------------" << endl;
	cout << "     1. 회원정보 입력      " << endl;
	cout << "     2. 회원정보 명단      " << endl;
	cout << "     3. 로   그    인      " << endl;
	cout << "     4. 회원정보 수정      " << endl;
	cout << "     5. 프로그램 종료      " << endl;
	cout << "---------------------------" << endl;
}

int main()
{
	vector<Member> members;
	vector<Member> tel_members;

	while (true)
	{
		show_menu();
		cout << "메뉴를 선택하세요 : ";
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
			cout << " 이름 : ";
			cin >> name;
			cout << " 비밀번호 : ";
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
				cout << " 전화번호 : ";
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
				cout << " 전화번호가 저장 되었습니다 " << endl;
				cout << " 이름 : " << name << " 전화번호 : " << tel << endl;

			}
		}
		break;
		case 4:
		{
			string name, password;
			cout << " 이름 : ";
			cin >> name;
			cout << " 비밀번호 : ";
			cin >> password;

			if (login_member(name, password, members))
			{
				string new_name, new_password, new_tel;
				cout << " 수정 할 이름 : ";
				cin >> new_name;
				cout << " 수정 할 비밀번호 : ";
				cin >> new_password;
				cout << " 수정 할 전화번호 : ";
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
				cout << " 회원정보가 수정되었습니다. " << endl;
				cout << " 이름 : " << new_name << " 비밀번호 : " << new_password << " 전화번호 : " << new_tel << endl;
			}
		}
		break;

		case 5:
			cout << " 프로그램을 종료 합니다 " << endl;
			return 0;

		}
	}

	return 0;
}

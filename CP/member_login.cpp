#include "member.h"
#include <iostream>

using namespace std;

bool login_member(const string& name, const string& password, const vector < Member>& members)
{
	for (const auto& member : members)
	{
		if (member.name == name && member.password == password)
		{
			cout << " 로그인 되었습니다. " << endl;

			string tel;
			cout << " 전화번호 입력 : ";
			cin >> tel;

			Write_member_tel_file(name, tel);

			return true;
		}
	}

	cout << "\n" << " 잘못 입력하셨습니다. 다시 입력하세요 " << endl;
	return false;
}
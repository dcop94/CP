#include "member.h"
#include <iostream>

using namespace std;

int main()
{
	vector<Member> members = Member_info();
	Write_member_file(members);
	Read_member_file();

	string name, password;
	cout << "\n" << " 로그인하려면 정보를 입력하세요 " << endl << endl;
	cout << " 이름 입력 : ";
	getline(cin, name);
	cout << " 비밀번호 입력 : ";
	getline(cin, password);

	while (!login_member(name, password, members))
	{
		cout << " 이름 입력 : ";
		getline(cin, name);
		cout << " 비밀번호 입력 : ";
		getline(cin, password);
	}

	return 0;
}

#include "member.h"
#include <iostream>

using namespace std;

int main()
{
	vector<Member> members = Member_info();
	Write_member_file(members);
	Read_member_file();

	string name, password;
	cout << "\n" << " �α����Ϸ��� ������ �Է��ϼ��� " << endl << endl;
	cout << " �̸� �Է� : ";
	getline(cin, name);
	cout << " ��й�ȣ �Է� : ";
	getline(cin, password);

	while (!login_member(name, password, members))
	{
		cout << " �̸� �Է� : ";
		getline(cin, name);
		cout << " ��й�ȣ �Է� : ";
		getline(cin, password);
	}

	return 0;
}

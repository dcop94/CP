#include "member.h"
#include <iostream>

using namespace std;

bool login_member(const string& name, const string& password, const vector < Member>& members)
{
	for (const auto& member : members)
	{
		if (member.name == name && member.password == password)
		{
			cout << " �α��� �Ǿ����ϴ�. " << endl;

			string tel;
			cout << " ��ȭ��ȣ �Է� : ";
			cin >> tel;

			Write_member_tel_file(name, tel);

			return true;
		}
	}

	cout << "\n" << " �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ��� " << endl;
	return false;
}
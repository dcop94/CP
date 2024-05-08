#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Member
{
	string name;
	string password;
};



vector<Member> Member_info()
{
	vector<Member> members;
	string name, password;

	cout << " ȸ���� �̸��� ��й�ȣ�� �Է��ϼ���. " << endl;
	cout << " �Է��� �׸��ϰ� �����ø� �̸� : ���� '������' �� �Է��ϼ��� " << endl;

	while (true)
	{
		cout << " �̸� : ";
		getline(cin, name);

		if (name == "������")
			break;

		cout << " ��й�ȣ �Է� : ";
		getline(cin, password);

		members.push_back({ name, password });
	}

	return members;

}


void Write_member_file(const vector<Member>& members)
{
	ofstream member_file("member.txt");
	for (int i = 0; i < members.size(); i++)
	{
		member_file << "\n" << " "  << i + 1 << " �� ȸ�� ���� " << endl;
		member_file << "\n" << " �̸� : " << members[i].name << endl;
		member_file << " ��й�ȣ : " << members[i].password << endl;
	}

	cout << " �� ȸ�� ������ ���Ͽ� ���� �Ǿ����ϴ�. " << endl;
}

void Read_member_file()
{
	cout << " ------------ ȸ�� ��� ------------ " << endl;
	ifstream member_infile("member.txt");
	string line;
	while (getline(member_infile, line))
	{
		cout << line << endl;
	}

	member_infile.close();
}

bool login_member(const string& name, const string& password, const vector < Member>& members)
{
	for (const auto& member : members)
	{
		if (member.name == name && member.password == password)
		{
			cout << " �α��� �Ǿ����ϴ�. " << endl;
			return true;
		}
	}

	cout << "\n" << " �߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ��� " << endl;
	return false;
}
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

// ����ڿ��� ȸ���� ���� �̸�, ��й�ȣ�� �ѹ��� �Է� �ޱ�
// ����ڷκ��� �Է� �� ������ member.txt�� ���
// member.txt�� ����� ȸ����� ���
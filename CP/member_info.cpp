#include "member.h"
#include <iostream>
#include <fstream>

using namespace std;

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
		member_file << "\n" << " " << i + 1 << " �� ȸ�� ���� " << endl;
		member_file << "\n" << " �̸� : " << members[i].name << endl;
		member_file << " ��й�ȣ : " << members[i].password << endl;
	}

	cout << " �� ȸ�� ������ ���Ͽ� ���� �Ǿ����ϴ�. " << endl;
}

void Write_member_tel_file(const string& name, const string& tel)
{
	ofstream member_tel_file("member_tel.txt");
	member_tel_file << " �̸� : " << name << " ��ȭ��ȣ : " << tel << endl;
	member_tel_file.close();
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
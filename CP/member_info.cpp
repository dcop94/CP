#include "member.h"
#include <iostream>
#include <fstream>

using namespace std;

vector<Member> Member_info()
{
	vector<Member> members;
	string name, password;

	cout << " 회원의 이름과 비밀번호를 입력하세요. " << endl;
	cout << " 입력을 그만하고 싶으시면 이름 : 에서 '나가기' 를 입력하세요 " << endl;

	while (true)
	{
		cout << " 이름 : ";
		getline(cin, name);

		if (name == "나가기")
			break;

		cout << " 비밀번호 : ";
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
		member_file << "\n" << " " << i + 1 << " 번 회원 정보 " << endl;
		member_file << "\n" << " 이름 : " << members[i].name << endl;
		member_file << " 비밀번호 : " << members[i].password << endl;
	}

	cout << " 위 회원 정보가 파일에 저장 되었습니다. " << endl;
}


void Read_member_file()
{
	cout << " ------------ 회원 명단 ------------ " << endl;
	ifstream member_infile("member.txt");
	string line;
	while (getline(member_infile, line))
	{
		cout << line << endl;
	}

	member_infile.close();
}
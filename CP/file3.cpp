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

	cout << " 회원의 이름과 비밀번호를 입력하세요. " << endl;
	cout << " 입력을 그만하고 싶으시면 이름 : 에서 '나가기' 를 입력하세요 " << endl;

	while (true)
	{
		cout << " 이름 : ";
		getline(cin, name);

		if (name == "나가기")
			break;

		cout << " 비밀번호 입력 : ";
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
		member_file << "\n" << " "  << i + 1 << " 번 회원 정보 " << endl;
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

bool login_member(const string& name, const string& password, const vector < Member>& members)
{
	for (const auto& member : members)
	{
		if (member.name == name && member.password == password)
		{
			cout << " 로그인 되었습니다. " << endl;
			return true;
		}
	}

	cout << "\n" << " 잘못 입력하셨습니다. 다시 입력하세요 " << endl;
	return false;
}
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

// 사용자에게 회원에 대한 이름, 비밀번호를 한번에 입력 받기
// 사용자로부터 입력 된 정보를 member.txt에 기록
// member.txt에 저장된 회원명부 출력
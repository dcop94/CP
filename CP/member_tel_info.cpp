#include "member.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

vector<Member> Load_member_tel_file()
{
	vector<Member> members;
	ifstream member_tel_file("member_tel.txt");
	if (member_tel_file.is_open())
	{
		string line;
		while (getline(member_tel_file, line))
		{
			stringstream ss(line);
			string name, tel;
			string temp;
			ss >> temp >> name >> temp >> tel;
			members.push_back({ name, "", tel });
		}
		member_tel_file.close();
	}

	return members;
}

void Write_member_tel_file(const string &name, const string &tel)
{

	ofstream member_tel_file("member_tel.txt", ios::app);
	
	member_tel_file << " 이름 : " << name << " 전화번호 : " << tel << endl;

	member_tel_file.close();
}
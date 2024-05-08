#pragma once

#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>

using namespace std;

struct Member
{
	string name;
	string password;
	string tel;
};

vector<Member> Member_info();
void Write_member_file(const vector<Member>& members);
void Read_member_file();
bool login_member(const string& name, const string& password, const vector < Member>& members);
void Write_member_tel_file(const string& name, const string& tel);

#endif

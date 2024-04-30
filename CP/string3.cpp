#include <iostream>
#include <string>

using namespace std;

string S_letter(string s);

int main()
{
	string s = "Codingon";
	
	// 1. 첫번째 문자 소문자로 변경 "codingon"
	
	cout << "첫번째 문자 소문자로 변경 : " << S_letter(s) << endl;

	// 2. "ding"이라는 부분 문자열 반환

	cout << " ding 부분 문자열 반환 : " << s.substr(2, 4) << endl;

	// 3. "coooooon" 이 되도록 변경

	cout << " coooooon으로 변경 : " << s.replace(2, 4, "oooo") << endl;


	// 4. "con" 이 되도록 변경

	s.erase(2, 5);
	cout << " con으로 변경 : " << s << endl;
}

string S_letter(string s)
{
	if (s.length() == 0)
	{
		return "-1";
	}
	
	s[0] = tolower(s[0]);

	return s;

}



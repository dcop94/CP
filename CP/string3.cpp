#include <iostream>
#include <string>

using namespace std;

string S_letter(string s);

int main()
{
	string s = "Codingon";
	
	// 1. ù��° ���� �ҹ��ڷ� ���� "codingon"
	
	cout << "ù��° ���� �ҹ��ڷ� ���� : " << S_letter(s) << endl;

	// 2. "ding"�̶�� �κ� ���ڿ� ��ȯ

	cout << " ding �κ� ���ڿ� ��ȯ : " << s.substr(2, 4) << endl;

	// 3. "coooooon" �� �ǵ��� ����

	cout << " coooooon���� ���� : " << s.replace(2, 4, "oooo") << endl;


	// 4. "con" �� �ǵ��� ����

	s.erase(2, 5);
	cout << " con���� ���� : " << s << endl;
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



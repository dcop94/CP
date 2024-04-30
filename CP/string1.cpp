#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38 - year - old man and 55 - year - old woman were working near the affected area, the 32nd Great Wall.";

	cout << s.length() << endl;
	// s 문자열의 길이 출력

	cout << s.at(99) << endl;
	// 100번째 문자 출력(index는 0부터 시작)
	
	cout << s.find("two") << endl;
	//"two"라는 문자가 처음 나오는 index 출력

	cout << s.find("two", s.find("two"+1)) << endl;
	//"two"라는 문자가 두번째 나오는 index 출력


}


#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38 - year - old man and 55 - year - old woman were working near the affected area, the 32nd Great Wall.";

	cout << s.length() << endl;
	// s ���ڿ��� ���� ���

	cout << s.at(99) << endl;
	// 100��° ���� ���(index�� 0���� ����)
	
	cout << s.find("two") << endl;
	//"two"��� ���ڰ� ó�� ������ index ���

	cout << s.find("two", s.find("two"+1)) << endl;
	//"two"��� ���ڰ� �ι�° ������ index ���


}


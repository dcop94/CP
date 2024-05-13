#include <iostream>
#include <string>

using namespace std;

class Character
{
	string name;
	int level;
	int item_num;

public:
	Character () : name(""), level(0), item_num(0) {}


	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return name;
	}

	void Input_character()
	{
		string name;
		cout << " 캐릭터 이름을 입력하세요 : ";
		cin >> name;
		setName(name);
	}

	void setLevel(int level)
	{
		this->level = level;
	}

	int getLevel()
	{
		return level;
	}
	
	void setItem_num(int item_num)
	{
		this->item_num = item_num;
	}

	int getItem_num()
	{
		return item_num;
	}


	void Info_character()
	{
		cout << "--------- 캐릭터 정보 ---------" << endl;
		cout << " 이름 : " << getName() << endl;
		cout << " 레벨 : " << getLevel() << endl;
		cout << " 아이템 수 : " << getItem_num() << endl;
		cout << "-------------------------------" << endl;
	}


	void Menu_choice()
	{
		int choice;

		do
		{
			cout << "------------------------------" << endl;
			cout << "   게임 메뉴를 선택해주세요   " << endl;
			cout << "------------------------------" << endl;
			cout << "        1. 캐릭터 정보        " << endl;
			cout << "        2.  레 벨 업          " << endl;
			cout << "        3. 아이템 사기        " << endl;
			cout << "        4. 아이템 팔기        " << endl;
			cout << "        0. 게 임 종 료        " << endl;
			cout << "------------------------------" << endl;
			cout << " 어떤것을 하실건가요? : ";
			cin >> choice;

			switch (choice)
			{
			case 0:
				cout << " 게임을 종료합니다 " << endl;
				break;

			case 1:
				Info_character();
				break;
			case 2:
				level_up();
				break;
			case 3:
				buy_item();
				break;
			case 4:
				sell_item();
				break;
			default:
				cout << " 다시 입력하세요 " << endl;
			}
			
		} while (choice != 0);
	}

private:

	void level_up()
	{
		setLevel(getLevel() + 1);
		cout << " 레벨이 오르셨습니다 !" << endl;
	}

	void buy_item()
	{
		setItem_num(getItem_num() + 1);
		cout << " 아이템을 구입했습니다 " << endl;
	}

	void sell_item()
	{
		setItem_num(getItem_num() - 1);
		cout << " 아이템을 팔았습니다 " << endl;
	}

};

int main()
{
	Character playCharacter;
	playCharacter.Input_character();
	playCharacter.Menu_choice();

	return 0;
}
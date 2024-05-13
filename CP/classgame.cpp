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
		cout << " ĳ���� �̸��� �Է��ϼ��� : ";
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
		cout << "--------- ĳ���� ���� ---------" << endl;
		cout << " �̸� : " << getName() << endl;
		cout << " ���� : " << getLevel() << endl;
		cout << " ������ �� : " << getItem_num() << endl;
		cout << "-------------------------------" << endl;
	}


	void Menu_choice()
	{
		int choice;

		do
		{
			cout << "------------------------------" << endl;
			cout << "   ���� �޴��� �������ּ���   " << endl;
			cout << "------------------------------" << endl;
			cout << "        1. ĳ���� ����        " << endl;
			cout << "        2.  �� �� ��          " << endl;
			cout << "        3. ������ ���        " << endl;
			cout << "        4. ������ �ȱ�        " << endl;
			cout << "        0. �� �� �� ��        " << endl;
			cout << "------------------------------" << endl;
			cout << " ����� �Ͻǰǰ���? : ";
			cin >> choice;

			switch (choice)
			{
			case 0:
				cout << " ������ �����մϴ� " << endl;
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
				cout << " �ٽ� �Է��ϼ��� " << endl;
			}
			
		} while (choice != 0);
	}

private:

	void level_up()
	{
		setLevel(getLevel() + 1);
		cout << " ������ �����̽��ϴ� !" << endl;
	}

	void buy_item()
	{
		setItem_num(getItem_num() + 1);
		cout << " �������� �����߽��ϴ� " << endl;
	}

	void sell_item()
	{
		setItem_num(getItem_num() - 1);
		cout << " �������� �Ⱦҽ��ϴ� " << endl;
	}

};

int main()
{
	Character playCharacter;
	playCharacter.Input_character();
	playCharacter.Menu_choice();

	return 0;
}
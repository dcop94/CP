#include <iostream>
#include <list>

using namespace std;

int main()
{
	// �ǽ� 1~2�� 4�� ����� ���
	/*list<int>my_list = { 5,4,3,4,2,1,1 };
	list<int>::iterator iter = my_list.begin();

	int count = 0;

	for (iter = my_list.begin(); iter != my_list.end(); iter++)
	{
		if (*iter == 4)
		{
			count++;
		}
	}

	cout << "4�� ������ : " << count << "�� �Դϴ�.\n";

	return 0;*/

	// �ǽ� 3��
	// {1,1,2,3,4,4,5} �� �������� ����Ʈ ���� �� ���
	//list<int>my_list = { 5,4,3,4,2,1,1 };
	//list<int>::iterator iter = my_list.begin();

	//my_list.sort();

	//for (iter = my_list.begin(); iter != my_list.end(); iter++)
	//{
	//	cout << *iter << " ";
	//}
	//
	//return 0;

	// �ǽ� 4��
	// {1,2,3,4,5}�� �������� ����Ʈ ���� �� ���
	//list<int>my_list = { 5,4,3,4,2,1,1 };
	//list<int> ::iterator iter = my_list.begin();
	//
	//my_list.sort();
	//my_list.unique();

	//for (iter = my_list.begin(); iter != my_list.end(); iter++)
	//{
	//	cout << *iter << " ";
	//}

	//return 0;

	// �ǽ� 5��
	// {1,2,3,4,5,6,7}�� �������� ����Ʈ ���� �� ���
	//list<int>my_list = { 4,2,1,4 };
	//list<int>myt_list2 = { 5,7,6 };
	//list<int>::iterator iter = my_list.begin();

	//my_list.splice(my_list.end(), myt_list2);
	//my_list.sort();

	//for (iter = my_list.begin(); iter != my_list.end(); iter++)
	//{
	//	cout << *iter << " ";
	//}

	//return 0;
	// 
	//// �ǽ� 6��
	//// {0,1,2,3,4,5,6,7}�� �������� ����Ʈ ���� �� ���
	//list<int>my_list = { 1,4,5,6 };
	//list<int>my_list2 = { 0,2,3,7 };
	//list<int>::iterator iter = my_list.begin();
	//
	//my_list.merge(my_list2);

	//for (iter = my_list.begin(); iter != my_list.end(); iter++)
	//{
	//	cout << *iter << " ";
	//}

	//return 0;
}	
#include <iostream>
#include <list>

using namespace std;

int main()
{
	// 실습 1~2번 4가 몇개인지 출력
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

	cout << "4의 개수는 : " << count << "개 입니다.\n";

	return 0;*/

	// 실습 3번
	// {1,1,2,3,4,4,5} 가 나오도록 리스트 변경 후 출력
	//list<int>my_list = { 5,4,3,4,2,1,1 };
	//list<int>::iterator iter = my_list.begin();

	//my_list.sort();

	//for (iter = my_list.begin(); iter != my_list.end(); iter++)
	//{
	//	cout << *iter << " ";
	//}
	//
	//return 0;

	// 실습 4번
	// {1,2,3,4,5}가 나오도록 리스트 변경 후 출력
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

	// 실습 5번
	// {1,2,3,4,5,6,7}이 나오도록 리스트 변경 후 출력
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
	//// 실습 6번
	//// {0,1,2,3,4,5,6,7}이 나오도록 리스트 변경 후 출력
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
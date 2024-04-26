#include <iostream>


using namespace std;

// 자연수 x, y를 입력 받기
int main()
{

	int x, y;
	cout << " (주의) x와 y에 자연수를 입력해주세요, 0이나 음수를 입력하면 다시 입력해야 합니다 \n";
	cout << "  x를 입력하세요 : \n";
	cin >> x;
	cout << " y를 입력하세요 : \n";
	cin >> y;


	
// 0이나 음수를 입력하면 에러메세지 출력 후 다시 입력받기
	while (x <= 0 || y <= 0)
	{
		cout << "오류입니다. x와 y는 자연수여야 합니다. 다시 입력해주세요.\n";
		cout << "x를 입력하세요 : \n";
		cin >> x;
		cout << "y를 입력하세요 : \n";
		cin >> y;
	}

// x*y의 크기를 갖는 2차원 동적배열 선언
	int** arr2 = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arr2[i] = new int[y];
	}

// [0][0] ~ [x][y]까지 순서대로 1부터 x*y 저장
	int num = 1;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr2[i][j] = num++;
// 저장된 값 출력
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}



// 동적 배열 해제
	for (int i = 0; i < x; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;

	return 0;
}







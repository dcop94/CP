#include <iostream>


using namespace std;

// �ڿ��� x, y�� �Է� �ޱ�
int main()
{

	int x, y;
	cout << " (����) x�� y�� �ڿ����� �Է����ּ���, 0�̳� ������ �Է��ϸ� �ٽ� �Է��ؾ� �մϴ� \n";
	cout << "  x�� �Է��ϼ��� : \n";
	cin >> x;
	cout << " y�� �Է��ϼ��� : \n";
	cin >> y;


	
// 0�̳� ������ �Է��ϸ� �����޼��� ��� �� �ٽ� �Է¹ޱ�
	while (x <= 0 || y <= 0)
	{
		cout << "�����Դϴ�. x�� y�� �ڿ������� �մϴ�. �ٽ� �Է����ּ���.\n";
		cout << "x�� �Է��ϼ��� : \n";
		cin >> x;
		cout << "y�� �Է��ϼ��� : \n";
		cin >> y;
	}

// x*y�� ũ�⸦ ���� 2���� �����迭 ����
	int** arr2 = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arr2[i] = new int[y];
	}

// [0][0] ~ [x][y]���� ������� 1���� x*y ����
	int num = 1;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr2[i][j] = num++;
// ����� �� ���
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}



// ���� �迭 ����
	for (int i = 0; i < x; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;

	return 0;
}







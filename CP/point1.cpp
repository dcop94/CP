#include <iostream>

using namespace std;

/* void i_reverse(int* arr, int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

int main()
{
	int arr[] = { 5, 8, 9, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);

	i_reverse(arr, size);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}

}*/

#define SIZE 4

void i2_reverse(int* arr, int size);

int main()
{
	int num[] = { 5, 8, 9, 10 };
	int* arr;
	arr = num;

	i2_reverse(arr, SIZE);
	
	return 0;
}

void i2_reverse(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + size - 1 - i);
	}
}
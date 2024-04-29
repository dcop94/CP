#include <iostream>

using namespace std;

// Function prototypes
void MultiArray(int** arr, int size);
void InputGraph(int** arr, int size);

int main()
{
    int size;
    cout << "행과 열의 수를 입력 하세요 : ";
    cin >> size;

    // Dynamically allocate memory for the 2D array
    int** arr = new int* [size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    // Input values into the array
    InputGraph(arr, size);

    // Calculate row and column sums
    MultiArray(arr, size);

    // Deallocate memory
    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

// Function to input elements into the 2D array
void InputGraph(int** arr, int size)
{
    cout << "행열 원소를 입력하세요 : ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }
}

// Function to calculate row and column sums
void MultiArray(int** arr, int size)
{
    int** rowsum[size] = new int *[size];
    int** colsum[size] = new int *[size];

    // Calculate row and column sums
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rowsum[i] += arr[i][j];
            colsum[j] += arr[i][j];
        }
    }

    // Print row sums
    cout << " 각 행의 합 : " << endl;
    for (int i = 0; i < size; i++) {
        cout << " 행 " << i + 1 << " : " << rowsum[i] << endl;
    }

    // Print column sums
    cout << " 각 열의 합 : " << endl;
    for (int j = 0; j < size; j++) {
        cout << " 열 " << j + 1 << " : " << colsum[j] << endl;
    }
}
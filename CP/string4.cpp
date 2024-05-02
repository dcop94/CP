#include <iostream>
#include < string>
#include <Windows.h>

using namespace std;
string notice = "  < 학생 정보 입력 프로그램 사용법 >  \n"
" * 작성 할 학생 수를 입력 후, 학생 정보를 입력 할 수 있습니다 . \n"
" * 학생정보 입력은 예시 ) 홍길동 19 0102 의 형식으로 작성하면 됩니다. \n"
" * 정보 입력이 끝나면 수정 혹은 프로그램을 종료 할 수 있습니다. \n";


string** Create_Student_Matrix(int stu_num);
void Input_Student_Info(string** matrix, int stu_num);
void Output_Student_Info(string **matrix, int stu_num);
float Avg_Student_Age(string** matrix, int stu_num);
void Early_Birth_Student(string** matrix, int stu_num);
void Modify_Student_Info(string** matrix, int stu_num);

int main()
{
    cout << notice << endl;
    int stu_num;
    
    do
    {
        cout << " 작성 할 학생 수를 입력하세요 : ";
        cin >> stu_num; // 학생 수 입력 받음.

        if (stu_num <= 0)
        {
            cout << " 잘못 입력 했습니다. 0이상의 수를 입력하세요. " << endl << endl;
        }
    } while (stu_num <= 0); // 학생 수 입력 오류 처리
   
    
    string** matrix = Create_Student_Matrix(stu_num);
    Input_Student_Info(matrix, stu_num);
    Output_Student_Info(matrix, stu_num);
    Avg_Student_Age(matrix, stu_num);
    Early_Birth_Student(matrix, stu_num);
    Modify_Student_Info(matrix, stu_num);



    for (int i = 0; i < stu_num; i++)
    {
        delete[]  matrix[i];
    }
    delete[] matrix;

    return 0;

}


string **Create_Student_Matrix(int stu_num) // 입력 받은 학생 수에 맞게 2차원 동적 배열 표를 작성, (이름, 나이, 생일) 카테고리 생성.
{
   string **matrix = new string *[stu_num];

    for (int i = 0; i < stu_num; i++)
    {
        matrix[i] = new string[3];
    }

    matrix[0][0] = "이름";
    matrix[0][1] = "나이";
    matrix[0][2] = "생일";

    return matrix;
}

void Input_Student_Info(string **matrix, int stu_num) // 카테고리 순서(이름, 나이, 생일)에 맞게 학생 정보 입력.
{

    cout << " 학생정보 입력 예시 ( 홍길동, 19, 0101 )" << endl;
    
    for (int i = 0; i < stu_num; i++)
    {
        cout <<  i << "  번 학생 정보를 입력 해주세요 (이름, 나이, 생일) : " << endl;
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];
    }
}

void Output_Student_Info(string **matrix, int stu_num) // 입력 받은 학생 정보 출력.
{
    cout << " ---------------------------- " << endl;
    cout << " 작성하신 학생 정보 입니다. " << endl;
    for (int i = 0; i < stu_num; i++)
    {
        cout << " " << matrix[i][0] << " | " << matrix[i][1] << " | " << matrix[i][2] << endl;
    }
   

    cout << " ---------------------------- " << endl;
}

float Avg_Student_Age(string** matrix, int stu_num) // 입력 받은 학생의 나이를 평균계산하여 평균 나이 출력.
{
    float sum_age = 0;
    float avg_age;

    for (int i = 1; i < stu_num; i++)
    {
        sum_age += stoi(matrix[i][1]);
    }

    avg_age = sum_age / stu_num;
    cout << "학생의 평균 나이는 : " << avg_age << " 살 입니다." << endl << endl;
    return avg_age;
}

void Early_Birth_Student(string** matrix, int stu_num) // 입력 받은 학생의 생일 중 가장 빠른 생일 출력.
{
    string last_birth = "1231";
    int early_birth_index = -1;
    
    for (int i = 0; i < stu_num; i++)
    {
        if (matrix[i][2] < last_birth)
        {
            last_birth = matrix[i][2];
            early_birth_index = i;
            
        }
    }

    cout << "가장 생일이 빠른 학생의 이름과 생일은 : " << matrix[early_birth_index][0] << " / " << matrix[early_birth_index][2] << " 입니다. " << endl << endl;
}

void Modify_Student_Info(string** matrix, int stu_num) // 학생정보 수정 및 프로그램 종료 이벤트, 입력을 잘못했을 시 오류처리로도 사용
{
    char choice;
    do
    {
        cout << " " << endl;
        cout << " 어떤 것을 하고 싶으신가요 ? \n ( y : 학생 정보 수정 / n : 프로그램 종료 ) " << endl;
        cin >> choice;


        if (choice == 'y')
        {
            int stu_index;
            cout << " 수정 할 학생의 번호를 입력해주세요 :  ";
            cin >> stu_index;

            if (stu_index >= 1 && stu_index < stu_num)
            {
                cout << " 수정 할 학생의 현재 정보 입니다 \n" << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl << endl;

                cout << " 수정 할 학생 정보를 입력 해주세요 (이름, 나이, 생일) : " << endl;
                cin >> matrix[stu_index][0] >> matrix[stu_index][1] >> matrix[stu_index][2];

                cout << " 수정 된 학생 정보 입니다. \n" << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl;

            }
            else
            {
                cout << " 학생 번호가 잘못 입력 되었습니다. 다시 입력 해주세요 : ";
            }

        }
        else if (choice == 'n')
        {
            cout << " 프로그램을 종료하겠습니다. ";
            exit(0);
        }
        else
        {
            cout << " 잘못 입력 되었습니다. 다시 입력해주세요 ( y : 학생 정보 수정 / n : 프로그램 종료 )";
        }
    } while (choice != 'y' && choice != 'n');
    
}



// 1. 사용자에게 몇 명의 학생을 입력할 것인지 묻기

// 2. 학생 수 만큼 "이름, 나이, 생일" 순서로 한번에 입력 받기

// 3-1). 학생정보출력 (입력 된 2차원 동적배열 출력)

// 3-2). 평균 나이 (학생 전체나이합 / 학생 수)

// 3-3). 가장 빠른 생일 

// 3-4). 프로그램 종료
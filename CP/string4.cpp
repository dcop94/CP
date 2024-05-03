#include <iostream>
#include < string>
#include <Windows.h>
#define Name_index 0
#define Age_index 1
#define Birth_index 2

using namespace std;
string notice = "  < 학생 정보 입력 프로그램 사용법 >  \n"
" * 작성 할 학생 수를 입력 후, 학생 정보를 입력 할 수 있습니다 . \n"
" * 학생정보 입력은 예시 ) 홍길동 19 0102 의 형식으로 작성하면 됩니다. \n"
" * 사용자 메뉴의 번호를 입력하여 사용하세요 \n";


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

    char choice_func_number;

    do
    {
        cout << " " << endl;
        cout << " < 사용자 메뉴 > " << endl;
        cout << " 1. 학생 정보 출력하기 " << endl;
        cout << " 2. 학생 평균 나이 출력하기 " << endl;
        cout << " 3. 생일이 가장 빠른 학생 출력하기 " << endl;
        cout << " 4. 학생 정보 수정하기 " << endl;
        cout << " 5. 프로그램 종료하기 " << endl;
        cout << " 사용하실 번호를 입력해주세요 ( 1 ~ 5 ) : " << " ";

        cin >> choice_func_number;

        switch (choice_func_number)
        {
        case '1':
            Output_Student_Info(matrix, stu_num);
            break;

        case '2':
            Avg_Student_Age(matrix, stu_num);
            break;

        case '3':
            Early_Birth_Student(matrix, stu_num);
            break;

        case '4':
            Modify_Student_Info(matrix, stu_num);
            break;

        case '5':
            cout << " 프로그램을 종료 합니다. " << endl;
            return 0;
       
        default :
            cout << " 잘못 입력했습니다. 다시 입력하세요 " << endl;
        }
    } while (choice_func_number != '5');
   
 
    for (int i = 0; i < stu_num; i++)
    {
        delete[]  matrix[i];
    }
    delete[] matrix;

    return 0;

}


string **Create_Student_Matrix(int stu_num) // 입력 받은 학생 수에 맞게 2차원 동적 배열 표를 작성, (이름, 나이, 생일) 카테고리 생성.
{
   string **matrix = new string *[stu_num+1];

    for (int i = 0; i < stu_num+1; i++)
    {
        matrix[i] = new string[3];
    }

    matrix[0][Name_index] = "이 름";
    matrix[0][Age_index] = "나 이";
    matrix[0][Birth_index] = "생 일";

    return matrix;
}

void Input_Student_Info(string **matrix, int stu_num) // 카테고리 순서(이름, 나이, 생일)에 맞게 학생 정보 입력.
{

    cout << " 학생정보 입력 예시 ( 홍길동, 19, 0101 )" << endl;
    
    for (int i = 1; i < stu_num+1; i++)
    {
        cout << " " << i << " 번 학생 정보를 입력 해주세요 (이름, 나이, 생일) : " << " ";
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];
    }
}

void Output_Student_Info(string **matrix, int stu_num) // 입력 받은 학생 정보 출력.
{
    cout << " ---------------------------- " << endl;
    cout << " 작성하신 학생 정보 입니다. " << endl;
    cout << " " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << endl; // 카테고리 출력
    for (int i = 1; i < stu_num+1; i++)
    {
        cout << " " << matrix[i][0] << " | " << matrix[i][1] << " | " << matrix[i][2] << endl;
    }
    cout << " ---------------------------- " << endl;
}

float Avg_Student_Age(string** matrix, int stu_num) // 입력 받은 학생의 나이를 평균계산하여 평균 나이 출력.
{
    float sum_age = 0;
    float avg_age;

    for (int i = 1; i < stu_num+1; i++)
    {
        sum_age += stoi(matrix[i][1]);
    }

    avg_age = sum_age / stu_num;
    cout << endl << " " << "학생의 평균 나이는 : " << avg_age << " 살 입니다." << endl << endl;
    return avg_age;
}

void Early_Birth_Student(string** matrix, int stu_num) // 입력 받은 학생의 생일 중 가장 빠른 생일 출력.
{
    string last_birth = "1231";
    int early_birth_index = -1;
    
    for (int i = 1; i < stu_num+1; i++)
    {
        if (matrix[i][2] < last_birth)
        {
            last_birth = matrix[i][2];
            early_birth_index = i;
            
        }
    }

    cout << endl << " " << "가장 생일이 빠른 학생의 이름과 생일은 : " << matrix[early_birth_index][0] << " / " << matrix[early_birth_index][2] << " 입니다. " << endl << endl;
}

void Modify_Student_Info(string** matrix, int stu_num) // 학생정보 수정
{
    int stu_index;
    bool check_stu_index = false;

    do
    {
        
        cout << endl << " 수정 할 학생의 번호를 입력해주세요 :  ";
        cin >> stu_index;

        if (stu_index >= 1 && stu_index < stu_num+1)
        {
            cout << endl << " 수정 할 학생의 현재 정보 입니다 \n" << " " << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl << endl;

            cout << " 수정 할 학생 정보를 입력 해주세요 (이름, 나이, 생일) : " << " ";
            cin >> matrix[stu_index][0] >> matrix[stu_index][1] >> matrix[stu_index][2];

            cout << endl << " 수정 된 학생 정보 입니다. \n" << " " << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl;

            break;
        }
        else if ( stu_index < 1 || stu_index >= stu_num+1)
        {
            cout << " 학생 번호가 잘못 입력 되었습니다. 다시 입력 해주세요 : ";
        }
    } while (true);
}


// 1. 사용자에게 몇 명의 학생을 입력할 것인지 묻기

// 2. 학생 수 만큼 "이름, 나이, 생일" 순서로 한번에 입력 받기

// 3-1). 학생정보출력 (입력 된 2차원 동적배열 출력)

// 3-2). 평균 나이 (학생 전체나이합 / 학생 수)

// 3-3). 가장 빠른 생일 

// 3-4). 프로그램 종료
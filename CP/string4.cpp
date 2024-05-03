#include <iostream>
#include < string>
#include <Windows.h>
#define Name_index 0
#define Age_index 1
#define Birth_index 2

using namespace std;
string notice = "  < �л� ���� �Է� ���α׷� ���� >  \n"
" * �ۼ� �� �л� ���� �Է� ��, �л� ������ �Է� �� �� �ֽ��ϴ� . \n"
" * �л����� �Է��� ���� ) ȫ�浿 19 0102 �� �������� �ۼ��ϸ� �˴ϴ�. \n"
" * ����� �޴��� ��ȣ�� �Է��Ͽ� ����ϼ��� \n";


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
        cout << " �ۼ� �� �л� ���� �Է��ϼ��� : ";
        cin >> stu_num; // �л� �� �Է� ����.

        if (stu_num <= 0)
        {
            cout << " �߸� �Է� �߽��ϴ�. 0�̻��� ���� �Է��ϼ���. " << endl << endl;
        }
    } while (stu_num <= 0); // �л� �� �Է� ���� ó��
   
    
    string** matrix = Create_Student_Matrix(stu_num);
    Input_Student_Info(matrix, stu_num);

    char choice_func_number;

    do
    {
        cout << " " << endl;
        cout << " < ����� �޴� > " << endl;
        cout << " 1. �л� ���� ����ϱ� " << endl;
        cout << " 2. �л� ��� ���� ����ϱ� " << endl;
        cout << " 3. ������ ���� ���� �л� ����ϱ� " << endl;
        cout << " 4. �л� ���� �����ϱ� " << endl;
        cout << " 5. ���α׷� �����ϱ� " << endl;
        cout << " ����Ͻ� ��ȣ�� �Է����ּ��� ( 1 ~ 5 ) : " << " ";

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
            cout << " ���α׷��� ���� �մϴ�. " << endl;
            return 0;
       
        default :
            cout << " �߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ��� " << endl;
        }
    } while (choice_func_number != '5');
   
 
    for (int i = 0; i < stu_num; i++)
    {
        delete[]  matrix[i];
    }
    delete[] matrix;

    return 0;

}


string **Create_Student_Matrix(int stu_num) // �Է� ���� �л� ���� �°� 2���� ���� �迭 ǥ�� �ۼ�, (�̸�, ����, ����) ī�װ� ����.
{
   string **matrix = new string *[stu_num+1];

    for (int i = 0; i < stu_num+1; i++)
    {
        matrix[i] = new string[3];
    }

    matrix[0][Name_index] = "�� ��";
    matrix[0][Age_index] = "�� ��";
    matrix[0][Birth_index] = "�� ��";

    return matrix;
}

void Input_Student_Info(string **matrix, int stu_num) // ī�װ� ����(�̸�, ����, ����)�� �°� �л� ���� �Է�.
{

    cout << " �л����� �Է� ���� ( ȫ�浿, 19, 0101 )" << endl;
    
    for (int i = 1; i < stu_num+1; i++)
    {
        cout << " " << i << " �� �л� ������ �Է� ���ּ��� (�̸�, ����, ����) : " << " ";
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];
    }
}

void Output_Student_Info(string **matrix, int stu_num) // �Է� ���� �л� ���� ���.
{
    cout << " ---------------------------- " << endl;
    cout << " �ۼ��Ͻ� �л� ���� �Դϴ�. " << endl;
    cout << " " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << endl; // ī�װ� ���
    for (int i = 1; i < stu_num+1; i++)
    {
        cout << " " << matrix[i][0] << " | " << matrix[i][1] << " | " << matrix[i][2] << endl;
    }
    cout << " ---------------------------- " << endl;
}

float Avg_Student_Age(string** matrix, int stu_num) // �Է� ���� �л��� ���̸� ��հ���Ͽ� ��� ���� ���.
{
    float sum_age = 0;
    float avg_age;

    for (int i = 1; i < stu_num+1; i++)
    {
        sum_age += stoi(matrix[i][1]);
    }

    avg_age = sum_age / stu_num;
    cout << endl << " " << "�л��� ��� ���̴� : " << avg_age << " �� �Դϴ�." << endl << endl;
    return avg_age;
}

void Early_Birth_Student(string** matrix, int stu_num) // �Է� ���� �л��� ���� �� ���� ���� ���� ���.
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

    cout << endl << " " << "���� ������ ���� �л��� �̸��� ������ : " << matrix[early_birth_index][0] << " / " << matrix[early_birth_index][2] << " �Դϴ�. " << endl << endl;
}

void Modify_Student_Info(string** matrix, int stu_num) // �л����� ����
{
    int stu_index;
    bool check_stu_index = false;

    do
    {
        
        cout << endl << " ���� �� �л��� ��ȣ�� �Է����ּ��� :  ";
        cin >> stu_index;

        if (stu_index >= 1 && stu_index < stu_num+1)
        {
            cout << endl << " ���� �� �л��� ���� ���� �Դϴ� \n" << " " << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl << endl;

            cout << " ���� �� �л� ������ �Է� ���ּ��� (�̸�, ����, ����) : " << " ";
            cin >> matrix[stu_index][0] >> matrix[stu_index][1] >> matrix[stu_index][2];

            cout << endl << " ���� �� �л� ���� �Դϴ�. \n" << " " << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl;

            break;
        }
        else if ( stu_index < 1 || stu_index >= stu_num+1)
        {
            cout << " �л� ��ȣ�� �߸� �Է� �Ǿ����ϴ�. �ٽ� �Է� ���ּ��� : ";
        }
    } while (true);
}


// 1. ����ڿ��� �� ���� �л��� �Է��� ������ ����

// 2. �л� �� ��ŭ "�̸�, ����, ����" ������ �ѹ��� �Է� �ޱ�

// 3-1). �л�������� (�Է� �� 2���� �����迭 ���)

// 3-2). ��� ���� (�л� ��ü������ / �л� ��)

// 3-3). ���� ���� ���� 

// 3-4). ���α׷� ����
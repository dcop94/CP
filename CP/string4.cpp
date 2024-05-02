#include <iostream>
#include < string>
#include <Windows.h>

using namespace std;
string notice = "  < �л� ���� �Է� ���α׷� ���� >  \n"
" * �ۼ� �� �л� ���� �Է� ��, �л� ������ �Է� �� �� �ֽ��ϴ� . \n"
" * �л����� �Է��� ���� ) ȫ�浿 19 0102 �� �������� �ۼ��ϸ� �˴ϴ�. \n"
" * ���� �Է��� ������ ���� Ȥ�� ���α׷��� ���� �� �� �ֽ��ϴ�. \n";


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


string **Create_Student_Matrix(int stu_num) // �Է� ���� �л� ���� �°� 2���� ���� �迭 ǥ�� �ۼ�, (�̸�, ����, ����) ī�װ� ����.
{
   string **matrix = new string *[stu_num];

    for (int i = 0; i < stu_num; i++)
    {
        matrix[i] = new string[3];
    }

    matrix[0][0] = "�̸�";
    matrix[0][1] = "����";
    matrix[0][2] = "����";

    return matrix;
}

void Input_Student_Info(string **matrix, int stu_num) // ī�װ� ����(�̸�, ����, ����)�� �°� �л� ���� �Է�.
{

    cout << " �л����� �Է� ���� ( ȫ�浿, 19, 0101 )" << endl;
    
    for (int i = 0; i < stu_num; i++)
    {
        cout <<  i << "  �� �л� ������ �Է� ���ּ��� (�̸�, ����, ����) : " << endl;
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2];
    }
}

void Output_Student_Info(string **matrix, int stu_num) // �Է� ���� �л� ���� ���.
{
    cout << " ---------------------------- " << endl;
    cout << " �ۼ��Ͻ� �л� ���� �Դϴ�. " << endl;
    for (int i = 0; i < stu_num; i++)
    {
        cout << " " << matrix[i][0] << " | " << matrix[i][1] << " | " << matrix[i][2] << endl;
    }
   

    cout << " ---------------------------- " << endl;
}

float Avg_Student_Age(string** matrix, int stu_num) // �Է� ���� �л��� ���̸� ��հ���Ͽ� ��� ���� ���.
{
    float sum_age = 0;
    float avg_age;

    for (int i = 1; i < stu_num; i++)
    {
        sum_age += stoi(matrix[i][1]);
    }

    avg_age = sum_age / stu_num;
    cout << "�л��� ��� ���̴� : " << avg_age << " �� �Դϴ�." << endl << endl;
    return avg_age;
}

void Early_Birth_Student(string** matrix, int stu_num) // �Է� ���� �л��� ���� �� ���� ���� ���� ���.
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

    cout << "���� ������ ���� �л��� �̸��� ������ : " << matrix[early_birth_index][0] << " / " << matrix[early_birth_index][2] << " �Դϴ�. " << endl << endl;
}

void Modify_Student_Info(string** matrix, int stu_num) // �л����� ���� �� ���α׷� ���� �̺�Ʈ, �Է��� �߸����� �� ����ó���ε� ���
{
    char choice;
    do
    {
        cout << " " << endl;
        cout << " � ���� �ϰ� �����Ű��� ? \n ( y : �л� ���� ���� / n : ���α׷� ���� ) " << endl;
        cin >> choice;


        if (choice == 'y')
        {
            int stu_index;
            cout << " ���� �� �л��� ��ȣ�� �Է����ּ��� :  ";
            cin >> stu_index;

            if (stu_index >= 1 && stu_index < stu_num)
            {
                cout << " ���� �� �л��� ���� ���� �Դϴ� \n" << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl << endl;

                cout << " ���� �� �л� ������ �Է� ���ּ��� (�̸�, ����, ����) : " << endl;
                cin >> matrix[stu_index][0] >> matrix[stu_index][1] >> matrix[stu_index][2];

                cout << " ���� �� �л� ���� �Դϴ�. \n" << matrix[stu_index][0] << " | " << matrix[stu_index][1] << " | " << matrix[stu_index][2] << endl;

            }
            else
            {
                cout << " �л� ��ȣ�� �߸� �Է� �Ǿ����ϴ�. �ٽ� �Է� ���ּ��� : ";
            }

        }
        else if (choice == 'n')
        {
            cout << " ���α׷��� �����ϰڽ��ϴ�. ";
            exit(0);
        }
        else
        {
            cout << " �߸� �Է� �Ǿ����ϴ�. �ٽ� �Է����ּ��� ( y : �л� ���� ���� / n : ���α׷� ���� )";
        }
    } while (choice != 'y' && choice != 'n');
    
}



// 1. ����ڿ��� �� ���� �л��� �Է��� ������ ����

// 2. �л� �� ��ŭ "�̸�, ����, ����" ������ �ѹ��� �Է� �ޱ�

// 3-1). �л�������� (�Է� �� 2���� �����迭 ���)

// 3-2). ��� ���� (�л� ��ü������ / �л� ��)

// 3-3). ���� ���� ���� 

// 3-4). ���α׷� ����
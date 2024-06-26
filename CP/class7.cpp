
#include <iostream>

using namespace std;

class Person {
public:
	virtual void intro() {
		cout << "����Դϴ�~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�л��Դϴ�." << endl;
	}

	void learn() {
		cout << "���ϴ�." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�����Դϴ�." << endl;
	}

	void teach() {
		cout << "����Ĩ�ϴ�." << endl;
	}
};

int main() {
	Person* pList[3];
	string names[3];

	cout << "3���� �̸��� �Է����ּ���.(������, �л�, �л�)" << endl;
	cin >> names[0] >> names[1] >> names[2];

	/* names[] �迭 �̿��Ͽ� �� class ���� */
	Teacher teacher(names[0]);
	Student student1(names[1]);
	Student student2(names[2]);

	/* pList�� �Ҵ��ϴ� �ڵ� �߰� */
	pList[0] = &teacher;
	pList[1] = &student1;
	pList[2] = &student2;


	// teacher, student
	for (auto p : pList) {
		p->intro();
	}

	/* �� class�� ���� �Լ� ���� (teach(), learn(), learn()) */
	Teacher* t = (Teacher*)pList[0];
	t->teach();
	Student* s1 = (Student*)pList[1];
	s1->learn();
	Student* s2 = (Student*)pList[2];
	s2->learn();

}
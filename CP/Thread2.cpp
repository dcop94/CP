#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx; // ���ؽ� ��ü ����

class BankAccount // Ŭ���� ����
{
private:
	int balance;

public:
	BankAccount() : balance(1000) {}

	void deposit(int amount)
	{
		mtx.lock(); // ���ؽ� ���
		balance = balance + amount;
		cout << " �Աݾ� " << amount << " �Ѿ� " << balance << endl;
		mtx.unlock(); // ���ؽ� ����
	}
	void withdraw(int amount)
	{
		mtx.lock();
		balance = balance - amount;
		cout << " ��ݾ� " << amount << " �Ѿ� " << balance << endl;
		mtx.unlock();
	}
};

void deposit_a(BankAccount& ba, int amount, int count)
{
	for (int i = 0; i < count; ++i)
	{
		ba.deposit(amount); // Ŭ���� deposit �޼��� ����
	}
}

void withdraw_a(BankAccount& ba, int amount, int count)
{
	for (int i = 0; i < count; ++i)
	{
		ba.withdraw(amount);
	}
}

int main()
{
	BankAccount ba;

	thread t1(deposit_a, ref(ba), 100, 100); // ������
	thread t2(withdraw_a, ref(ba), 100, 100);

	t1.join();
	t2.join();

	return 0;
}
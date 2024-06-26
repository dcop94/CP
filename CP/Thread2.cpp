#include <iostream>
#include <thread>
#include <atomic>

using namespace std;


class BankAccount // Ŭ���� ����
{
private:
	atomic<int> balance;

public:
	BankAccount() : balance(1000) {}

	void deposit(int amount)
	{
		
		balance.fetch_add(amount);
		cout << " �Աݾ� " << amount << " �Ѿ� " << balance << endl;
		
	}
	void withdraw(int amount)
	{
	
		balance.fetch_sub(amount);
		cout << " ��ݾ� " << amount << " �Ѿ� " << balance << endl;
	
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
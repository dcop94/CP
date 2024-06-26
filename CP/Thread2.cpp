#include <iostream>
#include <thread>
#include <atomic>

using namespace std;


class BankAccount // 클래스 생성
{
private:
	atomic<int> balance;

public:
	BankAccount() : balance(1000) {}

	void deposit(int amount)
	{
		
		balance.fetch_add(amount);
		cout << " 입금액 " << amount << " 총액 " << balance << endl;
		
	}
	void withdraw(int amount)
	{
	
		balance.fetch_sub(amount);
		cout << " 출금액 " << amount << " 총액 " << balance << endl;
	
	}
};

void deposit_a(BankAccount& ba, int amount, int count)
{
	for (int i = 0; i < count; ++i)
	{
		ba.deposit(amount); // 클래스 deposit 메서드 참조
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

	thread t1(deposit_a, ref(ba), 100, 100); // 스레드
	thread t2(withdraw_a, ref(ba), 100, 100);

	t1.join();
	t2.join();

	return 0;
}
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx; // 뮤텍스 객체 생성

class BankAccount // 클래스 생성
{
private:
	int balance;

public:
	BankAccount() : balance(1000) {}

	void deposit(int amount)
	{
		mtx.lock(); // 뮤텍스 잠금
		balance = balance + amount;
		cout << " 입금액 " << amount << " 총액 " << balance << endl;
		mtx.unlock(); // 뮤텍스 해제
	}
	void withdraw(int amount)
	{
		mtx.lock();
		balance = balance - amount;
		cout << " 출금액 " << amount << " 총액 " << balance << endl;
		mtx.unlock();
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
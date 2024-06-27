#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <condition_variable>


using namespace std;

mutex mtx; //���ؽ�

bool alarm_set = false;

condition_variable cv;


void timer(int seconds)
{
	this_thread::sleep_for(chrono::seconds(seconds));
	mtx.lock();
	alarm_set = true;
	mtx.unlock();
	cv.notify_one();
}

void wait_for_alarm()
{
	unique_lock<mutex> lock(mtx);
	cv.wait(lock, [] {return alarm_set; });
	cout << " �˶��� ����� ~ " << endl;
}

int main()
{
	cout << " �˶��� ��ٸ��� �� " << endl;

	thread timerThread(timer, 5);
	thread waitThread(wait_for_alarm);

	timerThread.join();
	waitThread.join();

	return 0;
}
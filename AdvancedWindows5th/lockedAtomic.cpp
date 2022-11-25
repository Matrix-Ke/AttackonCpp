#include <iostream>
#include <windows.h>
#include <mutex>
#include <semaphore>
//#include <l>
int main()
{
	std::mutex  mMutex;
	mMutex.lock();
	mMutex.unlock();
	//std::lock_guard<std::mutex>   mGurad(mMutex);

	using std::cout;
	using std::endl;
	unsigned int des = 100;
	unsigned int a, b;
	a = 2, b = 100;
	//::InterlockedCompareExchange(&des, a, b);
	cout << ::InterlockedCompareExchange(&des, a, b) << endl;
	cout << des << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}

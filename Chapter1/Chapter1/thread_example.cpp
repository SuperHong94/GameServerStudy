#include <iostream>
#include <thread>

int ThreadProc(int);
int main()
{
	std::thread t1(ThreadProc, 123);

	int a = 10;
	
	t1.join();
	
}

int ThreadProc(int a)
{
	a = 100;
	return a;
}
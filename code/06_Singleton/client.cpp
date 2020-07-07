#include "DatabaseDriver.h"
#include "ThreadSafeDatabaseDriver.h"
#include <iostream>
#include <Windows.h>
#include <process.h>

using namespace std;
#define THREAD_NUM 5

unsigned int __stdcall call_singletone(void* pPm) {
	DatabaseDriver* driver = DatabaseDriver::getInstance();
	int nThreadNum = *(int*)pPm;
	Sleep(50);
	cout << "Thread No:" << nThreadNum << endl;
	return 0;
}

unsigned int __stdcall call_safeSingletone(void* pPm) {
	ThreadSafeDatabaseDriver* driver = ThreadSafeDatabaseDriver::getInstance();
	int nThreadNum = *(int*)pPm;
	Sleep(50);
	cout << "Safe Thread No:" << nThreadNum << endl;
	return 0;
}

void simpleTest() {
	DatabaseDriver* driverA = DatabaseDriver::getInstance();

	DatabaseDriver* driverB = DatabaseDriver::getInstance();

	cout << "DriverA pointed address:" << (driverA) << ", DriverB pointed address:" << (driverB) << "; equals:" << (driverA == driverB) << endl;
}

int multithreadTest(bool threadSafe=false) {
	HANDLE  handle[THREAD_NUM];
	int threadNum = 0;
	while (threadNum < THREAD_NUM)
	{
		if (threadSafe) {
			handle[threadNum] = (HANDLE)_beginthreadex(NULL, 0, call_safeSingletone, &threadNum, 0, NULL);
		}
		else {
			handle[threadNum] = (HANDLE)_beginthreadex(NULL, 0, call_singletone, &threadNum, 0, NULL);
		}
		threadNum++;
	}
	WaitForMultipleObjects(THREAD_NUM, handle, TRUE, INFINITE);
	system("pause");
	return 0;

}

int main() {
	//simpleTest();
	//multithreadTest();
	multithreadTest(true);
	return 0;
}
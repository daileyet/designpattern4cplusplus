#pragma once
#include <mutex>
using namespace std;
class ThreadSafeDatabaseDriver
{
public:
	static ThreadSafeDatabaseDriver* getInstance();
	static void release();
private:
	ThreadSafeDatabaseDriver();
	~ThreadSafeDatabaseDriver();
	static ThreadSafeDatabaseDriver* m_instance;
	static mutex m_mutex;
};


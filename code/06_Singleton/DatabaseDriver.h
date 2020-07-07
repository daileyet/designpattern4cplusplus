#pragma once
class DatabaseDriver
{
public:
	static DatabaseDriver* getInstance();
	static void release();
private:
	DatabaseDriver();
	~DatabaseDriver();
	static DatabaseDriver* m_instance;
};


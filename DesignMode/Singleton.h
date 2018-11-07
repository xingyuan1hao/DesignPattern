#pragma once
class Singleton
{
private:
	Singleton(void);
	static Singleton *singleton;
public:
	~Singleton(void);
public:
	static Singleton *GetSingleton();
};


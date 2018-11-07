#pragma once
class Person
{
public:
	Person();
	Person(char *szName);
	~Person(void);
private:
	char name[32];
public:
	virtual void show();
};


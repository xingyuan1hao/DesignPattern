#pragma once
class Company
{
public:
	Company(string name);
	~Company(void);
protected:
	string name;
public:
	virtual void Add(Company *c) = 0;
	virtual void Remove(Company *c) = 0;
	virtual void Display(int depth) = 0;
	virtual void LineOfDuty() = 0;
};


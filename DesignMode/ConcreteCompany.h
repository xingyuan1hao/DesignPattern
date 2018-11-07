#pragma once
#include "Company.h"
class ConcreteCompany:public Company
{
private:
	vector<Company*>children;
public:
	ConcreteCompany(string name);
	~ConcreteCompany(void);

	virtual void Add( Company *c );

	virtual void Remove( Company *c );

	virtual void Display( int depth );

	virtual void LineOfDuty();

};


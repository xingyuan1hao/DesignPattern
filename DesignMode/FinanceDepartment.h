#pragma once
#include "Company.h"
class FinanceDepartment: public Company
{
public:
	FinanceDepartment(string name);
	~FinanceDepartment(void);

	virtual void Add( Company *c );

	virtual void Remove( Company *c );

	virtual void Display( int depth );

	virtual void LineOfDuty();

};


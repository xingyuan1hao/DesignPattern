#pragma once
#include "Company.h"
class HRDepartment: public Company
{
public:
	HRDepartment(string name);
	~HRDepartment(void);

	virtual void Add( Company *c );

	virtual void Remove( Company *c );

	virtual void Display( int depth );

	virtual void LineOfDuty();

};


#pragma once
#include "country.h"
class Iraq :
	public Country
{
public:
	Iraq(UnitedNations *mediator);
	~Iraq(void);

	virtual void GetMessage(string message);

};


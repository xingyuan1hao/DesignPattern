#pragma once
#include "country.h"
class USA :
	public Country
{
public:
	USA(UnitedNations *mediator);
	~USA(void);

	virtual void GetMessage(string message);

};


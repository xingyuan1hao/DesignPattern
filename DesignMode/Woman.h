#pragma once
#include "Person1.h"
class Woman:public Person1
{
public:
	Woman(void);
	~Woman(void);

	virtual void Accept( Action *action );

};


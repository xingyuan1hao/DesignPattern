#pragma once
#include "Person1.h"
class Man:public Person1
{
public:
	Man(void);
	~Man(void);

	virtual void Accept( Action *action );

};


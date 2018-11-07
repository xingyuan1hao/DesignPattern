#pragma once
#include "Action.h"
class Failing:public Action
{
public:
	Failing(void);
	~Failing(void);

	virtual void GetManConclusion( Person1 *person );

	virtual void GetWomanConclusion( Person1 *person );

};


#pragma once
#include "Action.h"
class Success:public Action
{
public:
	Success(void);
	~Success(void);

	virtual void GetManConclusion( Person1 *person );

	virtual void GetWomanConclusion( Person1 *person );

};


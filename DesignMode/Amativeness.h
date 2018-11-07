#pragma once
#include "Action.h"
class Amativeness:public Action
{
public:
	Amativeness(void);
	~Amativeness(void);

	virtual void GetManConclusion( Person1 *person );

	virtual void GetWomanConclusion( Person1 *person );

};


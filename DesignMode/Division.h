#pragma once
#include "Operation.h"
class Division:public Operation
{
public:
	Division(void);
	~Division(void);
public:
	virtual double getResult() override;
};


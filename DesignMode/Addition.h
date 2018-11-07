#pragma once
#include "Operation.h"
class Addition:public Operation
{
public:
	Addition(void);
	virtual ~Addition(void);
public:
	virtual double getResult() override;
};


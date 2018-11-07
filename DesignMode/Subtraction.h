#pragma once
#include "Operation.h"

class Subtraction:public Operation
{
public:
	Subtraction(void);
	virtual ~Subtraction(void);
public:
	virtual double getResult()  override;
};


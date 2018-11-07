#pragma once
#include "Operation.h"
class Multiplication:public Operation
{
public:
	Multiplication(void);
	~Multiplication(void);
public:
	virtual double getResult();
};


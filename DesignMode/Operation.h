#pragma once
class Operation
{
public:
	double numberA;
	double numberB;
public:
	Operation(void);
	virtual ~Operation(void);
	virtual double getResult() = 0;
};


#pragma once
enum OperationType
{
	eAddition,
	eSubtraction,
	eMultiplication,
	eDivision
};

class Operation;
class SimpleFactory
{
public:
	SimpleFactory(void);
	~SimpleFactory(void);
public:
	Operation *getOperation(OperationType type);
};


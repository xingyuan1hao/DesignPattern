#include "StdAfx.h"
#include "SimpleFactory.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"


SimpleFactory::SimpleFactory(void)
{
}


SimpleFactory::~SimpleFactory(void)
{
}

Operation *SimpleFactory::getOperation(OperationType type)
{
	Operation *pOperation = NULL;
	switch(type)
	{
	default:
		break;
	case eAddition:
		pOperation = new Addition();
		break;
	case eSubtraction:
		pOperation = new Subtraction();
		break;
	case eMultiplication:
		pOperation = new Multiplication();
		break;
	case eDivision:
		pOperation = new Division();
		break;
	}
	return pOperation;
}

void simpleFactory()
{
	SimpleFactory sf;
	double result = 0;

	Operation *pOperation = sf.getOperation(eAddition);
	pOperation->numberA = 1;
	pOperation->numberB = 2;
	result  = pOperation->getResult();
	delete pOperation;

	pOperation = sf.getOperation(eSubtraction);
	pOperation->numberA = 1;
	pOperation->numberB = 2;
	result  = pOperation->getResult();
	delete pOperation;

	pOperation = sf.getOperation(eMultiplication);
	pOperation->numberA = 1;
	pOperation->numberB = 2;
	result  = pOperation->getResult();
	delete pOperation;

	pOperation = sf.getOperation(eDivision);
	pOperation->numberA = 1;
	pOperation->numberB = 0;
	try{
		result  = pOperation->getResult();
	}
	catch(double err)
	{
		double  i = err;
	}
	delete pOperation;
}
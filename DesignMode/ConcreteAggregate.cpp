#include "StdAfx.h"
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"


ConcreteAggregate::ConcreteAggregate(void)
{
	datas.resize(10);
}

ConcreteAggregate::~ConcreteAggregate(void)
{
}

Iterator* ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this);
}

int ConcreteAggregate::Count()
{
	return datas.size();
}

Iterator*  ConcreteAggregate::operator [](int index)
{
	return (Iterator*)(&datas[0] + index);
}
#include "StdAfx.h"
#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"


ConcreteIterator::ConcreteIterator(ConcreteAggregate *concreteAggregate)
{
	this->concreteAggregate = concreteAggregate;
	current =0;
}


ConcreteIterator::~ConcreteIterator(void)
{
}

Iterator* ConcreteIterator::First()
{
	return (*concreteAggregate)[0];
}

Iterator* ConcreteIterator::Next()
{
	if (current < concreteAggregate->Count())
	{
		return (*concreteAggregate)[current++];
	}
	return NULL;
}

bool ConcreteIterator::IsDone()
{
	return (current >= concreteAggregate->Count()-1);
}

int ConcreteIterator::CurrentItem()
{
	return  *((int*)((*concreteAggregate)[current] - First()));
}

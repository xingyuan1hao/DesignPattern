#pragma once
#include "Iterator.h"
class ConcreteAggregate;
class ConcreteIterator:public Iterator
{
public:
	ConcreteIterator(ConcreteAggregate *concreteAggregate);
	~ConcreteIterator(void);

	virtual Iterator* First();

	virtual Iterator* Next();

	virtual bool IsDone();

	virtual int CurrentItem();

private:
	ConcreteAggregate *concreteAggregate;
	int current;
};


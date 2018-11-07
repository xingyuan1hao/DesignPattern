#pragma once
#include "Aggregate.h"
class ConcreteAggregate:public Aggregate
{
public:
	ConcreteAggregate(void);
	~ConcreteAggregate(void);
private:
	vector<int>datas;
public:
	virtual Iterator* CreateIterator() override;
	int Count();
	Iterator* operator[](int index);
};


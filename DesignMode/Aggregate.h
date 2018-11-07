#pragma once
class Iterator;
class Aggregate
{
public:
	Aggregate(void);
	~Aggregate(void);
public:
	virtual Iterator* CreateIterator() = 0;
};


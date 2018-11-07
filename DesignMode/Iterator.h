#pragma once
class Iterator
{
private:
	int value;
public:
	Iterator(void);
	~Iterator(void);
public:
	virtual Iterator* First() = 0;
	virtual Iterator* Next() = 0;
	virtual bool IsDone() = 0;
	virtual int CurrentItem() = 0;
};


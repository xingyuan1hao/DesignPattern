#pragma once
#include "HandSetSoft.h"
class HandSetSoft;
class HandSetBrand
{
protected:
	HandSetSoft *handsetsoft;
public:
	HandSetBrand(void);
	~HandSetBrand(void);
	void SetHandSetSoft(HandSetSoft *handsetsoft);
	virtual void Run() = 0;
};


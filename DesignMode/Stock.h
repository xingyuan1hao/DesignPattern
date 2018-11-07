#pragma once
#include "Invest.h"
class Stock:public Invest
{
public:
	Stock(void);
	~Stock(void);

	virtual void Sell();

	virtual void Buy();

};


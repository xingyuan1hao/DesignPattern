#pragma once
#include "Invest.h"
class NationalDebt:public Invest
{
public:
	NationalDebt(void);
	~NationalDebt(void);

	virtual void Sell();

	virtual void Buy();

};


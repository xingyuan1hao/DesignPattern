#pragma once
#include "Stock.h"
#include "Realty.h"
#include "NationalDebt.h"
#include "Invest.h"
class Fund :public Invest
{
public:
	Fund(void);
	~Fund(void);

	virtual void Sell();

	virtual void Buy();

private:
	Stock stk;
	Realty rel;
	NationalDebt ab;
};


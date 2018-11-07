#pragma once
#include "CashSuper.h"
class CashRebate:public CashSuper
{
public:
	CashRebate(double discount);
	~CashRebate(void);
public:
	virtual double acceptCash(double money) override;
private:
	double discount;
};


#pragma once
#include "CashSuper.h"
class CashReturn:public CashSuper
{
public:
	CashReturn(double moneyCondition,double moneyReturn);
	~CashReturn(void);
public:
	virtual double acceptCash(double money) override;
private:
	double moneyCondition;
	double moneyReturn;
};


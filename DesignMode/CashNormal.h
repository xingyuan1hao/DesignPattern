#pragma once
#include "CashSuper.h"
class CashNormal:public CashSuper
{
public:
	CashNormal(void);
	~CashNormal(void);
public:
	virtual double acceptCash(double money) override;
};


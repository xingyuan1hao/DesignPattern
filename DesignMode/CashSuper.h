#pragma once
class CashSuper
{
public:
	CashSuper(void);
	~CashSuper(void);
public:
	virtual double acceptCash(double money) = 0;
};


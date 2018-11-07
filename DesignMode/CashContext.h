#pragma once
class CashSuper;
class CashContext
{
public:
	CashContext(void);
	~CashContext(void);
	double getResult(double money);
	void setCashSuper(CashSuper *pCashSuper);
private:
	CashSuper *pCashSuper;
};


#include "StdAfx.h"
#include "CashContext.h"
#include "CashSuper.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

CashContext::CashContext(void)
	:pCashSuper(NULL)
{
}


CashContext::~CashContext(void)
{
}

void CashContext::setCashSuper(CashSuper *pCashSuper)
{
	this->pCashSuper = pCashSuper;
}

double CashContext::getResult(double money)
{
	if (pCashSuper)
	{
		return pCashSuper->acceptCash(money);
	}
	return 0;
}

void stragegy()
{

	CashContext cc;
	cc.setCashSuper(new CashNormal());
	double cost = cc.getResult(125);

	cc.setCashSuper(new CashRebate(0.8));
	cost = cc.getResult(125);

	cc.setCashSuper(new CashReturn(20,5));

}
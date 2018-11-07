#include "StdAfx.h"
#include "CashReturn.h"


CashReturn::CashReturn(double moneyCondition,double moneyReturn)
{
	this->moneyCondition = moneyCondition;
	this->moneyReturn     = moneyReturn;
}


CashReturn::~CashReturn(void)
{
}

double CashReturn::acceptCash(double money)
{
	return  money - (int(money/moneyCondition)) * moneyReturn;
}
#include "StdAfx.h"
#include "CashRebate.h"


CashRebate::CashRebate(double discount)
{
	this->discount = discount;
}


CashRebate::~CashRebate(void)
{
}

double CashRebate::acceptCash(double money)
{
	return discount * money;
}
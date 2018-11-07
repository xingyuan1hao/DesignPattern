#include "StdAfx.h"
#include "Fund.h"


Fund::Fund(void)
{
}


Fund::~Fund(void)
{
}

void Fund::Buy()
{
	stk.Buy();
	rel.Buy();
	ab.Buy();
}

void Fund::Sell()
{
	stk.Sell();
	rel.Sell();
	ab.Sell();
}


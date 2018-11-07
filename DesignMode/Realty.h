#pragma once
#include "Invest.h"
class Realty:public Invest
{
public:
	Realty(void);
	~Realty(void);

	virtual void Sell();

	virtual void Buy();

};


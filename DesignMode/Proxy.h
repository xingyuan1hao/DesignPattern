#pragma once
#include "Pursuit.h"
class Proxy:public GiveGift
{
public:
	Proxy(SchoolGirl *pMM);
	~Proxy(void);

	void GiveDolls()  override;
	void GiveFlowers()  override;
	void GiveChocolate() override;

private:
	Pursuit *pGG;
};


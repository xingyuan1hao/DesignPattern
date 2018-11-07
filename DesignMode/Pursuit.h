#pragma once
#include "GiveGift.h"
class SchoolGirl;
class Pursuit:public GiveGift
{
public:
	Pursuit(SchoolGirl *mm);
	~Pursuit(void);

	void GiveDolls()  override;
	void GiveFlowers()  override;
	void GiveChocolate() override;

private:
	SchoolGirl *pMM;
};


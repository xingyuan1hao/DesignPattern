#pragma once
#include "Finery.h"
class Suit:public Finery
{
public:
	Suit(void);
	~Suit(void);
	void show() override;
};


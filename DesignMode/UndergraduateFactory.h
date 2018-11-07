#pragma once
#include "IFactory.h"
class UndergraduateFactory:public IFactory
{
public:
	UndergraduateFactory(void);
	~UndergraduateFactory(void);
	virtual LeiFeng *CreateLeiFeng() override;
};


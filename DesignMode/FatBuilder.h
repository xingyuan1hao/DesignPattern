#pragma once
#include "Builder.h"
class FatBuilder:public Builder
{
public:
	FatBuilder(void);
	~FatBuilder(void);

	virtual void BuildHead();

	virtual void BuildLeftArm();

	virtual void BuildRightArm();

	virtual void BuildLeftLeg();

	virtual void BuildRightLeg();

};


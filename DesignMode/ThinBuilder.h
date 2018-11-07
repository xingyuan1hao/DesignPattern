#pragma once
#include "Builder.h"
class ThinBuilder:public Builder
{
public:
	ThinBuilder(void);
	~ThinBuilder(void);

	virtual void BuildHead();

	virtual void BuildLeftArm();

	virtual void BuildRightArm();

	virtual void BuildLeftLeg();

	virtual void BuildRightLeg();

};


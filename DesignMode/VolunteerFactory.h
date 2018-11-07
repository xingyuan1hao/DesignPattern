#pragma once
#include "IFactory.h"
class VolunteerFactory:public IFactory
{
public:
	VolunteerFactory(void);
	~VolunteerFactory(void);

	virtual LeiFeng * CreateLeiFeng() override;

};


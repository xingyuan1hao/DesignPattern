#include "StdAfx.h"
#include "VolunteerFactory.h"
#include "Volunteer.h"


VolunteerFactory::VolunteerFactory(void)
{
}


VolunteerFactory::~VolunteerFactory(void)
{
}

LeiFeng * VolunteerFactory::CreateLeiFeng()
{
	return new Volunteer();
}

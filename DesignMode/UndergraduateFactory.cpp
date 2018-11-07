#include "StdAfx.h"
#include "UndergraduateFactory.h"
#include "Undergraduate.h"


UndergraduateFactory::UndergraduateFactory(void)
{
}


UndergraduateFactory::~UndergraduateFactory(void)
{
}

LeiFeng *UndergraduateFactory::CreateLeiFeng()
{
	return new Undergraduate();
}

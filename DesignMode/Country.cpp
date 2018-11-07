#include "StdAfx.h"
#include "Country.h"
#include "UnitedNations.h"


void Country::Declare(string message)
{
	mediator->Declare(message,this);
}

Country::Country(UnitedNations *mediator)
{
	this->mediator = mediator;
}


Country::~Country(void)
{
}

#include "StdAfx.h"
#include "Division.h"


Division::Division(void)
{
}


Division::~Division(void)
{
}

double Division::getResult()
{
	if (0 == numberB)
		throw numberB;

	return numberA/numberB;
}
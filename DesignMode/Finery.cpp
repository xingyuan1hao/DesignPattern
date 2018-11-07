#include "StdAfx.h"
#include "Finery.h"


Finery::Finery(void)
{
}


Finery::~Finery(void)
{
}

void Finery::Dcorate( Person *pComponent)
{
	this->pComponent = pComponent;
}

void Finery::show()
{
	if (pComponent)
	{
		pComponent->show();
	}
}
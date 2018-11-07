#include "StdAfx.h"
#include "Proxy.h"
#include "SchoolGirl.h"


Proxy::Proxy(SchoolGirl *pMM)
{
	pGG = new Pursuit(pMM);
}


Proxy::~Proxy(void)
{
}


void Proxy::GiveDolls()
{
	pGG->GiveDolls();
}

void Proxy::GiveFlowers()
{
	pGG->GiveFlowers();
}

void Proxy::GiveChocolate()
{
	pGG->GiveChocolate();
}

void proxy()
{
	Proxy *p = new Proxy(new SchoolGirl("Àî½¿½¿"));
	p->GiveChocolate();
	p->GiveDolls();
	p->GiveFlowers();

}
#include "StdAfx.h"
#include "ConcreteWebSite.h"


ConcreteWebSite::ConcreteWebSite(int name)
{
	this->name = name;
}


ConcreteWebSite::~ConcreteWebSite(void)
{
}

void ConcreteWebSite::Use()
{
	cout<<"ÍøÕ¾·ÖÀà "<<name<<"\n";
}

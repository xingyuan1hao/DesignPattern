#include "StdAfx.h"
#include "Manager.h"


Manager::Manager(string name)
{
	this->name = name;
}


Manager::~Manager(void)
{
}


void Manager::SetSuperior(Manager *manager)
{
	this->manager = manager;
}
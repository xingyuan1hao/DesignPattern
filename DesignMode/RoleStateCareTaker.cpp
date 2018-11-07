#include "StdAfx.h"
#include "RoleStateCareTaker.h"


RoleStateCareTaker::RoleStateCareTaker(void)
{
}


RoleStateCareTaker::~RoleStateCareTaker(void)
{
}

RoleStateMemento* RoleStateCareTaker::GetMemento()
{
	return this->roleStateMemento;
}

void RoleStateCareTaker::SetMemento(RoleStateMemento *roleStateMemento)
{
	this->roleStateMemento = roleStateMemento;
}
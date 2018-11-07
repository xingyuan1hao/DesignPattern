#include "StdAfx.h"
#include "RoleStateMemento.h"


RoleStateMemento::RoleStateMemento(int vit,int atk,int def)
{
	this->vit = vit;
	this->atk = atk;
	this->def = def;
}


RoleStateMemento::~RoleStateMemento(void)
{
}

int RoleStateMemento::GetVit()
{
	return this->vit;
}

int RoleStateMemento::GetAtk()
{
	return this->atk;
}

int RoleStateMemento::GetDef()
{
	return this->def;
}

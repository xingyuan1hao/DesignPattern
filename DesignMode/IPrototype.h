#pragma once
#include <ObjBase.h>
interface IPrototype
{
	virtual IPrototype* Clone() = 0;
};
#pragma once
#include <objbase.h>
class LeiFeng;
interface IFactory
{
	virtual LeiFeng *CreateLeiFeng()  = 0;
};


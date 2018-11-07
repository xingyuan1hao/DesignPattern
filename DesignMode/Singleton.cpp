#include "StdAfx.h"
#include "Singleton.h"

 Singleton * Singleton::singleton = NULL;

Singleton::Singleton(void)
{
}


Singleton::~Singleton(void)
{
}

Singleton *Singleton::GetSingleton()
{
	if (NULL == singleton)
	{
		//EnterLock
		if (NULL == singleton)
		{
			singleton = new Singleton();
		}
		//LeaveLock
	}
	return singleton;
}

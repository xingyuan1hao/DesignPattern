#include "StdAfx.h"
#include "Subject.h"
#include "Observer.h"


Subject::Subject(void)
{
}


Subject::~Subject(void)
{
}

void Subject::Attach( Observer *observer)
{
	observers.push_back(observer);
}

void Subject::Detach(Observer *observer)
{
	vector<Observer*>::iterator itBegin = observers.begin();
	vector<Observer*>::iterator itEnd    = observers.end();
	vector<Observer*>::iterator itFind;
	for(;itBegin!=itEnd;++itBegin)
	{
		if ((*itBegin) == observer)
		{
			itFind = itBegin;
			break;
		}
	}
	observers.erase(itFind);
}

void Subject::Notify()
{
	vector<Observer*>::iterator itBegin = observers.begin();
	vector<Observer*>::iterator itEnd    = observers.end();
	for(;itBegin!=itEnd;++itBegin)
	{
		(*itBegin)->Update();
	}
}

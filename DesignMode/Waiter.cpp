#include "StdAfx.h"
#include "Waiter.h"
#include "Command.h"


Waiter::Waiter(void)
{
}


Waiter::~Waiter(void)
{
}

void Waiter::SetOrder(Command *command)
{
	orders.push_back(command);
	cout<<"Add Order\n";
}

void Waiter::CancelOrder(Command *command)
{
	vector<Command*>::iterator itBegin = orders.begin();
	vector<Command*>::iterator itEnd    = orders.end();
	vector<Command*>::iterator itFind   = itEnd;
	for(;itBegin!=itEnd;++itBegin)
	{
		if ((*itBegin) == command)
		{
			itFind = itBegin;
			break;
		}
	}
	if (itFind != itEnd)
	{
		orders.erase(itFind);
		cout<<"Cancel order\n";
	}
}

void Waiter::Notify()
{
	vector<Command*>::iterator itBegin = orders.begin();
	vector<Command*>::iterator itEnd    = orders.end();
	for(;itBegin!=itEnd;++itBegin)
	{
		(*itBegin)->ExecuteCommand();
	}
}

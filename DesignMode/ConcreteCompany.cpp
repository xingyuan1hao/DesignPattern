#include "StdAfx.h"
#include "ConcreteCompany.h"


ConcreteCompany::ConcreteCompany(string name)
	:Company(name)
{
}


ConcreteCompany::~ConcreteCompany(void)
{
}

void ConcreteCompany::Add( Company *c )
{
	children.push_back(c);
}

void ConcreteCompany::Remove( Company *c )
{
	vector<Company*>::iterator itBegin = children.begin();
	vector<Company*>::iterator itEnd    = children.end();
	vector<Company*>::iterator itFind    = itEnd;
	for(;itBegin!=itEnd;++itBegin)
	{
		if ((*itBegin) == c)
		{
			itFind = itBegin;
			break;
		}
	}
	if (itFind != itEnd)
	{
		children.erase(itFind);
	}
}

void ConcreteCompany::Display( int depth )
{
	for (int index = 0;index < depth;++index)
		cout<<"-";
	cout<<name.c_str()<<"\n";

	vector<Company*>::iterator itBegin = children.begin();
	vector<Company*>::iterator itEnd    = children.end();
	for(;itBegin!=itEnd;++itBegin)
	{
		(*itBegin)->Display(depth + 2);
	}

}

void ConcreteCompany::LineOfDuty()
{
	vector<Company*>::iterator itBegin = children.begin();
	vector<Company*>::iterator itEnd    = children.end();
	for(;itBegin!=itEnd;++itBegin)
	{
		(*itBegin)->LineOfDuty();
	}
}

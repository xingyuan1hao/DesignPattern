#include "StdAfx.h"
#include "ObjectStructure.h"
#include "Person1.h"
#include "Man.h"
#include "Woman.h"
#include "Success.h"
#include "Failing.h"
#include "Amativeness.h"


ObjectStructure::ObjectStructure(void)
{
}


ObjectStructure::~ObjectStructure(void)
{
}

void ObjectStructure::Attach(Person1 *person)
{
	elements.push_back(person);
}

void ObjectStructure::Detach(Person1 *person)
{
	vector<Person1*>::iterator itBegin = elements.begin();
	vector<Person1*>::iterator itEnd    = elements.end();
	vector<Person1*>::iterator itFind = itEnd;
	for (;itBegin!=itEnd;++itBegin)
	{
		if ((*itBegin) == person)
		{
			itFind = itBegin;
			break;
		}
	}
	if (itFind != itBegin)
	{
		elements.erase(itFind);
	}
}

void ObjectStructure::Display(Action *action)
{
	vector<Person1*>::iterator itBegin = elements.begin();
	vector<Person1*>::iterator itEnd    = elements.end();
	for (;itBegin!=itEnd;++itBegin)
	{
		(*itBegin)->Accept(action);
	}
}

void visitor()
{
	ObjectStructure* o = new ObjectStructure();

	o->Attach(new Man());
	o->Attach(new Woman());

	Action *v1 = new Success();
	o->Display(v1);

	Action *f1 = new Failing();
	o->Display(f1);

	Action *a1 = new Amativeness();
	o->Display(a1);

}
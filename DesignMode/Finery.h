#pragma once
#include "Person.h"
class Finery:public Person
{
public:
	Finery(void);
	~Finery(void);
	void Dcorate( Person *pComponent);
	void show() override ;
protected:
	Person *pComponent;
};


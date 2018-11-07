#pragma once
class Person1;
class Action
{
public:
	Action(void);
	~Action(void);
	virtual void GetManConclusion(Person1 *person) = 0;
	virtual void GetWomanConclusion(Person1 *person) = 0;
};


#pragma once
class Action;
class Person1
{
public:
	Person1(void);
	~Person1(void);
	virtual void Accept(Action *action) = 0;
};


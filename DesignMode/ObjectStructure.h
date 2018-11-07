#pragma once
class Person1;
class Action;
class ObjectStructure
{
	vector<Person1*> elements;
public:
	ObjectStructure(void);
	~ObjectStructure(void);
	void Attach(Person1 *person);
	void Detach(Person1 *person);
	void Display(Action *action);
};


#pragma once
class Subject;
class Observer
{

public:
	Observer(Subject *subject);
	~Observer();

public:
	virtual void Update() = 0;
private:
	Subject *subject;
};


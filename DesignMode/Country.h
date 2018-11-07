#pragma once
class UnitedNations;
class Country
{
public:
	Country(UnitedNations *mediator);
	~Country(void);
	void Declare(string message);
	virtual void GetMessage(string message) = 0;
protected:
	UnitedNations *mediator;
};


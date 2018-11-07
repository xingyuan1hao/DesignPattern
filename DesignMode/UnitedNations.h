#pragma once
class Country;
class UnitedNations
{
public:
	UnitedNations(void);
	~UnitedNations(void);
	virtual void Declare(string message,Country *colleague) = 0;
};


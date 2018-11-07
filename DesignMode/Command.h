#pragma once
class Barbecuer;
class Command
{
public:
	Command(Barbecuer *barbecuer);
	~Command(void);
	virtual void ExecuteCommand() = 0;
protected:
	Barbecuer *barbecuer;
};


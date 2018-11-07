#pragma once
#include "Command.h"
class BakeMuttonCommand:public Command
{
public:
	BakeMuttonCommand(Barbecuer *barbecuer);
	~BakeMuttonCommand(void);

	virtual void ExecuteCommand();

};


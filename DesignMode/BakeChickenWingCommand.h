#pragma once
#include "Command.h"
class BakeChickenWingCommand:public Command
{
public:
	BakeChickenWingCommand(Barbecuer *barbecuer);
	~BakeChickenWingCommand(void);

	virtual void ExecuteCommand();

};


#include "StdAfx.h"
#include "BakeChickenWingCommand.h"
#include "Barbecuer.h"


BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer *barbecuer)
	:Command(barbecuer)
{
}


BakeChickenWingCommand::~BakeChickenWingCommand(void)
{
}

void BakeChickenWingCommand::ExecuteCommand()
{
	barbecuer->BakeChickenWing();
}

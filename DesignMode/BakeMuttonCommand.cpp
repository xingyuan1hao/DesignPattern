#include "StdAfx.h"
#include "BakeMuttonCommand.h"
#include "Barbecuer.h"


BakeMuttonCommand::BakeMuttonCommand(Barbecuer *barbecuer)
	:Command(barbecuer)
{
}


BakeMuttonCommand::~BakeMuttonCommand(void)
{
}

void BakeMuttonCommand::ExecuteCommand()
{
	barbecuer->BakeMutton();
}

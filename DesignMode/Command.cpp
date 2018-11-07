#include "StdAfx.h"
#include "Command.h"
#include "Barbecuer.h"
#include "BakeMuttonCommand.h"
#include "BakeChickenWingCommand.h"
#include "Waiter.h"


Command::Command(Barbecuer *barbecuer)
{
	this->barbecuer = barbecuer;
}


Command::~Command(void)
{
}

void command()
{
	Barbecuer *barbecuer = new Barbecuer();
	Command *cmdMutton = new BakeMuttonCommand(barbecuer);
	Command *cmdChicken = new BakeChickenWingCommand(barbecuer);
	Waiter *waiter = new Waiter();
	waiter->SetOrder(cmdChicken);
	waiter->SetOrder(cmdMutton);
	waiter->Notify();
	waiter->CancelOrder(cmdMutton);
	waiter->Notify();
}
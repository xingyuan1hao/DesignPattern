#include "StdAfx.h"
#include "UnitedNationsSecurityCouncil.h"
#include "Country.h"


UnitedNationsSecurityCouncil::UnitedNationsSecurityCouncil(void)
{
}


UnitedNationsSecurityCouncil::~UnitedNationsSecurityCouncil(void)
{
}

void UnitedNationsSecurityCouncil::Declare( string message,Country *colleague )
{
	if (colleague == colleague1)
	{
		colleague2->GetMessage(message);
	}
	else
	{
		colleague1->GetMessage(message);
	}
}

void UnitedNationsSecurityCouncil::SetColleague1(Country* country)
{
	colleague1 = country;
}

void UnitedNationsSecurityCouncil::SetColleague2(Country *country)
{
	colleague2 = country;
}

void mediator()
{
	UnitedNationsSecurityCouncil unsc;
	Country *iraq = new Iraq(&unsc);
	Country *usa  = new USA(&unsc);
	unsc.SetColleague1(iraq);
	unsc.SetColleague2(usa);

	iraq->Declare("shit USA!");
	usa->Declare("Fuck!");
}
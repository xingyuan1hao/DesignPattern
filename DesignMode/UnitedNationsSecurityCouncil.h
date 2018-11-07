#pragma once
#include "unitednations.h"
#include "USA.h"
#include "Iraq.h"
class UnitedNationsSecurityCouncil :
	public UnitedNations
{
public:
	UnitedNationsSecurityCouncil(void);
	~UnitedNationsSecurityCouncil(void);

	virtual void Declare( string message,Country *colleague );
	void SetColleague1(Country* country);
	void SetColleague2(Country *country);

private:
	Country *colleague1;
	Country  *colleague2;
};


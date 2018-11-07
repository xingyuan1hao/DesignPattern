#include "StdAfx.h"
#include "Person.h"
#include <string>
#include <iostream>
#include "BigTrouser.h"
#include "LeatherShoes.h"
#include "Sneakers.h"
#include "Suit.h"
#include "Tie.h"
#include "TShirts.h"

using namespace std;

Person::Person()
{

}

Person::Person(char *szName)
{
	strcpy(name,szName);
}

Person::~Person(void)
{
}

void Person::show()
{
	cout<<"装扮的 "<<name<<"\n";
}

void decorator()
{
	Person *xiaoming      = new Person("小明");
	Finery *bigTrouser    = new BigTrouser();
	Finery *leatherShoes = new LeatherShoes();
	Finery *sneakers       = new Sneakers();
	Finery *suit               = new Suit();
	Finery *tie                 = new Tie();
	Finery *tshirs             = new TShirts();

	bigTrouser->Dcorate(xiaoming);
	leatherShoes->Dcorate(bigTrouser);
	sneakers->Dcorate(leatherShoes);
	suit->Dcorate(sneakers);
	tie->Dcorate(suit);
	tshirs->Dcorate(tie);
	tshirs->show();
}
#include "StdAfx.h"
#include "LeiFeng.h"
#include <iostream>
#include "UndergraduateFactory.h"
#include "VolunteerFactory.h"
using namespace std;

LeiFeng::LeiFeng(void)
{
}


LeiFeng::~LeiFeng(void)
{
}

void LeiFeng::Sweep()
{
	cout<<"ɨ��\n";
}

void LeiFeng::BuyRice()
{
	cout<<"����\n";
}

void LeiFeng::Wash()
{
	cout<<"ϴ��\n";
}


void factory()
{
	UndergraduateFactory uf;
	VolunteerFactory vf;

	LeiFeng *pLeiFeng = uf.CreateLeiFeng();
	pLeiFeng->BuyRice();
	pLeiFeng->Sweep();
	pLeiFeng->Wash();

	pLeiFeng = vf.CreateLeiFeng();
	pLeiFeng->BuyRice();
	pLeiFeng->Sweep();
	pLeiFeng->Wash();

}
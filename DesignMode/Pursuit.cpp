#include "StdAfx.h"
#include "Pursuit.h"
#include <iostream>
#include "SchoolGirl.h"
using namespace  std;

Pursuit::Pursuit(SchoolGirl *mm)
{
	pMM = mm;
}


Pursuit::~Pursuit(void)
{
}

void Pursuit::GiveDolls()
{
	cout<<pMM->getName()<<"��������\n";
}

void Pursuit::GiveFlowers()
{
	cout<<pMM->getName()<<"�����ʻ�\n";
}

void Pursuit::GiveChocolate()
{
	cout<<pMM->getName()<<"�����ɿ���\n";
}

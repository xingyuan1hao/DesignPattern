#include "StdAfx.h"
#include "Suit.h"
#include <iostream>
using namespace  std;

Suit::Suit(void)
{
}


Suit::~Suit(void)
{
}

void Suit::show()
{
	cout<<"���� ";
	pComponent->show();
}
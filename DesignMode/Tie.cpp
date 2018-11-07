#include "StdAfx.h"
#include "Tie.h"
#include <iostream>
using namespace  std;

Tie::Tie(void)
{
}


Tie::~Tie(void)
{
}

void Tie::show()
{
	cout<<"Áì´ø ";
	pComponent->show();
}
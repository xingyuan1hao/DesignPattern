#include "StdAfx.h"
#include "TShirts.h"
#include <iostream>
using namespace std;

TShirts::TShirts(void)
{
}


TShirts::~TShirts(void)
{
}

void TShirts::show()
{
	cout<<"TÐô ";
	pComponent->show();
}
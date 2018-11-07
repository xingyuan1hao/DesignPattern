#include "StdAfx.h"
#include "StockObserver.h"
#include <iostream>
using namespace  std;

StockObserver::StockObserver(Subject *subject)
	:Observer(subject)
{
}


StockObserver::~StockObserver(void)
{
}

void StockObserver::Update()
{
	cout<<"Stop Watching Stock\n";
}

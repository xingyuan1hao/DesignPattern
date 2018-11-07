#include "StdAfx.h"
#include "NBAObserver.h"
#include <iostream>
using namespace std;

NBAObserver::NBAObserver(Subject *subject)
	:Observer(subject)
{
}


NBAObserver::~NBAObserver(void)
{
}

void NBAObserver::Update()
{
	cout<<"Stop Watching NBA\n";
}

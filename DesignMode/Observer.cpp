#include "StdAfx.h"
#include "Observer.h"
#include "Subject.h"
#include "Boss.h"
#include "secretary.h"
#include "NBAObserver.h"
#include "StockObserver.h"


Observer::Observer(Subject *subject)
{
	this->subject = subject;
	this->subject->Attach(this);
}


Observer::~Observer(void)
{
}

void observer()
{
	Boss boss;
	Secretary secretary;

	Observer *nbaObserver = new NBAObserver(&boss);
	Observer *stockObserver = new StockObserver(&boss);
	boss.Notify();

	boss.Detach(nbaObserver);
	boss.Notify();

}
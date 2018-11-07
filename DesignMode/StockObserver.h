#pragma once
#include "Observer.h"
class StockObserver:public Observer
{
public:
	StockObserver(Subject *subject);
	~StockObserver(void);

	virtual void Update() override;

};


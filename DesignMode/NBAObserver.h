#pragma once
#include "Observer.h"
class NBAObserver:public Observer
{
public:
	NBAObserver(Subject *subject);
	~NBAObserver(void);

	virtual void Update() override;

};


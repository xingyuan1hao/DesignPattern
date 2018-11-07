#pragma once
#include "Player.h"
class Guards:public Player
{
public:
	Guards(void);
	~Guards(void);

	virtual void Attack();

	virtual void Defense();

};


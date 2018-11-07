#pragma once
#include "Player.h"
class Center:public Player
{
public:
	Center(void);
	~Center(void);

	virtual void Attack();

	virtual void Defense();

};


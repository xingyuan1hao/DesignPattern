#pragma once
#include "Player.h"
class Forwards:public Player
{
public:
	Forwards(void);
	~Forwards(void);

	virtual void Attack();

	virtual void Defense();

};


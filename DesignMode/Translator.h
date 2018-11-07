#pragma once
#include "ForeignCenter.h"
#include "Player.h"
class Translator:public Player
{
public:
	Translator(void);
	~Translator(void);

	virtual void Attack();

	virtual void Defense();

private:
	ForeignCenter foreignCenter;
};


#pragma once
class Player
{
public:
	Player(void);
	~Player(void);
public:
	virtual void Attack() = 0;
	virtual void Defense() = 0;
};


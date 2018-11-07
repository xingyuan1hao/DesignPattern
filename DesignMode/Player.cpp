#include "StdAfx.h"
#include "Player.h"
#include "Center.h"
#include "Forwards.h"
#include "Guards.h"
#include "Translator.h"


Player::Player(void)
{
}


Player::~Player(void)
{
}

void adapter()
{
	Player *p1 = new Center();
	Player *p2 = new Forwards();
	Player *p3 = new Guards();
	Player *p4 = new Translator();

	p1->Attack();
	p2->Attack();
	p3->Attack();
	p2->Attack();

}
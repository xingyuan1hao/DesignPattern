#include "StdAfx.h"
#include "GameRole.h"
#include "RoleStateMemento.h"
#include "RoleStateCareTaker.h"


GameRole::GameRole(void)
{
	this->vit = 100;
	this->atk = 100;
	this->def = 100;
}


GameRole::~GameRole(void)
{
}

void GameRole::BeatBoss()
{
	this->vit = 0;
	this->atk = 0;
	this->def = 0;
}

RoleStateMemento* GameRole::SaveState()
{
	return new RoleStateMemento(vit,atk,def);
}

void GameRole::RestoreRoleState(RoleStateMemento *roleSateMemento)
{
	this->vit = roleSateMemento->GetVit();
	this->atk = roleSateMemento->GetAtk();
	this->def = roleSateMemento->GetDef();
}


void memento()
{
	GameRole gameRole;
	RoleStateCareTaker roleStateCareTaker;
	roleStateCareTaker.SetMemento(gameRole.SaveState());

	gameRole.BeatBoss();

	gameRole.RestoreRoleState(roleStateCareTaker.GetMemento());


}
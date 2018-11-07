#pragma once

class RoleStateMemento;
class GameRole
{
public:
	GameRole(void);
	~GameRole(void);
	void BeatBoss();
	RoleStateMemento* SaveState();
	void RestoreRoleState(RoleStateMemento *roleSateMemento);
private:
	int vit;
	int atk;
	int def;
};


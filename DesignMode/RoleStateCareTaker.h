#pragma once
class RoleStateMemento;
class RoleStateCareTaker
{
public:
	RoleStateCareTaker(void);
	~RoleStateCareTaker(void);
	RoleStateMemento* GetMemento();
	void SetMemento(RoleStateMemento *roleStateMemento);
private:
	RoleStateMemento *roleStateMemento;
};


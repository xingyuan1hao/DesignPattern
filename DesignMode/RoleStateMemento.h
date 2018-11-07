#pragma once
class RoleStateMemento
{
public:
	RoleStateMemento(int vit,int atk,int def);
	~RoleStateMemento(void);
	int GetVit();
	int GetAtk();
	int GetDef();
private:
	int vit;
	int atk;
	int def;
};


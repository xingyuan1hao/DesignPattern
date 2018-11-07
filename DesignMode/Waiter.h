#pragma once
class Command;
class Waiter
{
private:
	vector<Command*>orders;
public:
	Waiter(void);
	~Waiter(void);
	void SetOrder(Command *command);
	void CancelOrder(Command *command);
	void Notify();
};


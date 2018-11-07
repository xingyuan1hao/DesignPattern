#pragma once
class Observer;
#include <vector>
using namespace  std;

class Subject
{
public:
	Subject(void);
	~Subject(void);
	void Attach( Observer *observer);
	void Detach(Observer *observer);
	void Notify();
private:
	vector<Observer*>observers;
};


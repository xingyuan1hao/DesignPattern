#pragma once
class PlayContext;
class Expression
{
public:
	Expression(void);
	~Expression(void);
	void Interpret(PlayContext *context);
	virtual void Execute(string key,double value) = 0;
};


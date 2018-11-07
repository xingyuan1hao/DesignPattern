#pragma once
#include "TestPaper.h"
class TestPaperConcreteA:public TestPaper
{
public:
	TestPaperConcreteA(void);
	~TestPaperConcreteA(void);

	virtual char* AnswerA();

	virtual char* AnswerB();

	virtual char* AnswerC();

	virtual char* AnswerD();

};

class TestPaperConcreteB:public TestPaper
{
public:
	TestPaperConcreteB(void);
	~TestPaperConcreteB(void);

	virtual char* AnswerA();

	virtual char* AnswerB();

	virtual char* AnswerC();

	virtual char* AnswerD();

};


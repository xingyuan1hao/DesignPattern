#pragma once
class TestPaper
{
public:
	TestPaper(void);
	~TestPaper(void);
private:
	void QuestionA();
	void QuestionB();
	void QuestionC();
	void QuestionD();
protected:
	virtual char*AnswerA() = 0;
	virtual char*AnswerB() = 0;
	virtual char*AnswerC() = 0;
	virtual char*AnswerD() = 0;

};


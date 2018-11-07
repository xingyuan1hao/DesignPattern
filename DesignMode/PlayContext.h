#pragma once
class PlayContext
{
private:
	string text;
public:
	PlayContext(void);
	~PlayContext(void);
	void SetText(string text);
	string GetText();
};


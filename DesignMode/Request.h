#pragma once
enum requestType
{
	leave,
	raises
};

class Request
{
public:
	Request(requestType rt,string requestContent,int number);
	~Request(void);
	requestType GetRequestType();
	string GetRequestContent();
	int GetRequestNumber();

private:
	requestType rt;
	string requestContent;
	int number;
};


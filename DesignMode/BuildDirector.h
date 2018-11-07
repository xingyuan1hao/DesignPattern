#pragma once
class Builder;
class BuildDirector
{
public:
	BuildDirector(void);
	~BuildDirector(void);
	void SetBuilder(Builder *builder);
	void Build();
private:
	Builder *builder;
};


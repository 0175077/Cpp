#pragma once
#include <stdio.h>

class C_OBSERVER abstract
{
public:
	virtual void notify() abstract;
};

class C_TV : public C_OBSERVER
{
public:
	void notify() override;
};

class C_RADIO : public C_OBSERVER
{
public:
	void notify() override;
};


class C_PAPPER : public C_OBSERVER
{
public:
	void notify() override;
};
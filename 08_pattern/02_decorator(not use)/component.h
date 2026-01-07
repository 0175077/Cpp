#pragma once

#include <stdio.h>
#include <string>

class C_COMPONENT abstract
{
protected:
	std::string m_str;
	int m_nCost;

public:
	C_COMPONENT() = default;
	virtual ~C_COMPONENT() = default;
	virtual void printStr() abstract;
	virtual int Cost() abstract;
};

class C_ESPRESSO : public C_COMPONENT
{

public:
	C_ESPRESSO()
	{
		m_str = "에스프레소";
		m_nCost = 1000;
	}

	// C_COMPONENT을(를) 통해 상속됨
	void printStr() override;
	int Cost() override;
};

class C_COLDBREW : public C_COMPONENT
{
public:
	C_COLDBREW()
	{
		m_str = "콜드브루";
		m_nCost = 2000;
	}

	// C_COMPONENT을(를) 통해 상속됨
	void printStr() override;
	int Cost() override;
};
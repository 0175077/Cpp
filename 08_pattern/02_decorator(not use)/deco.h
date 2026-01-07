#pragma once

#include "component.h"

class C_DECO : public C_COMPONENT
{
protected:
	C_COMPONENT* m_pComp;

public:
	C_DECO(C_COMPONENT* pComp);
	~C_DECO();
};

class C_WHIP : public C_DECO
{
public:
	C_WHIP(C_COMPONENT* pComp);


	// C_DECO을(를) 통해 상속됨
	void printStr() override;

	int Cost() override;

};

class C_SYRUP : public C_DECO
{
public:
	C_SYRUP(C_COMPONENT* pComp);

	// C_DECO을(를) 통해 상속됨
	void printStr() override;
	int Cost() override;
};
#pragma once

#include <stdio.h>
#include "unit.h"

class C_ABSTRACT_FACTORY abstract
{
public:
	C_ABSTRACT_FACTORY() = default;
	virtual ~C_ABSTRACT_FACTORY() = default;
	virtual C_UNIT* createBtn1() abstract;
	virtual C_UNIT* createBtn2() abstract;
};


// 상속 받기

class C_BARRACKS : public C_ABSTRACT_FACTORY
{
public:

	// C_ABSTRACT_FACTORY을(를) 통해 상속됨
	C_UNIT* createBtn1() override;
	C_UNIT* createBtn2() override;
};

class C_FACTORY : public C_ABSTRACT_FACTORY
{
public:


	// C_ABSTRACT_FACTORY을(를) 통해 상속됨
	C_UNIT* createBtn1() override;

	C_UNIT* createBtn2() override;

};
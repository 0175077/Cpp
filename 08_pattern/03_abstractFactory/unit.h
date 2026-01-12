#pragma once

#include "unit.h"
#include <stdio.h>

class C_UNIT abstract
{
public:
	C_UNIT() = default;
	virtual ~C_UNIT() = default;
	virtual void move() abstract;
	virtual void attack() abstract;

};

class C_MARINE : public C_UNIT
{
public:


	// C_UNIT을(를) 통해 상속됨
	void move() override;

	void attack() override;

};

class C_TANK : public C_UNIT
{
public:


	// C_UNIT을(를) 통해 상속됨
	void move() override;

	void attack() override;

};
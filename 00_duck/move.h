#pragma once

#include <stdio.h>


__interface I_MOVE
{
public:
	void move();
};

class C_MOVE abstract : public I_MOVE
{
public:
	C_MOVE() = default;
	virtual ~C_MOVE() = default;
}; 
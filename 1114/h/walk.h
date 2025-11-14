#pragma once

#include "move.h"

class C_WALK : public C_MOVE
{
public:
	// C_MOVE을(를) 통해 상속됨
	void move() override;
};
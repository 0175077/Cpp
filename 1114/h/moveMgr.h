#pragma once

#include "move.h"

class C_MOVEMGR
{
public:
	enum class E_TYPE
	{
		E_NONE = 0,
		E_WALK,
		E_FLY,

		E_MAX
	};

private:
	C_MOVE* m_arMove[(int)E_TYPE::E_MAX];

public:
	C_MOVEMGR() = default;
	void init();
	void release();

	C_MOVE* getMove(E_TYPE eType);
};

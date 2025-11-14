#include "moveMgr.h"
#include "walk.h"
#include "fly.h"

void C_MOVEMGR::init()
{
	m_arMove[(int)E_TYPE::E_WALK] = new C_WALK{};
	m_arMove[(int)E_TYPE::E_FLY] = new C_FLY{};

}


void C_MOVEMGR::release()
{
	for (int i = 0; i < (int)E_TYPE::E_MAX; i++)
	{
		if (m_arMove[i])
		{
			delete m_arMove[i];
			m_arMove[i] = nullptr;
		}
	}
}

C_MOVE* C_MOVEMGR::getMove(E_TYPE eType)
{
	return m_arMove[(int)eType];
}

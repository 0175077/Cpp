#include "list.h"

C_LIST::C_LIST():
	m_pBegin{},
	m_pEnd{},
	m_cDummyBegin{},
	m_cDummyEnd{}
{ 
	m_pBegin = &m_cDummyBegin;
	m_pEnd = &m_cDummyEnd;

	m_pBegin->m_pNext = m_pEnd;
	m_pEnd->m_pPrev = m_pBegin;
}
void C_LIST::pushBack(int nData)
{
}

void C_LIST::pushFront(int nData)
{
}

void C_LIST::popBack()
{
}

void C_LIST::popFront()
{
}

C_NODE* C_LIST::getBegin()
{
	return m_pBegin->m_pNext;
}

C_NODE* C_LIST::getEnd()
{
	return m_pEnd;
}

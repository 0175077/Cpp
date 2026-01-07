#include "deco.h"

C_DECO::C_DECO(C_COMPONENT* pComp) :
	m_pComp{}
{
	m_pComp = pComp;
}

C_WHIP::C_WHIP(C_COMPONENT* pComp) :
	C_DECO(pComp)
{
	m_str = "휘핑";
	m_nCost = 300;
}

void C_WHIP::printStr()
{
	m_pComp->printStr();
	printf("%s\n", m_str.c_str());
}

int C_WHIP::Cost()
{
	return m_pComp->Cost() + m_nCost;
}

C_SYRUP::C_SYRUP(C_COMPONENT* pComp) :
	C_DECO(pComp)
{
	m_str = "시럽";
	m_nCost = 500;
}

void C_SYRUP::printStr()
{
	m_pComp->printStr();
	printf("%s\n", m_str.c_str());
}

int C_SYRUP::Cost()
{
	return m_pComp->Cost() + m_nCost;
}

#include "component.h"

void C_ESPRESSO::printStr()
{
	printf("%s\n", m_str.c_str());
}

int C_ESPRESSO::Cost()
{
	return m_nCost;
}

void C_COLDBREW::printStr()
{
	printf("%s\n", m_str.c_str());
}

int C_COLDBREW::Cost()
{
	return m_nCost;
}

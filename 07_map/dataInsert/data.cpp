#include "data.h"
#include "dataMgr.h"

void C_DATA::init(const char* strName, int nData)
{
	m_strName = strName;
	m_nData = nData;
}

void C_DATA::print()
{
	printf("%s, %d\n", m_strName.c_str(), m_nData);
}

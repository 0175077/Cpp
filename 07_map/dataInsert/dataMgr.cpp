#include "dataMgr.h"

C_DATA* C_DATAMGR::createData(const char* strName, int nData)
{
	C_DATA* pData = new C_DATA();
	pData->init(strName, nData);

	return pData;
}

bool C_DATAMGR::add(const char* strName, int nData)
{
	std::pair<std::map<std::string, C_DATA*>::iterator, bool> pairResult{};
	pairResult = m_mapData.insert({ strName , nullptr });

	if (!pairResult.second)
		return false;

	pairResult.first->second = createData(strName, nData);

	return true;
}

bool C_DATAMGR::erase(const char* strName)
{
	std::map<std::string, C_DATA*>::iterator iterFind = m_mapData.find(strName);

	if (iterFind == m_mapData.end())
		return false;

	delete iterFind->second;
	m_mapData.erase(strName);

	return true;
}

C_DATA* C_DATAMGR::find(const char* strName)
{

}


void C_DATAMGR::print()
{
	std::map<std::string, C_DATA*>::iterator iter = m_mapData.begin();
	while (iter != m_mapData.end())
	{
		iter->second->print();
		iter++;
	}
}



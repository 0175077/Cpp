#pragma once

#include <map>
#include "data.h"

class C_DATAMGR
{
private:
	std::map<std::string, C_DATA*> m_mapData;

private:
	C_DATA* createData(const char* strName, int nData);

public:
	C_DATAMGR() = default;
	bool add(const char* strName, int nData);
	bool erase(const char* strName);
	C_DATA* find(const char* strName);
	void print();
};
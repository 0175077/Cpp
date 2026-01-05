#pragma once

#include <string>

class C_DATA
{
private:
	std::string m_strName;
	int m_nData;

public:
	C_DATA() = default;
	void init(const char* strName, int nData);
	void print();
};
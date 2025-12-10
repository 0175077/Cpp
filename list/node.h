#pragma once

class C_LIST;

class C_NODE
{
	friend C_LIST;
private:
	int m_nData;
	C_NODE* m_pNext;
	C_NODE* m_pPrev;

private:
	C_NODE() = default;

public:
	C_NODE() = default;
	int getData();
	C_NODE* getNext();
};
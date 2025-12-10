#pragma once

#include "node.h"

class C_LIST
{
private:
	C_NODE* m_pBegin;
	C_NODE* m_pEnd;

	C_NODE m_cDummyBegin;
	C_NODE m_cDummyEnd;

private:
	C_NODE* createNode(int nData);

	void linkNode(C_NODE* pPrev, C_NODE* pNext);
public:
	C_LIST();
	void pushBack(int nData);
	void pushFront(int nData);
	void popBack();
	void popFront();
	C_NODE* getBegin();
	C_NODE* getEnd();
};
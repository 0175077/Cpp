#pragma once

#include<stdio.h>

class C_BST
{
private:
	struct S_NODE
	{
		int nData;
		S_NODE* pL;
		S_NODE* pR;
	};


private:
	S_NODE* m_pRoot;

	void printNode(S_NODE* pNode);
	S_NODE* createNode(int nData);
public:
	C_BST() = default;
	bool insert(int nData);

	void print();
};
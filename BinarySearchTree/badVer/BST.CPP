#include "bst.h"

void C_BST::printNode(S_NODE* pNode)
{
	if (!pNode)
		return;

	printf("%d ", pNode->nData);
	printNode(pNode->pL);
	printNode(pNode->pR);
}

C_BST::S_NODE* C_BST::createNode(int nData)
{
	S_NODE* pNode = new S_NODE{};
	pNode->nData = nData;

	return pNode;
}

bool C_BST::insert(int nData)
{
	// 루프문을 이용한다
	// 재귀함수로 만들어본다
	return false;
}

void C_BST::print()
{
	printNode(m_pRoot);
	printf("\n");
}

#include "subject.h"

bool C_SUBJECT::registerObserver(C_OBSERVER* pObserver)
{
	return m_listObserver.insert(pObserver).second;
}

void C_SUBJECT::unRegisterObserver(C_OBSERVER* pObserver)
{
	m_listObserver.erase(pObserver);
}

void C_SUBJECT::notifyObserver()
{
	printf("----------------------------------------------\n");
	std::set<C_OBSERVER*>::iterator iter = m_listObserver.begin();
	while (iter != m_listObserver.end())
	{
		(*iter)->notify();
		iter++;
	}
}

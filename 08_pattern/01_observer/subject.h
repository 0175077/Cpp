#pragma once

#include <set>

#include "observer.h"

class C_SUBJECT
{
private:
	std::set<C_OBSERVER*> m_listObserver;

	

public:
	C_SUBJECT() = default;
	bool registerObserver(C_OBSERVER* pObserver);
	void unRegisterObserver(C_OBSERVER* pObserver);
	void notifyObserver();

	
};
#include <iostream>
#include "moveMgr.h"



int main()
{ 
	C_MOVEMGR cMgr{};
	C_MOVE* p{};

	cMgr.init();

	p = cMgr.getMove(C_MOVEMGR::E_TYPE::E_FLY);

	p->move();

	cMgr.release();
}
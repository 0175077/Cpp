#include "unit.h"
#include "abstractFactory.h"


C_UNIT* C_BARRACKS::createBtn1()
{
	C_MARINE* pUnit = new C_MARINE{};
	
	return pUnit;
}

C_UNIT* C_BARRACKS::createBtn2()
{
	return nullptr;
}

C_UNIT* C_FACTORY::createBtn1()
{
	C_TANK* pUnit = new C_TANK{};

	return pUnit;
}

C_UNIT* C_FACTORY::createBtn2()
{
	return nullptr;
}

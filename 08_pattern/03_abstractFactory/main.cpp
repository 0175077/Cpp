#include <iostream>
#include "abstractFactory.h"

int main()
{
    C_ABSTRACT_FACTORY* pFactory{};
    C_UNIT* pUnit{};

    pFactory = new C_BARRACKS{};

    pUnit = pFactory->createBtn1();
    pUnit->attack();
    pUnit->move();
}

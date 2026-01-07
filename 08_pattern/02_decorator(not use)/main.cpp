#include <iostream>
#include "component.h"
#include "deco.h"

int main()
{
    C_COMPONENT* pComp1 = new C_ESPRESSO{};
    
    pComp1 = new C_WHIP(pComp1);
    pComp1->printStr();
    printf("%d\n", pComp1->Cost());


    printf("-------------------------\n");

    C_COMPONENT* pComp2 = new C_COLDBREW{};
    pComp2 = new C_SYRUP(pComp2);
    pComp2->printStr();
    printf("%d\n", pComp2->Cost());

}
#include <iostream>
#include "subject.h"


int main()
{
    C_OBSERVER* p1 = new C_PAPPER{};
    C_OBSERVER* p2 = new C_RADIO{};
    C_OBSERVER* p3 = new C_TV{};

    C_SUBJECT cSubject{};

    cSubject.registerObserver(p1);

    cSubject.notifyObserver();
}                                                                                                              
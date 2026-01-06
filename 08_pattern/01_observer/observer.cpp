#include "observer.h"

void C_TV::notify()
{
	printf("화면에 출력\n");
}

void C_RADIO::notify()
{
	printf("소리로 출력\n");
}

void C_PAPPER::notify()
{
	printf("글자로 출력\n");
}

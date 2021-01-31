#include "../commonDrv.h"
#ifdef mcu_tc264
void myDelayMS(uint64_t t)
{
}

void myDelayUS(uint64_t t)
{
}

extern uint64_t SysMs;
uint64_t myGetMS()
{
	return SysMs;
}

void myCommonInit()
{
}

void myPrint(const char *str)
{
}
#endif

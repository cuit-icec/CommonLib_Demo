#include "../commonDrv.h"
#ifdef mcu_stm32h7_hal
void myDelayMS(uint64_t t)
{
	HAL_Delay(t);
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

#include "../ClassKeypad.h"

#ifdef service_input_keypad
#ifdef mcu_stm32h7_hal

#include "myLib/drv/nativeInterface.h"

#define row1_gpio GPIOA, GPIO_PIN_1
#define row2_gpio GPIOA, GPIO_PIN_2
#define row3_gpio GPIOA, GPIO_PIN_3
#define row4_gpio GPIOA, GPIO_PIN_4

#define col1_gpio GPIOA, GPIO_PIN_5
#define col2_gpio GPIOA, GPIO_PIN_6
#define col3_gpio GPIOA, GPIO_PIN_7
#define col4_gpio GPIOA, GPIO_PIN_8

void ClassKeypad::writeRow(char index, char state)
{
}

char ClassKeypad::readCol(char index)
{
}

#endif
#endif

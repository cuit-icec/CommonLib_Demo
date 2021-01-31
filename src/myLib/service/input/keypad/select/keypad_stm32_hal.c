#include "../keypad_drv.h"

#ifdef service_input_keypad
#ifdef mcu_stm32_hal
#include "myLib/drv/nativeInterface.h"

#define row1_gpio GPIOA, GPIO_PIN_1
#define row2_gpio GPIOA
#define row3_gpio GPIOA
#define row4_gpio GPIOA

#define col1_gpio GPIOA
#define col2_gpio GPIOA
#define col3_gpio GPIOA
#define col4_gpio GPIOA

void writeRow(char index, char state)
{
    switch (index)
    {
    case 0:

        /* code */
        break;

    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    }
}
void writeCol(char index, char state)
{
}
#endif
#endif

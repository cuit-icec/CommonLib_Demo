#include "keypad.h"
#include "keypad_drv.h"
#ifdef service_input_keypad
namespace keypad
{
    void init(void (*callback)(unsigned char x, unsigned char y))
    {
    }
    void scan()
    {
        drv::readCol(1);
    }
} // namespace keypad
#endif
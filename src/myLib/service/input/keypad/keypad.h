#include "myLib/drv/baseDrv/baseDrv.h"

#ifdef service_input_keypad
namespace keypad
{
    void init(void (*callback)(unsigned char x, unsigned char y));
    void scan();
} // namespace keypad

#endif

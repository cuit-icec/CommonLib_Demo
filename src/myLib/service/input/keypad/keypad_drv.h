#include "myLib/drv/baseDrv/baseDrv.h"

#ifdef service_input_keypad
namespace keypad
{
    namespace drv
    {
        void writeRow(char index, char state);
        char readCol(char index);
    } // namespace drv
} // namespace keypad

#endif

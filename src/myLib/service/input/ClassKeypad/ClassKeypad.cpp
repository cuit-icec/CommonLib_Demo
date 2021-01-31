#include "ClassKeypad.h"
#ifdef service_input_keypad
ClassKeypad::ClassKeypad(/* args */)
{
}

ClassKeypad *ClassKeypad::getInstance()
{
    static ClassKeypad classKeypad;
    return &classKeypad;
}

void ClassKeypad::init(void (*callback)(unsigned char x, unsigned char y))
{
}

void ClassKeypad::scan()
{
    this->readCol(1);
    readCol(1);
}
#endif

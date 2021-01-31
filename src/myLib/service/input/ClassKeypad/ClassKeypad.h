#include "myLib/drv/baseDrv/baseDrv.h"

#ifdef service_input_keypad
class ClassKeypad
{
private:
    /* data */
    void writeRow(char index, char state);
    char readCol(char index);

public:
    ClassKeypad(/* args */);
    static ClassKeypad *getInstance();
    void init(void (*callback)(unsigned char x, unsigned char y));
    void scan();
};

#endif

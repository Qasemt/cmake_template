
#include "lib_helper.h"

void Lib_Helper::add(int x, int y)
{
    gx = x;
    gy = y;
}

int Lib_Helper::getSum()
{
    return gx + gy;
}
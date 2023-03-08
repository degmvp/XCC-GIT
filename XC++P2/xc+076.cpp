/*
---------------------------------------
# ✅ xc+076
# ✅ C++ criado: 2021/03/31
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+076]
AS
/*
#include <iostream>
#include <random>
using namespace std;
void fmt_binary(int value);
void print_binary(unsigned value);
int main(void)
{
    for (int value = 2; value < 1024; value = value * 3 + 1)
        fmt_binary(value);
    fmt_binary(2);
    fmt_binary(255);
    fmt_binary(32);
    fmt_binary(-1);
    fmt_binary(-255);
    return 0;
}
void fmt_binary(int value)
{
    printf("Binary representation of %3d: ", value);
    print_binary((unsigned)value);
    putchar('\n');
}
void print_binary(unsigned value)
{
    unsigned bit_mask = 0x80000000;  // 2147483648

    while (bit_mask > 0)
    {
        if ((value & bit_mask) == 0)
            printf("0");
        else
            printf("1");
        bit_mask >>= 1;
    }
}

*/
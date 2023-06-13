#include <REG51.H>
#include <intrins.h> 

void Delay(unsigned int t) // ÑÓ³Ùº¯Êý
{
    unsigned char i, j;
    while (t > 0) {
        i = 2;
        j = 239;
        do {
            while (--j)
                ;
        } while (--i);
        t--;
    }
}

void main()
{
    unsigned char i;
    P2 = 0XFE;
    while (1) {
        for (i = 0; i < 8; i++) {
            P2 =_crol_(P2,1);;
            Delay(500);
        }
    }
}
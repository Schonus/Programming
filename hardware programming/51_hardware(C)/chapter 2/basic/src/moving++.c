#include <REG52.H>
#include <intrins.h>
void Delayms(unsigned int xms)		//@11.0592MHz
{
	unsigned char data i, j, k;
    while (xms)
    {
        unsigned char data i, j;
        _nop_();
        i = 2;
        j = 198;
        do
        {
            while (--j);
        } while (--i);
        xms--;
    }


}


void main(){
    unsigned char i = 0XFF;
    unsigned char j = 0X01;
    while(1){
        P2 = i ^ j;
        j*=2;
        Delayms(98);
        if(j==0)
        {
            j = 1;
        }
    }
}


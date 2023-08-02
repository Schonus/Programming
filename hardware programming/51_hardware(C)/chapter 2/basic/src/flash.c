#include <REG52.H>
#include <intrins.h>
void Delay500ms()		//@11.0592MHz
{
	unsigned char data i, j, k;

	 _nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main(){
    while(1){
        P2 = 0x5D;
        Delay500ms();
        P2 = 0xD5;
        Delay500ms();
    }
}



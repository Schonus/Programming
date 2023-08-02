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
    unsigned char i = 0XFF;
    unsigned char j = 0X01;
    while(1){
        P2 = i ^ j;
        j*=2;
        Delay500ms();
        if(j==0)
        if(j==0)
        {
            j = 1;
        }
    }
}


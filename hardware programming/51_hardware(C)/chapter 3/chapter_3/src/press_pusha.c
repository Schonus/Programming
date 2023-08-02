#include <REG52.h>

void Delay(unsigned int sms)
{
	unsigned char data i, j;
    while (sms--)
    {
            i = 2;
            j = 199;
            do
            {
                while (--j);
            } while (--i);
    }
}


void main(){
    while (1)
    {
        if (!P3_0)
        {
            Delay(20);//一个按键周期的等待
            while (!P3_0);
            Delay(20);
            P2_0 = !P2_0;
        }
    }
}
#include <REG52.H>
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
    unsigned char LEDNum = 0;
    while (1)
    {
        if(P3_1 == 0){
            Delay(20);
            while(0 == P3_1);
            Delay(20);
            LEDNum++;
            P2=~LEDNum;
        }
    }
    
}
#ifndef __try_h__
#define __try_h__
unsigned char number[10] = {0x3F,0X06,0X5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void Delay(unsigned int sms);
void Nixie(unsigned char Location,unsigned char Number);

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

void Nixie(unsigned char Location,unsigned char Number)
{
    P0 = 0;
    switch (Location)
    {
    case 1:
        P2_4=1;
        P2_3=1;
        P2_2=1;
        break;
    case 2:
        P2_4=1;
        P2_3=1;
        P2_2=0;
        break;
    case 3:
        P2_4=1;
        P2_3=0;
        P2_2=1;
        break;
    case 4:
        P2_4=1;
        P2_3=0;
        P2_2=0;
        break;
    case 5:
        P2_4=0;
        P2_3=1;
        P2_2=1;
        break;
    case 6:
        P2_4=0;
        P2_3=1;
        P2_2=0;
        break;
    case 7:
        P2_4=0;
        P2_3=0;
        P2_2=1;
        break;
    case 8:
        P2_4=0;
        P2_3=0;
        P2_2=0;
        break;
    }
    if(Number<=10){
        P0 = number[Number];
    }
}
#endif // !1

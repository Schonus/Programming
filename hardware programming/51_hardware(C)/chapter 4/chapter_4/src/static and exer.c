#include <REG52.H>
unsigned char number[10] = {0x3F,0X06,0X5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

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

void main(){
    unsigned char group_count=1;
    unsigned char count=0;
    Nixie(group_count,count);
    while (1)
    {
        if(P3_0 == 0)
        {
            Delay(20);
            while (P3_0 == 0);
            Delay(20);
            if(++count >= 10)
            {count = 0;}
            Nixie(group_count,count);
        }
        if(P3_1 == 0)
        {
            Delay(20);
            while (P3_1 == 0);
            Delay(20);
            if(count <= 0)
            {count = 10;}
            count--;
            Nixie(group_count,count);
        }
        if(P3_3 == 0)
        {
            Delay(20);
            while (P3_3 == 0);
            Delay(20);
            if(++group_count >= 9)
            {group_count = 1;}
            Nixie(group_count,count);
        }
        if(P3_2 == 0)
        {
            Delay(20);
            while (P3_2 == 0);
            Delay(20);
            if(--group_count <= 0)
            {group_count = 8;}
            Nixie(group_count,count);
        }
    }
    
}
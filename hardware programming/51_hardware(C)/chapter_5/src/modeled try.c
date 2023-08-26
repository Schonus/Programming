#include <REG52.H>
#include "try.h"

void main(){
    unsigned char group_count=1;
    unsigned char count=0;
    while (1)
    {
        group_count=1;
        count=1;
        Nixie(group_count,count);
        group_count=2;
        count=9;
        Nixie(group_count,count);
        group_count=3;
        count=9;
        Nixie(group_count,count);
        group_count=4;
        count=7;
        Nixie(group_count,count);
        group_count=5;
        count=0;
        Nixie(group_count,count);
        group_count=6;
        count=5;
        Nixie(group_count,count);
        group_count=7;
        count=2;
        Nixie(group_count,count);
        group_count=8;
        count=8;
        Nixie(group_count,count);
        
    }
    
}
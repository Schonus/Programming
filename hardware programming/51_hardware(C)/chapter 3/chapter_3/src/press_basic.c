#include <REG52.h>
void main(){
    // P2 = 0xFE;
    P2_2 = 1;
    while(1){
        if(P3_1 == 0)
        {
            P2_2 = 0;
        }
        else{
            P2_2 = 1;
            P2_2 = 1;
        }
    }
}
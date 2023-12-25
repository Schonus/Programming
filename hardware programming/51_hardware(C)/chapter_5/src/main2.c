#include <REG52.H>
#include "LCD1602.h"
#include "delay.h"
int Result = 0;
void main(){
    LCD_Init();
    while(1){
        LCD_ShowNum(1,1,Result,4);
        Delay(1000);
        Result++;
    };
}
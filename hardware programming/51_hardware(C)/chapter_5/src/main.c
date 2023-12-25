#include <REG52.h>
#include "LCD1602.h"
void main(){
    LCD_Init();
    LCD_ShowChar(1,1,'A');
    LCD_ShowString(1,3,"Hello!");
    LCD_ShowNum(2,1,10086,5);//第四位填显示的位数
    LCD_ShowSignedNum(1,11,-123,4);//显示有符号数字
    LCD_ShowHexNum(2,7,255,2);//显示16进制数
    LCD_ShowBinNum(2,10,8,4);//显示2进制数
    while(1){};
}
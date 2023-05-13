#include <stdio.h>
int main(){
    int number=0,number2=10;
    scanf("%d",&number);
    int number3=number;
    while(number){
        number2=number2*10+number%10;
        number/=10;
    }
    if (number2==number3){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
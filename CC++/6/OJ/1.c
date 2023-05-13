#include <stdio.h>

void divided_by_two(int *number){
    *number/=2;
}

int main(){
    int number;
    printf("Which number do you want to divided?\n");
    scanf("%d", &number);
    divided_by_two(&number);
    printf("%d",number);
    return 0;
}
#include <stdio.h>
int main(){
    int year=0;
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    return 0;
}
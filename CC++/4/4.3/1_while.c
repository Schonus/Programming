#include <stdio.h>
int main(){
    int i=1,total=0;
    while (i<=100)
    {
        total=total+i;
        i++;
    }
    printf("%d",total);
    return 0;
}
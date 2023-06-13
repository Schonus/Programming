#include <stdio.h>
int main(){
    int a = 0 ;
    int b = (a = 54);
    printf("%d",b);
    return 0;
}
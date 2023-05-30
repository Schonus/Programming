#include <stdio.h>
void changing(int *x)
{
    while (*x<1000)
    {
        *x*=2;
    }
}
int main(){
    int x=1;
    printf("The number before change is %d\n",x);
    changing(&x);
    printf("The number before change is %d\n",x);
    return 0;
}
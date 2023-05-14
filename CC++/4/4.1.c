#include <stdio.h>
int main(){
    int iNumber = 0;
    while (scanf("%d",&iNumber))
    {
        if (iNumber > 0)
        {
            printf("i is bigger than 0\n");
        }
        else
        {
            printf("i is not bigger than 0\n");
        }
    }
    return 0;
}
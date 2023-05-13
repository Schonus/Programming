#include <stdio.h>
int main(){
    int total=0;
    for(int i=0;;total+=i)
    {
        if (++i<=100)
        {
            continue;
        }
        else
        {
            i--;
            break;
        }
        
    };
    printf("%d\n",total);
    return 0;
}
#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    for(int s=1;!(n>0?0:printf("%d",s));s*=n--);
    // printf("%d",s);
    return 0;
}
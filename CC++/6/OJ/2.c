#include <stdio.h>
#include <stdlib.h>
char *output(int count)
{
    char tempt;
    char *c=malloc(count);
    scanf("%c",&tempt);
    fgets(c,count,stdin);
    return c;
}

int main(){
    char *p;
    int count=0;
    scanf("%d",&count);
    p=output(count);
    puts(p);
    free(p);
}
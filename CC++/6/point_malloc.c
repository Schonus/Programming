#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int size=0;
    char *p;
    printf("输入要申请的空间大小：\n");
    scanf("%d",&size);    
    p=(char*)malloc(size);
    strcpy(p,"malloc success");
    puts(p);
    free(p);
    printf("free success\n");
    return 0;
}
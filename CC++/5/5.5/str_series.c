#include <stdio.h>
#include <string.h>

/*
    int mystrlen(char c[]){
        int i=-1;
        while(c[++i]){}
        return i;
    }
*/

int main(){
    int len;
    char c[20];
    char d[100]="world";
    gets(c);
    puts(c);
    /*
        len=strlen(c);
        printf("len=%d\n",len);
        len=mystrlen(c);
        printf("len=%d\n",len);
        return 0;
    */
    printf("%s\n",strcat(c,d));
    printf("\n\n%d\n\n",strcmp(d,c));
    strcpy(c,d);
    printf("%s",c);
}
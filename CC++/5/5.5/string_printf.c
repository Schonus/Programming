#include <stdio.h>
void print(char str2[]){
    int i=0;
    while (str2[i])
    {
        printf("%c",str2[i++]);
    }
    printf("\n");
}
int main(){
    char str1[12]="I am happy!";
    char str2[5]="how";
    printf("%s\n",str2);
    return 0;
}
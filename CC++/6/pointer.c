#include <stdio.h>
int main(){
    int i=5;
    int *i_pointer=&i;
    printf("%d\n",*i_pointer);
    i=29;
    printf("%d\n",*i_pointer);
    return 0;
}
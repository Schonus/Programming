#include <stdio.h>
void mod(int *&p,int *q){

    p = q;
};

int main(){
    int *p = NULL;
    int i = 10;
    int *q = &i;
    mod(p,q);
    printf("after modify_pointer *p = %d\n",*p);
    return 0;
}
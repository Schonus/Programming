#include <stdio.h>
void step(int i,int *result){
    if (i==1)
    {
        *result+=1;
    }
    else if (i==2)
    {
        *result+=2;
    }
    else{
        printf("%d\n",*result);
        step(i-1,result);
        step(i-2,result);
    }    
}
void recursion(int i,int* result){
    *result = *result * i;
    if(i!=1){
        recursion( i-1 ,result);
    }
}

int main(){
    int i=0,result=1;
    scanf("%d",&i);
    recursion(i,&result);
    printf("%d\n",result);
    result=0;
     scanf("%d",&i);
    step(i,&result);
    return 0;
}
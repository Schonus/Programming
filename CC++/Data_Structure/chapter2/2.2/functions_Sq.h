#include <stdio.h>
#define Maxsize 20
typedef struct 
{
    int data[Maxsize];
    int length;
}Sqlist;

void Initlist(Sqlist *L)
{
    for(int i=0;i<Maxsize;i++)
    {
        L->data[i] = 0;
    }
    L->length = 0;
}

int ListDelete(Sqlist *L,int i,int *e){
    if(i<1 || i > L->length){
        return 0;
    }
    *e = L->data[i-1];
    for(int j = i;j < L->length; j++){
        L->data[j-1] = L->data[j];
    }
    L->data[L->length-1] = 0;
    L->length-=1;
    return 1;
}

int ListInsert(Sqlist *L,int i,int e)
{
    if(i < 1 || i > L->length+1 || L->length >= Maxsize){
        return 0;
    }
    for(int j = L->length;j >= i ; j--){
        L->data[j] = L->data[j-1];
    }
    L->data[i-1] = e;
    L->length++;
    return 1;
}

void result_display(Sqlist *L){
    for (int j = 0;j < L->length;j++){
        printf("%d ",L->data[j]);
    }
}
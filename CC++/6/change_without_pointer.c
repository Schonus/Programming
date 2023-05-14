#include <stdio.h>
void change(int *pointer)
{
    *pointer=24;
}

int main()
{
    int i=10;
    int *pointer=&i;
    change(pointer);
    printf("%d",i);
}
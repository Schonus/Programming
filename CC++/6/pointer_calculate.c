#include <stdio.h>
#define N 5
int main(){
    int a[N]={1,2,3,4,5};
    int *p;
    int i;
    p=a;
    for(i=0;i<N;i++){
        printf("%3d",*(p+i));
        printf("\n");
        printf("%d",(p+i));
    }
    printf("\n___________\n");
    p=&a[4];
    for(i=0;i<N;i++){
        printf("%3d",*(p-i));
    }
    return 0;
}
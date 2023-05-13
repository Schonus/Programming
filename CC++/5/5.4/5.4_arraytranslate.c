#include <stdio.h>
void print(int a[5]){
    printf("%d\n",sizeof(a));
    for (int i=0;i<sizeof(a)/sizeof(int);i++){
        printf("%d\n",a[i]);
    }
}

int main(){
    int array[5]={1,2,3,4,5};
    print(array);

    return 0;
}
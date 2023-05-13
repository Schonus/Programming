#include <stdio.h>
int main(){
    int bfc=100;
    int afc_count=40;
    int count=0;
    for(int i=1,j=1,k=1,l=1;i<=10;i++){
        for(;j<=20;j++){
            for(;k<=afc_count-i-j;k++){
                l=afc_count-i-j-k;
                    if((10*i+5*j+2*k+l==100)&&i&&j&&k&&l)
                    {
                        printf("10元%d张，5元%d张，2元%d张，1元%d张\n",i,j,k,l);
                        ++count;
                    }
            }
        k=1;
        }
    j=1;
    }
    printf("共有%d种方法",count);
    return 0;
}
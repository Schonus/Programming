#include <stdio.h>
#include "functions_Sq.h"

int main(){
    Sqlist student;
    Initlist(&student);
    int index=0;
    int test_number=0;
    int result = 0;
    int i = 0,e = 0;
    // 预设数据
    for(int k = 1;k <= 10;k++){
        student.data[k-1]=k;
        student.length = k;
    }
    printf("Which do you want to operate? 1 for deleting and 2 for inserting and 0 for exit:\n");
    test_number = scanf("%d",&index);
    if(index==0){
        return 9999;
    }else if(1 == index){
        printf("Which Place do you want to delete?\n");
        scanf("%d",&i);
        result = ListDelete(&student,i,&e);
        if(!result){
            printf("Sorry,The number is fail to delete!\n");
        }
        else{
            printf("%d\n",e);
        }
    }else if(2 == index){
        printf("Which Place do you want to insert?\n");
        scanf("%d",&i);
        printf("Which value do you want to insert?\n");
        scanf("%d",&e);
        result = ListInsert(&student,i,e);
        result_display(result,&student);
    }else if(0 == test_number){
        printf("Error!\n");
    }

    return 0;
}
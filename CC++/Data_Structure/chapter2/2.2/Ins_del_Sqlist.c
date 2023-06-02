#include <stdio.h>
#include "functions_Sq.h"

int main(){
    Sqlist student;
    Initlist(&student);
    int index=0;
    int checkindex=0;
    int test_number=0;
    int result = 0;
    int i = 0,e = 0;
    printf("Please input the list:\n");
    for(int k = 1;k <= Maxsize;k++){
        if(scanf("%d",&student.data[k-1])){
            student.length++;
            if(student.length >= Maxsize || student.data[k-1] == -9999){
                printf("队列已满\n");
                break;
            }
        }
        else{
            fflush(stdin);
            break;
        }
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
            result_display(result,&student);
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
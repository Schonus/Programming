#include <stdio.h>
#include <stdlib.h>
#include "functions_Seq.h"


int main(){
    Seq_list student;
    int i=0,e=0,result = 0;
    int index=0;
    Initlist(&student);
    int p = 0;
    printf("please input the List:\n");
    while(scanf("%d",&student.data[p++])){student.length++;//录入数据，检查有没有违规输入
        if(student.length >= student.MaxSize){
            IncreaseList(&student,5);
        }
    }
    fflush(stdin);
    printf("Which do you want to operate? 1 for deleting and 2 for inserting and 0 for exit:\n");
    scanf("%d",&index);
    switch (index)
    {
    case 0:
        break;
    case 1:
        printf("Which Place do you want to delete?\n");
        scanf("%d",&i);
        result = ListDelete(&student,i,&e);
        if(!result){
            printf("Sorry,The number is fail to delete!\n");
        }
        else{
            printf("%d\n",e);
            result_display(&student);
        }
        break;
    case 2:
        printf("Which Place do you want to insert?\n");
        scanf("%d",&i);
        printf("Which value do you want to insert?\n");
        scanf("%d",&e);
        result = ListInsert(&student,i,e);
        if(!result){
            printf("Sorry,The number is fail to add!\n");
        }
        else{
            result_display(&student);
        }
        break;
    
    default:
        break;
    }
    p = student.data;
    free(p);
    p = NULL;
    return 0;
}
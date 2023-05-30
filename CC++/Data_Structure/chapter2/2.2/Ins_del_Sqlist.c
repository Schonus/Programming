#include <stdio.h>
#define Maxsize 50
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

int ListInsert(Sqlist *L,int i,int e)
{
    // if()
    return 0;
}

int main(){
    Sqlist student;
    Initlist(&student);
    int index=0;
    int test_number=0;
    int result = 0;
    int i = 0,e = 0;
    printf("Which do you want to operate? 1 for deleting and 2 for inserting and 0 for exit:\n");
    test_number = scanf("%d",&index);
    if(index==0){
        return 0;
    }else if(1 == index){
        // ListDelete(&student,i,);
    }else if(2 == index){
        printf("Which Place do you want to insert?\n");
        scanf("%d",&i);
        printf("Which value do you want to insert?\n");
        scanf("%d",&e);
        result = ListInsert(&student,i,e);
        if(1 == result)
        {
            printf("Sorry,The number is fail to inserted!\n");
        }
    }else if(0 == test_number){
        printf("Error!\n");
    }

    return 0;
}
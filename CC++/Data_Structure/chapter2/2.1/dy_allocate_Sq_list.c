#include <stdio.h>
#include <stdlib.h>
#define initsize 10
typedef struct 
{
    int *data;
    int MaxSize;
    int length;
}Seq_list;

void IncreaseList(Seq_list *student,int len)
{
    int *p = student->data;
    student->data = (int *)malloc((student->MaxSize + len) * sizeof(int));
    for(int i=0;i<student->length;i++){
        student->data[i] = p[i];
    }
    student->MaxSize = student->MaxSize + len;
    free(p); 
}

void Initlist(Seq_list *student)
{
    student->data = (int *)malloc(initsize*sizeof(int));
    student->length = 0;
    student->MaxSize = initsize;
}

int main(){
    Seq_list student;
    Initlist(&student);
    IncreaseList(&student,5);
    student.data[0] = 20;
    student.data[14] = 2;
    for (int i = 0; i < student.MaxSize ; i++)
    {
        printf("%d\n",student.data[i]);
    }
    return 0;
}
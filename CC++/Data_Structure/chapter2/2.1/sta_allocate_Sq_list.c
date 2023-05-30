#include <stdio.h>
#define Maxsize 50
typedef struct 
{
    int data[Maxsize];
    int length;
}static_list;

void Initlist(static_list *student)
{
    for(int  i=0;i<Maxsize;i++)
    {
        student->data[i] = 0;
    }
    student->length = 0;
}

int main(){
    static_list student;
    Initlist(&student);
    student.data[3] = 27;
    printf("%d",student.data[3]);
    return 0;
}
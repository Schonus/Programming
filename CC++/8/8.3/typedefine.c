#include <stdio.h>
typedef struct student
{
    int num;
    char name[20];
    char sex;
}stu,*pstu;
int main(){
    stu s = {0};
    pstu p1 = &s;//定义一个结构体指针变量
    return 0;
}
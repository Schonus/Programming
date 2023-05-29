#include <stdio.h>
typedef struct student
{
    int stu_num;00
    char name[20];
    char gender;
}stu;

int main(){
    stu student_info = {};    
    scanf("%d %s %c",&student_info.stu_num,&student_info.name,&student_info.gender);
    printf("%d %s %c",student_info.stu_num,student_info.name,student_info.gender);
    return 0;
}

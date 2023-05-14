#include <stdio.h>

struct student
{
    int number;
    char name[20];
    char sex;
    int age;
    float score;
    char addre[30];
};


int main(){
    struct student xiaowei={1001,"XiaoWei",'M',22,96.5,"Boston"};
    struct student stu_info[3];
    printf("%d,%s,%c,%d,%f,%s\n",xiaowei.number,xiaowei.name,xiaowei.sex,xiaowei.age,xiaowei.score,xiaowei.addre);
    scanf("%d%s %c%d%f%s",&xiaowei.number,xiaowei.name,&xiaowei.sex,&xiaowei.age,&xiaowei.score,xiaowei.addre);
    printf("%d,%s,%c,%d,%f,%s\n",xiaowei.number,xiaowei.name,xiaowei.sex,xiaowei.age,xiaowei.score,xiaowei.addre);
    for(int i=0;i<3;i++)
    {
        scanf("%d%s %c%d%f%s",&stu_info[i].number,stu_info[i].name,&stu_info[i].sex,&stu_info[i].age,&stu_info[i].score,stu_info[i].addre);
    }
    for(int i=0;i<3;i++)
    {
        printf("%d,%s,%c,%d,%f,%s\n",stu_info[i].number,stu_info[i].name,stu_info[i].sex,stu_info[i].age,stu_info[i].score,stu_info[i].addre);
    }
    return 0;
}
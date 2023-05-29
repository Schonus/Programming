#include <stdio.h>
struct student{
    int num;
    char name[20];
    char sex;
};

int main(){
    struct student s={1001,"bonix","M"};
    struct student sarr[3] = {1001,"Lilei","M",1002,"Bolish","M",1003,"Bohem","F"};
    struct student *p;
    p = &s;
    printf("%d,%s,%c\n",p->num,p->name,p->sex);
    p = &sarr;
    printf("%d,%s,%c\n",p->num,p->name,p->sex); 
    p++;
    printf("%d,%s,%c\n",p->num,p->name,p->sex); 
    p++;
    printf("%d,%s,%c\n",p->num,p->name,p->sex); 
}
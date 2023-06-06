#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    L_Node *next;
}L_Node,*Link_List;

bool Empty(Link_List L){
    return (L->next == NULL);
}

L_Node LocateElem(Link_List L,int e)
{
    L_Node *p = L->next;
    // 从第1个结点开始查找数据域为e的结点
    while (p != NULL && p->value != e)
    {
        p = p->next;
        return p;
    }
}

int length(Link_List L){
    int len = 0;
    L_Node *p = L;
    while (p->next != NULL)
    {
        p = p->next;
        len++;
    }
    return len;
}

void initList(Link_List &L){
    L = NULL;
}

L_Node *GetElem(Link_List L,int i){
    if(i < 1){return NULL;}
    L_Node *p1;
    *p1 = L;
    for(int j = 1; j <= i ; j++){
        if(NULL == p1){return false;}
        p1 = p1->next;
    }
    return p1;
}

int ListInsert(Link_List &L,int i,int e){
    if (i<1){
        return false;
    }
    L_Node *p1;
    int j=0;
    p1 = L;
    while (p1 != NULL && j < i-1)
    {
        p1 = p1->next;
        j++;
    }
    if(p1 == NULL){
        return false;
    }
    L_Node *p2 = (L_Node *)malloc(sizeof(L_Node));
    p2->value = e;
    p2->next = p1->next;
    p1->next = p2;
    return true;
}

bool ListDelete(Link_List &L, int i,int &e){
    if(i<1){
        return false;
    }
    L_Node *p;
    p = L;
    for(int j=1; j<i; j++){
        if(NULL == p->next){
            return false;
        }
        p = p->next;
    }
    L_Node *q = p->next;
    e = q->value;
    p->next = q->next;
    free(q);
    return true; 
}

int listNextInsert(L_Node *p1,int e){
    if(NULL == p1){
        return false;
    }
    L_Node *p2 = (L_Node *)malloc(sizeof(L_Node));
    if(NULL == p2){
        return false;
    }
    p2->value = e;
    p2->next = p1->next;
    p1->next = p2;
    return true;
}

int main(){
    Link_List student;
    initList(student);
    int i = 0;
    int e = 0;
    printf("Which place do you want to insert?\n");
    scanf("%d",&i);
    printf("Which value do you want to insert?\n");
    scanf("%d",&e);
    int result = 0;
    result = ListInsert(&student,i,e);

}
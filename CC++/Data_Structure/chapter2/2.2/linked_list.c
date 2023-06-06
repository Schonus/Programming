#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    L_Node *next;
}L_Node,*Link_List;

bool Empty(Link_List L){
    return (L == NULL);
}


void initList(Link_List &L){
    L->NULL;
}

L_Node *GetElem(Link_List L,int i){
    int j=1;
    L_Node *p = L->next;
    if(i == 0){
        return L;
    }else if(i < 1){
        return NULL;
    }
    while (j < i)
    {
        p = p->next;
    }
    return p;
}

int ListInsert(Link_List L,int i,int e){
    L_Node *p1 = L;
    for(j = 0; j < i ; j++){
        L = 
    }
    L_Node *p2 = (L_Node *)malloc(sizeof(L_Node));
    p1->next = p2;
    
}


int main(){
    Link_List student;
    initList(student);
    int result = 0;
    result = ListInsert(&student,i,e);

}
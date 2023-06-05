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

    p = NULL; 
}

void Initlist(Seq_list *student)
{
    student->data = (int *)malloc(initsize*sizeof(int));
    student->length = 0;
    student->MaxSize = initsize;
}



//从此处修改
int ListDelete(Seq_list *L,int i,int *e){
    int *p = L->data;
    if(i<1 || i > L->length){
        return false;
    }
    *e = *(p + i - 1);
    for(int j = i;j < L->length; j++){
        *(p+j-1) = *(p+j);
    }
    *(p + L->length - 1) = 0;
    L->length-=1;
    p = NULL;
    return true;
}

int ListInsert(Seq_list *L,int i,int e)
{
    int *p = L->data;
    if(i < 1 || i > L->length+1){
        return false;
    }
    else if(L->length >= L->MaxSize){
        IncreaseList(L,5);
    }
    for(int j = L->length;j >= i ; j--){
        *(p+j) = *(p+j-1);
    }
    *(p+i-1) = e;
    L->length++;
    p = NULL;
    return true;
}

void result_display(Seq_list *L){
    for (int j = 0;j < L->length;j++){
        printf("%d ",L->data[j]);
    }
}
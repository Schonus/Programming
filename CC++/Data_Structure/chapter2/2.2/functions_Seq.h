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

//从此处修改
int ListDelete(Sqlist *L,int i,int *e){
    if(i<1 || i > L->length){
        return 0;
    }
    *e = L->data[i-1];
    for(int j = i;j < L->length; j++){
        L->data[j-1] = L->data[j];
    }
    L->data[L->length-1] = 0;
    L->length-=1;
    return 1;
}

int ListInsert(Sqlist *L,int i,int e)
{
    if(i < 1 || i > L->length+1 || L->length >= Maxsize){
        return 0;
    }
    for(int j = L->length;j >= i ; j--){
        L->data[j] = L->data[j-1];
    }
    L->data[i-1] = e;
    L->length++;
    return 1;
}

void result_display(int result,Sqlist *L){
    if(result){
        for (int j = 0;j < L->length;j++){
            printf("%d ",L->data[j]);
        }
    }
    else{
        printf("Sorry,The number is fail to inserted!\n");
    }
}
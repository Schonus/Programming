#include <stdio.h>
#include <string.h>
int main(){
    char str[20]= {0},inverse_str[20]={0};
    gets(str);
    for(int compare_result=0,count=strlen(str),i=0 ; i<count?inverse_str[i++]=str[count-1-i]:((compare_result=strcmp(str,inverse_str))&&0||((compare_result>0&&printf("答案是：%d\n",compare_result=1))||(compare_result<0&&printf("答案是：%d\n",compare_result=-1))||(compare_result==0&&printf("答案是：%d\n",compare_result=0))))&&0;1){}
    // for 
    return 0;
}
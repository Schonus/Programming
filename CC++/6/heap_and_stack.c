#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *print_malloc()
{
    char *c = (char*)malloc(20);
    strcpy(c,"I am a malloc function!");
    puts(c);
    return c;
}
// char *print_stack()
// {
//     char c[100]="I am print_stack function!";
//     puts(c);
//     // return c;
// }

int main(){
    char *p;
    // p=print_stack();
    // puts(p);
    p=print_malloc();
    puts(p);
    free(p);
    return 0;
}
#include "6.5_swap.h"
//函数的定义
void swap(int* a, int* b)
{
	int tempt = 0;
	tempt = *a;
	*a = *b;
	*b = tempt;
}
#include "6.5_swap.h"
//�����Ķ���
void swap(int* a, int* b)
{
	int tempt = 0;
	tempt = *a;
	*a = *b;
	*b = tempt;
}
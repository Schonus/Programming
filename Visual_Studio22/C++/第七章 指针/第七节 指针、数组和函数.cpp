#include <iostream>
using namespace std;
//ð��������
void swap(int* num1, int* num2) /*�β�*/ {
	int tempt = 0;
	tempt = *num1;
	*num1 = *num2;
	*num2 = tempt;
}
void bubblesort(int* array, int length) /*�β�*/ {
	int tempt = 0;
	for (int i = 1; i < length; i++)
	{
		for (int j = 0; j < i; j++)
		{
			//�ж�
			if (array[i] < array[j]) {
				swap(array[i], array[j]);
			}
		}
	}
}
void announce(int* array, int length) /*�β�*/ {
	int tempt = 0;
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << endl;
	}
}
int main()
{
	//1.��������
	int arr[10] = { 4,2,6,7,8,5,1,3,10,9 };
	//2.����������ʵ��ð������
	//3.������������
	bubblesort(arr, sizeof(arr) / sizeof(int));
	announce(arr, sizeof(arr) / sizeof(int));
	system("pause");
	return 0;
}

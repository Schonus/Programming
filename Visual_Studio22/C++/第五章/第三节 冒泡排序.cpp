//#include <iostream>
//using namespace std;
////输出结果专用函数
//void calling(int* arr, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//void exchange(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//void Bsort(int* arr, int length)
//{
//	int t = 0;
//	for (int i = 0; i < length-1; i++)
//	{
//		//这里有说法的
//		for(int j = 0;j < length-1-i;j++)
//		if(arr[j+1]<arr[j])
//		{
//			//交换专用函数
//			exchange(&arr[j + 1], &arr[j]);
//		}
//		length--;
//	}
//}
//
//int main()
//{
//	//材料
//	int arr[] = { 1,3,5,4,2,8,7 };
//	//进行冒泡排序
//	Bsort(arr, sizeof(arr) / sizeof(arr[0]));
//	//输出结果
//	calling(arr, sizeof(arr) / sizeof(arr[0]));
//	system("pause");
//	return 0;
//}
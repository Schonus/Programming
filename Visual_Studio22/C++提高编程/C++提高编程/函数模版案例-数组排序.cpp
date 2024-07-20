//#include <iostream>
//using namespace std;
//
////函数模版注意事项
//
//template<class T> //typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++) 
//	{
//		int max = i;//最大数的下标
//		for (int j = i + 1; j < len; j++) 
//		{
//			if (arr[max] > arr[j])
//			max = j;
//		}
//		if (max != i) 
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
//
//void test01() 
//{
//	//测试char数组
//	char charArr[] = "bsdkle";
//	int length = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr,length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << charArr[i];
//	}
//	cout << endl;
//}
//
//
//void test02() 
//{
//	int arr[] = { 2, 4, 6, 7 ,5 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	mySort(arr, length);
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
////自动类型推导一定要推导出一致的数据类型t才可以使用
////模版一定要确定出T确定的数据类型，才可以使用
//
////主函数
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//
//
//
//}
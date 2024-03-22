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
//
//int main()
//{
//	//二维数组名称用途
//	//1.可以查看占用内存空间大小
//	int arr2[2][3] = { 
//		{1,2,5} ,
//		{3,4,6} 
//	};
//	cout << "二维数组占用内存空间为：" << sizeof(arr2) << endl;
//	cout << "二维数组第一行占用内存空间为：" << sizeof(arr2[0]) << endl;
//	cout << "二维数组第一个元素占用内存空间为：" << sizeof(arr2[0][0]) << endl;
//	cout << "二维数组行数为：" << sizeof(arr2)/ sizeof(arr2[0]) << endl;
//	cout << "二维数组列数为：" << sizeof(arr2[0]) / sizeof(arr2[0][0]) << endl;
//	//2.可以查看二维数组首地址
//	cout << "二维数组首地址为：" << arr2 << endl;
//	cout << "二维数组第一行首地址为：" << arr2[0] << endl;
//	cout << "二维数组第二行首地址为：" << arr2[1] << endl;
//	cout << "二维数组第一个元素首地址为：" << &arr2[0][0] << endl;
//	cout << "二维数组第二个元素首地址为：" << &arr2[0][1] << endl;
//	
//	system("pause");
//	return 0;
//}
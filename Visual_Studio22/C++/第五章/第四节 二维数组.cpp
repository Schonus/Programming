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
//	//1.数据类型 数组名[行数][列数];
//	int arr[2][3];
//	arr[0][0] = 2;
//	arr[0][1] = 6;
//	cout << arr[0][1] << endl;
//	calling(arr[0], 3);
//	calling(arr[1], 3);
//	//还可以用嵌套循环ij来输出……
//	//2.数据类型 数组名[行数][列数]={{数据11},{数据12},{数据21},{数据22}};（推荐）
//	int arr2[2][3] = { {1,2,5} ,{3,4,6}};
//	calling(arr2[0], 3);
//	calling(arr2[1], 3);
//	//3.数据类型 数组名[行数][列数]={数据1,数据2,数据3,数据4};
//	int arr3[2][3] = { 1,2,3,4,5,6 };
//	calling(arr3[0], 3);
//	calling(arr3[1], 3);
//	//4.数据类型 数组名[][列数]={数据1,数据2,数据3,数据4};
//	int arr4[][3] = { 1,2,3,4,5,6,7,8,9,10 };
//	calling(arr4[0], 3);
//	calling(arr4[1], 3);
//	calling(arr4[2], 3);
//	calling(arr4[3], 3);
//	system("pause");
//	return 0;
//}
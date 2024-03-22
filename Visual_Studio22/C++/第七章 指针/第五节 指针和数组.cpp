//#include <iostream>
//using namespace std;
//int main()
//{
//	//指针和数组
//	//利用指针访问数组中的元素
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	cout << "第一个元素为：" << arr[0] << endl;
//	int* p = arr;
//	cout << "利用指针访问第一个元素：" << *p << endl;
//	p++;//让指针向后偏移四个字节
//	cout << "利用指针访问第二个元素：" << *p << endl;
//	cout << "利用指针遍历数组：" << *p << endl;
//	for (p = arr; p <= &arr[9]; p++)
//	{
//		cout << "利用指针访问第" << (p-&arr[0])+1 << "个元素：" << *p << endl;
//	}
//
//	system("pause");
//	return 0;
//}

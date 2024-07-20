//#include <iostream>
//using namespace std;
//
////普通函数和函数模版区别
////1、普通函数调用可以发生隐式类型转换
////2、函数类型 用自动类型推导，不可以发生隐式类型转换
////3、函数模版 用显示指定类型，可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01() 
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << myAdd01(a, c) << endl;
//
//	//自动类型推导
//	//cout << myAdd02(a, c) << endl;
//
//
//	//显示指定类型
//	myAdd02<int>(a, c);
//
//}
//
////自动类型推导一定要推导出一致的数据类型t才可以使用
////模版一定要确定出T确定的数据类型，才可以使用
//
////主函数
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//
//
//
//}
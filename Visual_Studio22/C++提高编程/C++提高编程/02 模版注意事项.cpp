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
//
//template<typename S>
//void func2() 
//{
//
//}
//
//
////自动类型推导一定要推导出一致的数据类型t才可以使用
////模版一定要确定出T确定的数据类型，才可以使用
//
////主函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//char c = 'c';
//	//1.自动推导类型
//	//mySwap(a, b);
//	//mySwap(a, c);//错误
//	cout << a << endl << b << endl;
//	func2<int>();
//	system("pause");
//	return 0;
//
//
//
//}
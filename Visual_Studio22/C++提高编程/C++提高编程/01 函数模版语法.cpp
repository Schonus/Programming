//#include <iostream>
//using namespace std;
//
////函数模版
//
//////两个整形交换函数
//////整形交换
////void swapInt(int& a, int& b)
////{
////	int temp = a;
////	a = b;
////	b = temp;
////}
//////浮点型交换
////void swapDouble(double& a, double& b)
////{
////	double temp = a;
////	a = b;
////	b = temp;
////}
//
////另一种方式
//template<typename T>
//void mySwap(T& a, T& b) 
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
////主函数
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	//1.自动推导类型
//	//mySwap(a, b);
//	//2.手动推导
//	mySwap<int>(a, b);
//	cout << a << endl << b << endl;
//
//	/*int a = 10;
//	int b = 20;
//	swapInt(a, b);
//	cout << a << endl << b << endl;
//	
//	double c = 1.11;
//	double d = 2.22;
//	swapDouble(c, d);
//	cout << c << endl << d << endl;*/
//	system("pause");
//	return 0;  
//
//
//	
//}
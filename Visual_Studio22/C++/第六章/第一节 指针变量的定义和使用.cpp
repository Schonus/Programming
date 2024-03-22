//#include <iostream>
//using namespace std;
//int main()
//{
//	//1.定义一个指针
//	int a = 10;
//	//指针定义的语法：数据类型 * 指针变量名 （ = 某个地址）
//	//&取地址符 *取内容符 （逆操作）
//	int* p = &(*(&a));
//	cout << *p << endl;
//	cout << p << endl;
//
//	//2.使用一个指针
//	// 可以通过解引用的方式来找到指针指向的内存
//	// 指针前加*代表引用，找到指针指向的内存中的数据
//	*p = 1000;
//	cout << *p << endl;
//	cout << a << endl;
//	//错误案例，因为没有申请内存
//	//long long a = 0xC7F48FF794;
//	//int * p;
//	//p = (int*)a;
//	////cout << *p << endl;
//	//cout << p << endl;
//	//使用指针
//
//	system("pause");
//	return 0;
//}

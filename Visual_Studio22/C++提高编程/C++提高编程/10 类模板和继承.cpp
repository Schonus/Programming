//#include <iostream>
//#include <string>
//using namespace std;
//
//
////类模板与继承
//
//template <class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son :public base  //错误 ，必须要知道父类的T类型，才能继承给子类
//class Son:public Base<int>
//{
//	
//};
//
////1、指定传入类型
//
//void test01()
//{
//	Son s1; 
//}
//
//template <class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2() 
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;
//		cout << "T2的类型为：" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02() 
//{
//	Son2<int,char> s2;
//}
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
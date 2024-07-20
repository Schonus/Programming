//#include <iostream>
//#include <string>
//using namespace std;
//
////类模板中成员函数的调用时机
////类模板中成员函数在调用时才会去创建
//
//class Person1
//{
//public:
//	
//	void showPerson1()
//	{
//		cout << "Person1 show!" << endl;
//	}
//};
//
//
//class Person2
//{
//public:
//
//	void showPerson2()
//	{
//		cout << "Person2 show!" << endl;
//	}
//};
//
//template <class T>
//class MyClass
//{
//public:
//	T obj;//通用类型
//
//	//类模版中的成员函数
//	void func1() {
//		obj.showPerson1();
//	}
//
//	void func2() 
//	{
//		obj.showPerson2();
//	}
//	//虽然class myclass中没有showPerson1/2方法，但是类Person1/2中有，而这个东西只有在被谁调用的时候才会被编译
//};
//void test01()
//{
//	MyClass<Person1>m;
//	m.func1();
//	//m.func2();
//}
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
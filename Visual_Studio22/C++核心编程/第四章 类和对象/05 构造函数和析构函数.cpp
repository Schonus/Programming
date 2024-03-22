//#include <iostream>
//using namespace std;
//
////构造函数和析构函数
////1.构造函数 进行初始化操作
//
//class Person
//{
//public:
//	//1、构造函数
//	//没有返回值 不用写void
//	//函数名 与类名相同
//	//构造函数可以有参数，也可以无参数
//	//创建对象的时候，构造函数会自动调用，而且只调用一次
//	Person()
//	{
//		cout << "调用的是Person无参构造函数" << endl;
//	}
//	Person(int index)
//	{
//		cout << "调用的是Person有参构造函数" << endl;
//	}
//	
//	//2、析构函数 进行清理的操作
//	//没有返回值 不用写void
//	//函数名 与类名相同，前面加~
//	//构造函数不可以有参数，不可发生重载
//	//对象在销毁时，析构函数会自动调用，而且只调用一次
//	~Person()
//	{
//		cout << "调用的是Person析构函数" << endl;
//	}
//};
//
//void test01() 
//{
//	Person a;//因为是局部变量，所以在栈上，所以在test01执行完后，会释放这个对象
//	Person b(1);
//
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}
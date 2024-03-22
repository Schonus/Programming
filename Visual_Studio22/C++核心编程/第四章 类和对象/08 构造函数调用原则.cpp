//#include <iostream>
//using namespace std;
//
////创建函数的调用规则
////1.创建一个类，C++编译器会给每一个类添加三个函数 默认构造（空实现） 析构函数（空实现） 拷贝构造（值传递）
//
//class Person
//{
//public:
//	//如果用户定义有参构造函数，那么系统不再自动生成默认无参构造
//	Person()
//	{
//		age = 0;
//		cout << "调用的是Person无参构造函数" << endl;
//	}
//	Person(int index)
//	{
//		age = index;
//		cout << "调用的是Person有参构造函数" << endl;
//	}
//	//如果用户定义拷贝构造函数，那么C++不会提供其他构造函数
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "调用的是Person拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "调用的是Person析构函数" << endl;
//	}
//	int age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "p1的年龄为：" << p1.age << endl;
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//int main() {
//	test01();
//
//	system("pause");
//
//	return 0;
//}
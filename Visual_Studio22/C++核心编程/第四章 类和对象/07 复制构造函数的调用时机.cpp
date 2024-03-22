//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
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
//////1.使用一个已经创建完毕的对象来初始化一个新对象
////void test01()
////{
////	Person p1(10);
////	Person p2(p1);
////
////	cout << "p2的年龄为：" << p2.age << endl;
////}
//
////2.值传递的时候给函数参数传值
//
////void dowork(Person p) //拷贝过程
////{
////
////}
////
////
////void test02() 
////{
////	Person p;
////	dowork(p);
////}
//
////3.值传递返回局部对象
//
//Person dowork2() //拷贝过程
//{
//	Person p(10);
//	cout << (int*)&p << endl;//自VS2022版本以后，传的就是地址了
//	return p;
//}
//
//
//void test03() 
//{
//	Person p2 = dowork2();
//	cout << (int*)&p2 << endl;
//
//}
//
//
//int main() {
//	test03();
//
//	system("pause");
//
//	return 0;
//}
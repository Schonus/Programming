//#include <iostream>
//using namespace std;
//
////构造函数的分类和调用
////1.分类
////		按照参数分类  无参构造（或称默认构造）和有参构造
////		按照类型分类  普通构造函数和拷贝构造函数
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
//	Person(const Person* p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = (*p).age;
//		cout << "调用的是Person拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "调用的是Person析构函数" << endl;
//	}
//	int age;
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	//Person p1;//因为是局部变量，所以在栈上，所以在test01执行完后，会释放这个对象
//	//Person p2(10);
//	//Person p3(&p2);
//	//注意事项：
//	// 调用默认构造函数的时候，不要加（）
//	//Person p1();//因为该段代码会被编译器认为是一个函数的声明
//	//cout << p2.age << endl;
//	//cout << p3.age << endl;
//	
//	//2.显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造
//	Person p3 = Person(&p2);//拷贝构造
//	//注意事项：
//	//1.Person(10);//匿名对象;
//	//2.不要利用拷贝构造函数初始化匿名对象
//
//	//3.隐式转换法
//	Person p4 = 20;//等于Person p4 = Person(10);
//	Person p5 = &p4;//拷贝构造
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
////静态成员函数
////所有对象共享同一个函数
////静态成员函数只能访问静态成员变量
//
//class Person
//{
//public:
//	static void func() 
//	{
//		m_A = 300;
//		cout << "static void func()调用" << endl;
//		cout << "p的m_A = " << m_A << endl;
//		//m_C = 200;//非静态成员不得为静态函数访问
//	}
//	//特点见课件
//	static int m_A;
//	int m_C;
// private:
//	static int m_B;
//	static void func2()
//	{
//		
//	}
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
////调用
//void test01()
//{
//	//静态成员函数有两种访问方式
//	//1.通过对象
//	Person p;
//	p.func();
//	Person p2;
//	p2.func();
//	//2.通过类名
//	Person::func();
//	//私有成员的函数是无法直接访问的
//	Person::func2();
//}
//
//int main() {
//	test01();
//	//test02();
//
//	system("pause");
//	return 0;
//}
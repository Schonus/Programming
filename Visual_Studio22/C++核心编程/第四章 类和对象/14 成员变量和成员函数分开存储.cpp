//#include <iostream>
//using namespace std;
//
////成员函数和成员变量是分开存储的
//
//class Person
//{
//public:
//	int m_A;//非静态成员属于类的对象上
//	static int m_B;//静态成员不属于
//	//下列都不属于
//	void func() 
//	{
//
//	}
//	static void func2() 
//	{
//
//	}
//private:
//
//};
//
////调用
//void test01()
//{
//	Person p;
//	cout << "sizeof p = " << sizeof(p) << endl;
//}
//void test02()
//{
//	Person p;
//	cout << "sizeof p = " << sizeof(p) << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
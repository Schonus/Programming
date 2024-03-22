//#include <iostream>
//#include <string>
//using namespace std;
//
////静态成员变量
//
//class Person
//{
//public:
//	//特点见课件
//	static int m_A;
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
////调用
//void test01()
//{
//	Person p;
//	cout << "p的m_A为：" << p.m_A << endl;
//	Person p2;
//	p2.m_A = 200;//因为是静态成员，所以大家共享
//	cout << "p2的m_A为：" << p2.m_A << endl;
//	cout << "p的m_A为：" << p.m_A << endl;
//}
//
//void test02() 
//{
//	//静态成员有两种访问方式
//	//1.通过对象
//	Person p;
//	cout << "p的m_A为：" << p.m_A << endl;
//	//2.通过类名
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl; //类外无法访问私有属性
//
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
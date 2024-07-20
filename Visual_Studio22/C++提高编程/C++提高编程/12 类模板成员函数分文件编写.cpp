//#include <iostream>
//#include <string>
//using namespace std;
////#include "person.h" //第一种解决方式，直接包含源文件
////#include "person.cpp"
//
////第二种解决方式 ,写在一起,后缀命名hpp(约定俗成)
//#include "person.hpp"
//
////类模板的分文件编写问题以及解决
////template<class T1, class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////
////
////	void showPerson();
////	//{
////	//	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
////	//}
////
////
////	T1 m_Name;
////	T2 m_Age;
////};
////
//////构造函数类外实现
////template<class T1, class T2 >
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->m_Name = name;
////	this->m_Age = age;
////}
////
//////成员函数类外实现
////template<class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
////	//Person<string, int> P("Tom", 20);
////	//P.showPerson();
////}
//
//
//void test01()
//{
//	Person<string, int> P("Tom", 20);
//	P.showPerson();
//}
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
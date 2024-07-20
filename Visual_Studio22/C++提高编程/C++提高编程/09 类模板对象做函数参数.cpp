//#include <iostream>
//#include <string>
//using namespace std;
//
//
////类模板参数做函数参数
////类模板中成员函数的调用时机
////类模板中成员函数在调用时才会去创建
//
//template <class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	//类模版中的成员函数
//	void showPerson() {
//		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1、指定传入类型
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//	//m.func2();
//}
//
////2、参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1.type" << typeid(T1).name() << endl << "T2.type" << typeid(T2).name() << endl;
//}
//void test02() 
//{
//	Person<string, int>p2("zhubajie", 20);
//	printPerson2(p2);
//}
//
////3、整个类模板化
//template<class T>
//void printPerson3(T p)
//{
//	p.showPerson();
//	cout << "T.type" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p3("tangtzen", 30);
//	printPerson3(p3);
//}
//
////主函数
//int main()
//{
//	test03( );
//	system("pause");
//	return 0;
//
//
//
//}
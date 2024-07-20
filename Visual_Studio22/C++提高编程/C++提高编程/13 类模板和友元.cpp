//#include <iostream>
//#include <string>
//using namespace std;
//template<class T1, class T2>
//class Person;
//
////如果是类外实现，需要让编译器提前知道这个函数的存在！！！
////2.全局函数 类外实现
//template<class T1, class T2>//这句要加上
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现 --- 姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//}
//
////类模板的分文件编写问题以及解决
//template<class T1, class T2>
//class Person
//{
//	//1.全局函数  类内实现
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//	}
//
//	//2.全局函数 类外实现     如果是类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);
//public:
//	Person(T1 name, T2 age);
//
//
//	void showPerson();
//	//{
//	//	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
//	//}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//
//
////构造函数类外实现
//template<class T1, class T2 >
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
////1.全局函数  类内实现
//void test01()
//{
//	Person<string, int> P("Tom", 20);
//	printPerson(P);
//}
//
//
//
////1.全局函数  类内实现
//void test02()
//{
//	Person<string, int> P2("Tam", 20);
//	printPerson2(P2);
//}
//
////主函数
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//
//
//
//}
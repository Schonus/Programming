//#include <iostream>
//#include <string>
//using namespace std;
//
////类模板与函数模版的区别
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << " age: " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	//Person p1("wukong", 999);错误，因为类模板没有自动类型推导
//	Person<string, int> p2("wukong", 999);
//	p2.showPerson();
//}
//
////2、类模板在模板参数列表中可以有默认参数
//void test02() 
//{
//	Person<string> p3("猪八戒", 300.8);
//	p3.showPerson();
//}
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
//#include <iostream>
//#include <string>
//using namespace std;
//
////构造函数的分类和调用
//
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的函数构造调用" << endl;
//		m_PName = pName;
//	}
//	~Phone() 
//	{
//		cout << "调用的是Phone析构函数" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//};
//
//class Person
//{
//public:
//	
//	Person(string name,string PName):m_Name(name), m_Phone(PName)//给类赋值，类就可以直接初始化
//	{
//		cout << "Person的函数构造调用" << endl;
//	}
//	~Person()
//	{
//		cout << "调用的是Person析构函数" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
////当其他类对象作为本类成员，构造时候先构造类对象，再构造自身
////当其他类对象作为本类成员，构造时候先析构自身，再析构类对象！
//
////调用
//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << "第一个人的数据为：" << endl << p.m_Name << endl << p.m_Phone.m_PName << endl;
//}
//
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}
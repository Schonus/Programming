//#include <iostream>
//#include <string>
//using namespace std;
//
////ģ��ľ�����
////ģ�沢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��  
//
//class Person 
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////�Ա����������Ƿ����
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////���þ��廯��Person�İ汾ʵ�ִ��룬���廯�ᱻ���ȵ���
//template<> bool myCompare(Person &p1, Person &p2)
//{
//	return (p1.m_Name == p2.m_Name) && (p1.m_Age == p2.m_Age);
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//
//}
//
//void test02() 
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1,p2);
//	if (ret)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
////������
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//
//
//
//}
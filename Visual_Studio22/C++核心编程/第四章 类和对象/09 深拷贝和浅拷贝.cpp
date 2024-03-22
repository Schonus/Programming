//#include <iostream>
//#include <string>
//using namespace std;
//
////深拷贝和浅拷贝
//
//class Person
//{
//public:
//	Person()
//	{
//		m_Age = 0;
//		*m_Height = 0;
//		cout << "调用的是Person无参构造函数" << endl;
//	}
//	Person(int index,int Height)
//	{
//		m_Age = index;
//		m_Height = new int(Height);
//		cout << "调用的是Person有参构造函数" << endl;
//	}
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		m_Age = p.m_Age;
//		m_Height = new int(*p.m_Height);
//		cout << "调用的是Person拷贝构造函数" << endl;
//	}
//	~Person()
//	{
//		//析构代码的用途：将堆区开辟数据做释放操作
//		cout << "调用的是Person析构函数" << endl;
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//	}
//	int m_Age;//年龄
//	int* m_Height;//身高
//};
//
//void test01()
//{
//	Person p1(10,185);
//	cout << "p1的年龄为：" << p1.m_Age << endl;
//	cout << "p1的身高为：" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//	cout << "p2的身高为：" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//    system("pause");
//    return 0;
//}

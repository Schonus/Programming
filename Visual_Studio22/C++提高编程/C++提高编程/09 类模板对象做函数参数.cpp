//#include <iostream>
//#include <string>
//using namespace std;
//
//
////��ģ���������������
////��ģ���г�Ա�����ĵ���ʱ��
////��ģ���г�Ա�����ڵ���ʱ�Ż�ȥ����
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
//	//��ģ���еĳ�Ա����
//	void showPerson() {
//		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1��ָ����������
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("�����", 100);
//	printPerson1(p);
//	//m.func2();
//}
//
////2������ģ�廯
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
////3��������ģ�廯
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
////������
//int main()
//{
//	test03( );
//	system("pause");
//	return 0;
//
//
//
//}
//#include <iostream>
//#include <string>
//using namespace std;
//template<class T1, class T2>
//class Person;
//
////���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ��ڣ�����
////2.ȫ�ֺ��� ����ʵ��
//template<class T1, class T2>//���Ҫ����
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ�� --- ������" << p.m_Name << "���䣺" << p.m_Age << endl;
//}
//
////��ģ��ķ��ļ���д�����Լ����
//template<class T1, class T2>
//class Person
//{
//	//1.ȫ�ֺ���  ����ʵ��
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
//	}
//
//	//2.ȫ�ֺ��� ����ʵ��     ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//public:
//	Person(T1 name, T2 age);
//
//
//	void showPerson();
//	//{
//	//	cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
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
////���캯������ʵ��
//template<class T1, class T2 >
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
////1.ȫ�ֺ���  ����ʵ��
//void test01()
//{
//	Person<string, int> P("Tom", 20);
//	printPerson(P);
//}
//
//
//
////1.ȫ�ֺ���  ����ʵ��
//void test02()
//{
//	Person<string, int> P2("Tam", 20);
//	printPerson2(P2);
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
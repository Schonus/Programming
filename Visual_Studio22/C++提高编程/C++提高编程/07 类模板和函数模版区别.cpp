//#include <iostream>
//#include <string>
//using namespace std;
//
////��ģ���뺯��ģ�������
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
//	//Person p1("wukong", 999);������Ϊ��ģ��û���Զ������Ƶ�
//	Person<string, int> p2("wukong", 999);
//	p2.showPerson();
//}
//
////2����ģ����ģ������б��п�����Ĭ�ϲ���
//void test02() 
//{
//	Person<string> p3("��˽�", 300.8);
//	p3.showPerson();
//}
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
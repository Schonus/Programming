//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//
////vector��������Զ�����������
////Person
//
//class Person 
//{
//public:
//	Person(string name,int age) 
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	string getName() 
//	{
//		return m_Name;
//	}
//
//	int getAge()
//	{
//		return m_Age;
//	}
//private:
//	string m_Name;
//	int m_Age;
//};
//
//void func(Person val)
//{
//	cout << "name: " << val.getName() << endl << "age:" << val.getAge() << endl;
//}
//
//void func2(Person *val)
//{
//	cout << "name: " << val->getName() << endl << "age:" << val->getAge() << endl;
//}
//
//
//
//
//void test01() 
//{
//	vector<Person>v;
//	Person p1("����",14);
//	Person p2("Lise",13);
//	Person p3("Polka",15);
//	Person p4("Cham",16);
//	Person p5("Ticos",14);
//	Person p6("Cocos",12);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	for_each(v.begin(), v.end(), func);
//}
//
////����Զ�����������͵�ָ��
//void test02() 
//{
//
//	vector<Person *>v;
//	Person p1("����", 14);
//	Person p2("Lise", 13);
//	Person p3("Polka", 15);
//	Person p4("Cham", 16);
//	Person p5("Ticos", 14);
//	Person p6("Cocos", 12);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	v.push_back(&p6);
//
//	//��������
//	for_each(v.begin(), v.end(), func2);
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
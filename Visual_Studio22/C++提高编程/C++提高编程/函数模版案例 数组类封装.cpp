//#include <iostream>
//#include <string>
//using namespace std;
//#include "myArray.hpp"
//
//
//
//void printArray(MyArray <int>& arr0)
//{
//	for (int i = 0; i < arr0.getSize(); i++)
//	{
//		cout << arr0[i] << endl;
//	}
//}
//
////�����Զ�����������
//class Person
//{
//public:
//	Person() {}
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void printPersonArray(MyArray<Person>& arr0)
//{
//	for (int i = 0; i < arr0.getSize(); i++)
//	{
//		cout << "������" << arr0[i].m_Name << "���䣺" << arr0[i].m_Age << endl;
//	}
//}
//
//void test01()
//{
//	MyArray <int>arr1(5);
//	for(int i = 0; i < 5; i++)
//	{
//		//����β�巨����������������
//		arr1.Push_Back(i);
//
//	}
//	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
//	printArray(arr1);
//	cout << "arr1������Ϊ��"<< arr1.getCapacity() << endl;
//	cout << "arr1�Ĵ�СΪ��"<< arr1.getSize() << endl;
//	MyArray <int>arr2(arr1);
//	printArray(arr2);
//	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
//	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
//
//	//arr2 βɾ
//	arr2.Pop_Back();
//	printArray(arr2);
//	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
//	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
//
//	cout << "___________________________" << endl;
//	printArray(arr1);
//	cout << "arr2������Ϊ��" << arr1.getCapacity() << endl;
//	cout << "arr2�Ĵ�СΪ��" << arr1.getSize() << endl;
//}
//
//
//
//
//void test02()
//{
//	MyArray <Person>arr3(10);
//	Person P1("WuKong", 11);
//	Person P2("Bajie", 13);
//	Person P3("Dali", 15);
//	Person P4("Polka", 12);
//	Person P5("Silsen", 14);
//	//��ӡPerson����
//	arr3.Push_Back(P1);
//	arr3.Push_Back(P2);
//	arr3.Push_Back(P3);
//	arr3.Push_Back(P4);
//	arr3.Push_Back(P5);
//	printPersonArray(arr3);
//	cout << "arr2������Ϊ��" << arr3.getCapacity() << endl;
//	cout << "arr2�Ĵ�СΪ��" << arr3.getSize() << endl;
//}
//
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
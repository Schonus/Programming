//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//
//	Person()
//	{
//		age = 0;
//		cout << "���õ���Person�޲ι��캯��" << endl;
//	}
//	Person(int index)
//	{
//		age = index;
//		cout << "���õ���Person�вι��캯��" << endl;
//	}
//	Person(const Person& p)
//	{
//		//������������ϵ��������ԣ�������������
//		age = p.age;
//		cout << "���õ���Person�������캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "���õ���Person��������" << endl;
//	}
//	int age;
//};
//
//////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
////void test01()
////{
////	Person p1(10);
////	Person p2(p1);
////
////	cout << "p2������Ϊ��" << p2.age << endl;
////}
//
////2.ֵ���ݵ�ʱ�������������ֵ
//
////void dowork(Person p) //��������
////{
////
////}
////
////
////void test02() 
////{
////	Person p;
////	dowork(p);
////}
//
////3.ֵ���ݷ��ؾֲ�����
//
//Person dowork2() //��������
//{
//	Person p(10);
//	cout << (int*)&p << endl;//��VS2022�汾�Ժ󣬴��ľ��ǵ�ַ��
//	return p;
//}
//
//
//void test03() 
//{
//	Person p2 = dowork2();
//	cout << (int*)&p2 << endl;
//
//}
//
//
//int main() {
//	test03();
//
//	system("pause");
//
//	return 0;
//}
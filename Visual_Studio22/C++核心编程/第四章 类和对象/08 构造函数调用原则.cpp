//#include <iostream>
//using namespace std;
//
////���������ĵ��ù���
////1.����һ���࣬C++���������ÿһ��������������� Ĭ�Ϲ��죨��ʵ�֣� ������������ʵ�֣� �������죨ֵ���ݣ�
//
//class Person
//{
//public:
//	//����û������вι��캯������ôϵͳ�����Զ�����Ĭ���޲ι���
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
//	//����û����忽�����캯������ôC++�����ṩ�������캯��
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
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "p1������Ϊ��" << p1.age << endl;
//	cout << "p2������Ϊ��" << p2.age << endl;
//}
//
//int main() {
//	test01();
//
//	system("pause");
//
//	return 0;
//}
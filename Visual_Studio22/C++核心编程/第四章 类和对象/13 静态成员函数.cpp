//#include <iostream>
//using namespace std;
//
////��̬��Ա����
////���ж�����ͬһ������
////��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//class Person
//{
//public:
//	static void func() 
//	{
//		m_A = 300;
//		cout << "static void func()����" << endl;
//		cout << "p��m_A = " << m_A << endl;
//		//m_C = 200;//�Ǿ�̬��Ա����Ϊ��̬��������
//	}
//	//�ص���μ�
//	static int m_A;
//	int m_C;
// private:
//	static int m_B;
//	static void func2()
//	{
//		
//	}
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
////����
//void test01()
//{
//	//��̬��Ա���������ַ��ʷ�ʽ
//	//1.ͨ������
//	Person p;
//	p.func();
//	Person p2;
//	p2.func();
//	//2.ͨ������
//	Person::func();
//	//˽�г�Ա�ĺ������޷�ֱ�ӷ��ʵ�
//	Person::func2();
//}
//
//int main() {
//	test01();
//	//test02();
//
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
////��̬��Ա����
//
//class Person
//{
//public:
//	//�ص���μ�
//	static int m_A;
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
////����
//void test01()
//{
//	Person p;
//	cout << "p��m_AΪ��" << p.m_A << endl;
//	Person p2;
//	p2.m_A = 200;//��Ϊ�Ǿ�̬��Ա�����Դ�ҹ���
//	cout << "p2��m_AΪ��" << p2.m_A << endl;
//	cout << "p��m_AΪ��" << p.m_A << endl;
//}
//
//void test02() 
//{
//	//��̬��Ա�����ַ��ʷ�ʽ
//	//1.ͨ������
//	Person p;
//	cout << "p��m_AΪ��" << p.m_A << endl;
//	//2.ͨ������
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl; //�����޷�����˽������
//
//}
//
//int main() {
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
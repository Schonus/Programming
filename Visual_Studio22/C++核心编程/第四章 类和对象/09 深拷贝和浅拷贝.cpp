//#include <iostream>
//#include <string>
//using namespace std;
//
////�����ǳ����
//
//class Person
//{
//public:
//	Person()
//	{
//		m_Age = 0;
//		*m_Height = 0;
//		cout << "���õ���Person�޲ι��캯��" << endl;
//	}
//	Person(int index,int Height)
//	{
//		m_Age = index;
//		m_Height = new int(Height);
//		cout << "���õ���Person�вι��캯��" << endl;
//	}
//	Person(const Person& p)
//	{
//		//������������ϵ��������ԣ�������������
//		m_Age = p.m_Age;
//		m_Height = new int(*p.m_Height);
//		cout << "���õ���Person�������캯��" << endl;
//	}
//	~Person()
//	{
//		//�����������;�������������������ͷŲ���
//		cout << "���õ���Person��������" << endl;
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//	}
//	int m_Age;//����
//	int* m_Height;//���
//};
//
//void test01()
//{
//	Person p1(10,185);
//	cout << "p1������Ϊ��" << p1.m_Age << endl;
//	cout << "p1�����Ϊ��" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//	cout << "p2�����Ϊ��" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//    system("pause");
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
////���캯���ķ���͵���
////1.����
////		���ղ�������  �޲ι��죨���Ĭ�Ϲ��죩���вι���
////		�������ͷ���  ��ͨ���캯���Ϳ������캯��
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
//	Person(const Person* p)
//	{
//		//������������ϵ��������ԣ�������������
//		age = (*p).age;
//		cout << "���õ���Person�������캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "���õ���Person��������" << endl;
//	}
//	int age;
//};
//
////����
//void test01()
//{
//	//1.���ŷ�
//	//Person p1;//��Ϊ�Ǿֲ�������������ջ�ϣ�������test01ִ����󣬻��ͷ��������
//	//Person p2(10);
//	//Person p3(&p2);
//	//ע�����
//	// ����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ�ӣ���
//	//Person p1();//��Ϊ�öδ���ᱻ��������Ϊ��һ������������
//	//cout << p2.age << endl;
//	//cout << p3.age << endl;
//	
//	//2.��ʾ��
//	Person p1;
//	Person p2 = Person(10);//�вι���
//	Person p3 = Person(&p2);//��������
//	//ע�����
//	//1.Person(10);//��������;
//	//2.��Ҫ���ÿ������캯����ʼ����������
//
//	//3.��ʽת����
//	Person p4 = 20;//����Person p4 = Person(10);
//	Person p5 = &p4;//��������
//}
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}
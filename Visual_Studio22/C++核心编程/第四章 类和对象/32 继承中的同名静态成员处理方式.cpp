////    test01();
//#include <iostream>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����
//class Base
//{
//public:
//    static void func()
//    {
//        cout << "Base - static func() ����" << endl;
//    }
//    static void func(int a)
//    {
//        cout << "Base - static func(int a) ����" << endl;
//    }
//    static int m_A;
//};
//int Base::m_A = 100;
//class Son :public Base
//{
//public:
//
//    static void func()
//    {
//        cout << "Son - static func() ����" << endl;
//    }
//
//    static int m_A;
//};
//int Son::m_A = 200;
//
////������͸���ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ�����غ���
////�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
////ͬ����Ա���ݵĴ���ʽ
//void test01()
//{
//    Son s;
//    cout << "Son �µ� m_A = " << s.m_A << endl;
//    cout << "Base �µ� m_A = " << s.Base::m_A << endl;
//};
////ͬ����Ա���ԵĴ���ʽ
//void test02()
//{
//    Son s;
//    //1.ͨ���������
//    s.func();//ֱ�ӵ��� ���õ��������е�ͬ����Ա
//    s.Base::func();//�����˸���ĳ�Ա
//    s.Base::func(19);
//    //2.ͨ���������� ���Ͷ�̬�Ĳ�ͬ��
//    Son::Base::func(19);
//}
//int main()
//{
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}

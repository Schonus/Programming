//#include <iostream>
//using namespace std;
//
////�̳��е�ͬ����Ա����
//class Base
//{
//public:
//    Base()
//    {
//        m_A = 100;
//    }
//    void func()
//    {
//        cout << "Base - func() ����" << endl;
//    }
//    void func(int a)
//    {
//        cout << "Son - func(int a) ����" << endl;
//    }
//    int m_A;
//};
//class Son :public Base
//{
//public:
//    Son()
//    {
//        m_A = 200;
//    };
//    void func()
//    {
//        cout << "Son - func() ����" << endl;
//    }
//
//    int m_A;
//};
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
//    s.func();//ֱ�ӵ��� ���õ��������е�ͬ����Ա
//    s.Base::func();//�����˸���ĳ�Ա
//    s.Base::func(19);
//}
//int main()
//{
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}

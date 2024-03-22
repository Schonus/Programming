//#include <iostream>
//using namespace std;
//
////继承中的同名成员处理
//class Base
//{
//public:
//    Base()
//    {
//        m_A = 100;
//    }
//    void func()
//    {
//        cout << "Base - func() 调用" << endl;
//    }
//    void func(int a)
//    {
//        cout << "Son - func(int a) 调用" << endl;
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
//        cout << "Son - func() 调用" << endl;
//    }
//
//    int m_A;
//};
//
////当子类和父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名隐藏函数
////如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
////同名成员数据的处理方式
//void test01()
//{
//    Son s;
//    cout << "Son 下的 m_A = " << s.m_A << endl;
//    cout << "Base 下的 m_A = " << s.Base::m_A << endl;
//};
////同名成员属性的处理方式
//void test02() 
//{
//    Son s;
//    s.func();//直接调用 调用的是子类中的同名成员
//    s.Base::func();//调用了父类的成员
//    s.Base::func(19);
//}
//int main()
//{
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}

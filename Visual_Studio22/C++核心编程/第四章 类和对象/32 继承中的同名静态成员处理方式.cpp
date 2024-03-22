////    test01();
//#include <iostream>
//using namespace std;
//
////继承中的同名静态成员处理
//class Base
//{
//public:
//    static void func()
//    {
//        cout << "Base - static func() 调用" << endl;
//    }
//    static void func(int a)
//    {
//        cout << "Base - static func(int a) 调用" << endl;
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
//        cout << "Son - static func() 调用" << endl;
//    }
//
//    static int m_A;
//};
//int Son::m_A = 200;
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
//    //1.通过对象访问
//    s.func();//直接调用 调用的是子类中的同名成员
//    s.Base::func();//调用了父类的成员
//    s.Base::func(19);
//    //2.通过类名访问 （和动态的不同）
//    Son::Base::func(19);
//}
//int main()
//{
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}

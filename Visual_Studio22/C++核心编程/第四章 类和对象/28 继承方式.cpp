//#include <iostream>
//using namespace std;
//
////继承方式
//// 
////公共继承
//class Base1
//{
//public:
//    int m_A;
//protected:
//    int m_B;
//private:
//    int m_C;
//};
//class Son1 :public Base1 
//{
//public:
//    void func1() 
//    {
//        m_A = 10;  //父类中的公共权限成员 在子类中依然是公共权限
//        m_B = 20;  //父类中的保护权限成员 在子类中依然是保护权限
//        //m_C = 30;  //父类中的私有权限成员 在子类中访问不到
//    }
//};
//
////保护继承
//class Son2 :protected Base1
//{
//public:
//    void func1() 
//    {
//        m_A = 10;  //父类中的公共权限成员 在子类中是保护权限
//        m_B = 20;  //父类中的保护权限成员 在子类中是保护权限
//        //m_C = 30;  //父类中的私有权限成员 在子类中访问不到
//    }
//};
//
////私有继承
//class Son3 :protected Base1
//{
//public:
//    void func1() 
//    {
//        m_A = 10;  //父类中的公共权限成员 在子类中是私有权限
//        m_B = 20;  //父类中的保护权限成员 在子类中是私有权限
//        //m_C = 30;  //父类中的私有权限成员 在子类中访问不到
//    }
//};
//
////触发器
//void test01()
//{
//    Son1 s1;
//    s1.func1();
//    s1.m_A = 100;
//    //s1.m_B = 200;//保护权限内容，外界访问不到
//    //s1.m_C = 300;
//    cout << "s1.m_A = " << s1.m_A /*<< "s1.m_B = " << s1.m_B << "s1.m_C = " << s1.m_C*/ << endl;
//}
//void test02()
//{
//    Son2 s2;
//    s2.func1();
//    //s2.m_A = 100;// 也变成了 保护权限内容，外界访问不到
//    //s2.m_B = 200;//保护权限内容，外界访问不到
//    //s2.m_C = 300;
//    //cout << "s1.m_A = " << s1.m_A /*<< "s1.m_B = " << s1.m_B << "s1.m_C = " << s1.m_C*/ << endl;
//}
//void test03()
//{
//    Son3 s3;
//    s3.func1();
//    //s3.m_A = 100;// 也变成了 保护权限内容，外界访问不到
//    //s3.m_B = 200;//保护权限内容，外界访问不到
//    //s3.m_C = 300;
//    //cout << "s1.m_A = " << s1.m_A /*<< "s1.m_B = " << s1.m_B << "s1.m_C = " << s1.m_C*/ << endl;
//}
//
//int main()
//{
//    test03();
//    system("pause");
//    return 0;
//}

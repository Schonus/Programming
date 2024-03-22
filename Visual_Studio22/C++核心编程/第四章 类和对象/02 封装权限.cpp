//#include <iostream>
//#include <string>
//using namespace std;
//
////三种权限
////公共权限 public  类内可以访问 类外可以访问
////保护权限 protected  类内可以访问 类外不可以访问  可继承
////私有权限 private  类内可以访问 类外不可以访问  不可继承
////保护和私有的区别体现在继承上
//
//class Person 
//{
//public:
//    //公共权限
//    string m_Name;//姓名
//
//protected:
//    //保护权限
//    string m_Car;//汽车
//
//private:
//    //隐私权限
//    int m_Password;//银行卡密码
//
//public:
//    void func() 
//    {
//        m_Name = "张三";
//        m_Car = "拖拉机";
//        m_Password = 123456;
//    }
//
//private:
//    void func2() 
//    {
//
//    }
//};
//
//
//int main()
//{
//    //实例化具体对象
//    Person p1;
//    p1.m_Name = "李四";
//    //p1.m_Car = "奔驰";//无法访问保护成员
//    //p1.m_Password = 12345678;//无法访问私有成员
//    //p1.func2();
//    system("pause");
//    return 0;
//}

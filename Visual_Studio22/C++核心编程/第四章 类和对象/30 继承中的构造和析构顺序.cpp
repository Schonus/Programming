//#include <iostream>
//using namespace std;
//
////继承中的构造和析构顺序
//class Base
//{
//public:
//    Base() 
//    {
//        cout << "Base构造函数" << endl;
//    }
//    ~Base() 
//    {
//        cout << "Base析构函数" << endl;
//    }
//};
//class Son :public Base
//{
//public:
//    Son()
//    {
//        cout << "Son构造函数" << endl;
//    }
//    ~Son()
//    {
//        cout << "Son析构函数" << endl;
//    }
//};
//
////触发器
//void test01()
//{
//    //Base b;
//
//    //创建子类对象
//    //子类创建的时候会调用父类的东西，那么肯定会创建出一个父类对象
//    Son a;
//};
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}

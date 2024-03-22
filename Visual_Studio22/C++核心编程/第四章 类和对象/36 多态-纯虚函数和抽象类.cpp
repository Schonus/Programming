//#include <iostream>
//#include <string>
//using namespace std;
//
//
////纯虚函数和抽象类
//class Base
//{
//public:
//    //只要有一个这样的纯虚函数，这个类就是抽象类，无法实例化对象
//    
//    virtual void func() = 0;//这就是一个纯虚函数
//
//};
////抽象类的子类必须重写父类的函数，否则也属于抽象类
//class Son : public Base
//{
//public:
//    void func()
//    {
//        cout << "function调用！" << endl;
//    };
//};
//void test01()
//{
//    //无论是栈区还是堆区，都无法对抽象类进行实例化
//    // Base b;
//    // new Base b;
//    Base *base = new Son;
//    base->func();
//};
//
//int main()
//{
//    test01();
//    system("pause");
//    return 0;
//}

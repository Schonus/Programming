//#include <iostream>
//using namespace std;
//
////函数重载
////可以让函数名相同，增加复用性
////void func()
////{
////    cout << "函数func的调用" << endl;
////}
////void func(int a)
////{
////    cout << "函数func(int a)的调用" << endl;
////}
////void func(float a)
////{
////    cout << "函数func(float a)的调用" << endl;
////}
////void func(double a)
////{
////    cout << "函数func(double a)的调用" << endl;
////}
////void func(int a,double b)
////{
////    cout << "函数func(int a,double b)的调用" << endl;
////}
////void func(double a,int b)
////{
////    cout << "函数func(double a,int b)的调用" << endl;
////}
////函数返回值不可以作为函数重载的条件
////int func(double c, int d)
////{
////    cout << "函数func(double c, int d)的调用" << endl;
////    return d;
////}
//
////函数重载的注意事项
//// 1.引用作为重载条件
////
//
//void func(int& a) 
//{
//    cout << "函数func(int& a)的调用" << endl;
//}
//
//void func(const int& a) 
//{
//    cout << "函数func(const int& a)的调用" << endl;
//}
//
//// 2.函数重载碰到函数默认参数
//void func2(int a) 
//{
//    cout << "函数func2(int a) 的调用" << endl;
//}
////尽量避免这样的写法
////void func2(int a，int b = 10)
////{
////    cout << "函数func2(int a) 的调用" << endl;
////}
//
//int main()
//{
//    //函数重载的注意事项
//    int a = 20;
//    func(a);
//    func(10);
//    func2(10);
//
//    //函数重载的定义（这个应该放在前面的）
//    /*func();
//    func(1);
//    func(float(1.2));
//    func(1.2234);
//    func(10, 3.14);
//    func(3.14, 10);*/
//    //int sum = func(3.14, 10);
//    system("pause");
//    return 0;
//}

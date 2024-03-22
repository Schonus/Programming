//#include <iostream>
//using namespace std;
//
////引用做函数返回值
//// 1.不要返回局部变量的引用（和指针类似）
//int& test01()
//{
//    int a = 10;//局部变量存放在四区中的栈区
//    return a;
//}
//
//int& test02()
//{
//    static int a = 10;//静态变量存放在全局区，全局区上的数据在程序结束后由系统释放
//    return a;
//}
//
//int* test03()
//{
//    static int a = 10;//静态变量存放在全局区，全局区上的数据在程序结束后由系统释放
//    return &a;
//}
//int main()
//{
//    //int& ref = test01();
//    //cout << "ref = " << ref << endl;//测试时一次结果都没有对
//    //cout << "ref = " << ref << endl;
//    //cout << "ref = " << ref << endl;
//    int& ref2 = test02();
//    cout << "ref = " << ref2 << endl;//因为静态变量放在全局区，所以数据收到保护
//    cout << "ref = " << ref2 << endl;
//    cout << "ref = " << ref2 << endl;
//    test02() = 1000;//如果函数做左值，那么必须返回引用，不然的话函数返回的只是一个数（其实用指针也可以）
//    cout << "ref = " << ref2 << endl;//因为引用指向的变量被改，所以引用的数据跟着改
//    cout << "ref = " << ref2 << endl;
//    cout << "ref = " << ref2 << endl;
//    int* ref3 = test03();
//    *test03() = 100;
//    cout << "ref = " << *ref3 << endl;
//    cout << "ref = " << *ref3 << endl;
//    cout << "ref = " << *ref3 << endl;
//    //2.函数的调用可以作为左值
//    system("pause");
//    return 0;
//}
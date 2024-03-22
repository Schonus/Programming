//#include <iostream>
//#include <string>
//using namespace std;
//
////函数调用运算符()重载
////
//
////打印输出类
//class MyPrint
//{
//public:
//    //重载函数调用运算符()
//    void operator() (string test)
//    {
//        cout << test << endl;
//    }
//private:
//};
////仿函数非常灵活，没有固定的写法
////加法类
//class MyAdd
//{
//public:
//    int operator()(int num1, int num2)
//    {
//        return num1 + num2;
//    }
//};
//
//
//void test01()
//{
//    MyPrint myPrint;
//    myPrint("Hello,world!");//因为使用起来非常类似于函数调用，因此称为仿函数
//}
//
//void test02()
//{
//    MyAdd myadd;
//    int ret = myadd(3,5);//因为使用起来非常类似于函数调用，因此称为仿函数
//    cout << "ret = " << ret << endl;
//}
//
//int main()
//{
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}

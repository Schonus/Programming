//#include <iostream>
//using namespace std;
//
////函数默认参数
//int func(int a, int b = 0,int c = 10)
//{
//    return a + b + c;
//}
//int func3(int a, int b = 0, int c = 10);
////注意事项：
////1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
////int func2(int a, int b = 0,int c)//c没有默认参数，于是报错
////{
////    return a + b + c;
////}
//
//int main()
//{
//    int sum = func(32);
//    cout << "sum = " << sum << endl;
//    sum = func(29, 39, 49);//传了就用传递值，没传就用默认值
//    cout << "sum = " << sum << endl;
//
//    system("pause");
//    return 0;
//}
//
////2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
////int func3(int a, int b = 0, int c = 10)//因为有了参数，所以被认为是重定义
//int func3(int a, int b, int c){
//    return a + b + c;
//}
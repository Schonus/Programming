//#include <iostream>
//using namespace std;
//
//int* func() 
//{
//    //利用new关键字   可以将数据开辟到堆区
//    //指针本质也是一个局部变量，放在栈上，指针保存的数据是放在堆区
//    int *a = new int(10);
//    return a;
//}
//
//
//int main()
//{
//    //在堆区开辟数据
//    int* p = func();
//    cout << *p << endl;
//    cout << *p << endl;
//    delete p;
//    system("pause");
//    return 0;
//}
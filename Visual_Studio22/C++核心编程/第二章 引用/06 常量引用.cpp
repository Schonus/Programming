//#include <iostream>
//using namespace std;
//
////常量引用
////使用场景：用来修饰形参，防止误操作
//
////打印数据的函数
//void showValue(const int& val)//如果想要保持val不变，那么为了防止误操作，建议加一个const
//{
//    //val = 1000;//常量引用设完以后，val的值无法再改变
//    cout << "value = " << val << endl;
//}
//
//
//int main()
//{
//    int a = 10;
//    int& ref = a;
//    /*int& ref = 10;*///不行的，因为引用的时候，必须要找到一块儿内存，做一个指针常量的操作
//    const int& ref2 = 10;//加上const以后，编译器将代码修改为 int temp = 10; int &ref =temp;这里引用引的是一块儿临时的空间
//    //ref2 = 20;//加入const变为只读，不可以修改
//    cout << "ref2 = " << ref << endl;
//    int a2 = 100;
//    showValue(a2);
//    cout << "a2 = " << a2 << endl;
//    system("pause");
//    return 0;
//}
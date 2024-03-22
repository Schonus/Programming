//#include <iostream>
//using namespace std;
//
////交换函数
////1.值传递
//void swap01(int a,int b) 
//{
//    int tempt = a;
//    a = b;
//    b = tempt;
//}
//
//
////2.指针传递
//void swap02(int *a,int *b) 
//{
//    int tempt = *a;
//    *a = *b;
//    *b = tempt;
//}
////3.引用传递
//void swap03(int &a, int &b)
//{
//    int tempt = a;
//    a = b;
//    b = tempt;
//}
//
//void show(int index,int &num1,int &num2) 
//{
//    cout << "**********************" << endl;
//    switch (index)
//    {
//    case 1:
//        swap01(num1,num2);//值传递，形参不会修饰实参
//        break;
//    case 2:
//        swap02(&num1, &num2);//地址传递，形参会修饰实参的
//        break;
//    case 3:
//        swap03(num1, num2);//引用传递，形参会修饰实参的
//        break;
//    default:
//        break;
//    }
//    cout << "a = " << num1 << endl;
//    cout << "b = " << num2 << endl;
//    cout << "**********************" << endl;
//}
//
//int main()
//{
//    int a1 = 10;
//    int b1 = 20;
//
//    show(1, a1, b1);//采用值传递
//
//    int a2 = 10;
//    int b2 = 20;
//
//    show(2, a2, b2);//采用地址传递
//
//    int a3 = 10;
//    int b3 = 20;
//
//    show(3, a3, b3);//采用引用传递
//
//
//
//    system("pause");
//    return 0;
//}
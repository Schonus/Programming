//#include <iostream>
//using namespace std;
//
////栈区数据注意事项   ——不要返回局部变量的地址
////栈区的数据由编译器管理开辟和释放
//int* func(int b)// 形参数据会存放在栈区
//{
//    int a = 10;//局部变量  存放在栈区，栈区的数据在函数执行完后自动释放
//    return &a;//返回局部变量的地址
//}
//
//int main()
//{
//    int *address = func(0);
//    cout << *address << endl;//第一次一定能打印正确的数字，是因为编译器做了保留（但不会一直保留，我这里的结果一直是10）
//    system("pause");
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
////����Ĭ�ϲ���
//int func(int a, int b = 0,int c = 10)
//{
//    return a + b + c;
//}
//int func3(int a, int b = 0, int c = 10);
////ע�����
////1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
////int func2(int a, int b = 0,int c)//cû��Ĭ�ϲ��������Ǳ���
////{
////    return a + b + c;
////}
//
//int main()
//{
//    int sum = func(32);
//    cout << "sum = " << sum << endl;
//    sum = func(29, 39, 49);//���˾��ô���ֵ��û������Ĭ��ֵ
//    cout << "sum = " << sum << endl;
//
//    system("pause");
//    return 0;
//}
//
////2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
////int func3(int a, int b = 0, int c = 10)//��Ϊ���˲��������Ա���Ϊ���ض���
//int func3(int a, int b, int c){
//    return a + b + c;
//}
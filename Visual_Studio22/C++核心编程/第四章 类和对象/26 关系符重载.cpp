//#include <iostream>
//#include <string>
//using namespace std;
//
////�������������()����
////
//
////��ӡ�����
//class MyPrint
//{
//public:
//    //���غ������������()
//    void operator() (string test)
//    {
//        cout << test << endl;
//    }
//private:
//};
////�º����ǳ���û�й̶���д��
////�ӷ���
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
//    myPrint("Hello,world!");//��Ϊʹ�������ǳ������ں������ã���˳�Ϊ�º���
//}
//
//void test02()
//{
//    MyAdd myadd;
//    int ret = myadd(3,5);//��Ϊʹ�������ǳ������ں������ã���˳�Ϊ�º���
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

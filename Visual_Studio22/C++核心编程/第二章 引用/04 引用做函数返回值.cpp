//#include <iostream>
//using namespace std;
//
////��������������ֵ
//// 1.��Ҫ���ؾֲ����������ã���ָ�����ƣ�
//int& test01()
//{
//    int a = 10;//�ֲ���������������е�ջ��
//    return a;
//}
//
//int& test02()
//{
//    static int a = 10;//��̬���������ȫ������ȫ�����ϵ������ڳ����������ϵͳ�ͷ�
//    return a;
//}
//
//int* test03()
//{
//    static int a = 10;//��̬���������ȫ������ȫ�����ϵ������ڳ����������ϵͳ�ͷ�
//    return &a;
//}
//int main()
//{
//    //int& ref = test01();
//    //cout << "ref = " << ref << endl;//����ʱһ�ν����û�ж�
//    //cout << "ref = " << ref << endl;
//    //cout << "ref = " << ref << endl;
//    int& ref2 = test02();
//    cout << "ref = " << ref2 << endl;//��Ϊ��̬��������ȫ���������������յ�����
//    cout << "ref = " << ref2 << endl;
//    cout << "ref = " << ref2 << endl;
//    test02() = 1000;//�����������ֵ����ô���뷵�����ã���Ȼ�Ļ��������ص�ֻ��һ��������ʵ��ָ��Ҳ���ԣ�
//    cout << "ref = " << ref2 << endl;//��Ϊ����ָ��ı������ģ��������õ����ݸ��Ÿ�
//    cout << "ref = " << ref2 << endl;
//    cout << "ref = " << ref2 << endl;
//    int* ref3 = test03();
//    *test03() = 100;
//    cout << "ref = " << *ref3 << endl;
//    cout << "ref = " << *ref3 << endl;
//    cout << "ref = " << *ref3 << endl;
//    //2.�����ĵ��ÿ�����Ϊ��ֵ
//    system("pause");
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
////1.new �Ļ����﷨
//int* func () 
//{
//    //�ڶ���������������
//    //new ���ص��� ���������͵�ָ��
//    int* p = new int(10);
//    return p;
//}
//
//void test01()
//{
//    int* p = func();
//    cout << *p << endl;
//    cout << *p << endl;
//    //���������� �ɳ���Ա�����٣�����Ա�����ͷ�
//    //������ͷŶ��������ݣ����ùؼ���delete
//    delete p;
//    //cout << *p << endl;//��Ϊ�ڴ汻�ͷ��ˣ��ͷŵĿռ䲻�ɷ��ʣ��Ƿ����������ᱨ��
//}
////2.�ڶ�������new��������
//void test02()
//{
//    int* arr = new int[10];//10����������ʮ��Ԫ��
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = 100*i;
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        cout << arr[i] << endl;
//    }
//    //�ͷŶ�������
//    //�ͷ������ʱ��Ҫ��[]�ſ���
//    delete[] arr;
//}
//
//
//int main()
//{
//    test01();
//    cout << "**********************" << endl;
//    test02();
//    system("pause");
//    return 0;
//}
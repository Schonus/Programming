//#include <iostream>
//using namespace std;
//
////��������
////1.ֵ����
//void swap01(int a,int b) 
//{
//    int tempt = a;
//    a = b;
//    b = tempt;
//}
//
//
////2.ָ�봫��
//void swap02(int *a,int *b) 
//{
//    int tempt = *a;
//    *a = *b;
//    *b = tempt;
//}
////3.���ô���
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
//        swap01(num1,num2);//ֵ���ݣ��ββ�������ʵ��
//        break;
//    case 2:
//        swap02(&num1, &num2);//��ַ���ݣ��βλ�����ʵ�ε�
//        break;
//    case 3:
//        swap03(num1, num2);//���ô��ݣ��βλ�����ʵ�ε�
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
//    show(1, a1, b1);//����ֵ����
//
//    int a2 = 10;
//    int b2 = 20;
//
//    show(2, a2, b2);//���õ�ַ����
//
//    int a3 = 10;
//    int b3 = 20;
//
//    show(3, a3, b3);//�������ô���
//
//
//
//    system("pause");
//    return 0;
//}
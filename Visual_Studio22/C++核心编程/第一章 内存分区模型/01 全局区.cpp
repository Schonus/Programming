//#include <iostream>
//using namespace std;
//
////ȫ�ֱ���
//int g_a = 10;
//int g_b = 20;
//
////const���ε�ȫ�ֱ�����ȫ�ֳ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//
//int main()
//{
//    //ȫ����
//    //ȫ�ֱ�������̬����������
//
//    //������ͨ�ľֲ�����
//    int a = 0;
//    int b = 0; 
//
//    //��ʾ��ַ
//    cout << "�ֲ�����a�ĵ�ַΪ" << (long long)&a << endl;
//    cout << "�ֲ�����b�ĵ�ַΪ" << (long long)&b << endl;
//    cout << "ȫ�ֱ���g_a�ĵ�ַΪ" << (long long)&g_a << endl;
//    cout << "ȫ�ֱ���g_b�ĵ�ַΪ" << (long long)&g_b << endl;
//
//    //��̬����
//    static int s_a = 30;
//    static int s_b = 40;
//    //��ʾ��ַ
//    cout << "��̬����g_a�ĵ�ַΪ" << (long long)&s_a << endl;
//    cout << "��̬����g_b�ĵ�ַΪ" << (long long)&s_b << endl;
//
//    //����
//    //�ַ�������
//    cout << "�ַ��������ĵ�ַΪ��" << (long long)(&"Hello,world!") << endl;
//    cout << "�ַ��������ĵ�ַΪ��" << (long long)(&"Hello,world1!") << endl;
//    //const���εı�����const���ε�ȫ�ֱ��� const���εľֲ�������
//    cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (long long)(&c_g_a) << endl;
//    cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ��" << (long long)(&c_g_b) << endl;
//    const int c_l_a = 20;//c-const,l-local,g-global
//    const int c_l_b = 20;
//    cout << "�ֲ�����c_a�ĵ�ַΪ��" << (long long)(&c_l_a) << endl;
//    cout << "�ֲ�����c_b�ĵ�ַΪ��" << (long long)(&c_l_b) << endl;
//    system("pause");
//    return 0;
//}